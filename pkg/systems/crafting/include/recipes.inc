use polsys;
use datafile;

include ":gumps:yesno";
include ":gumps:requestgump";
include "include/say";
include "include/objtype";

function HaveRecipe(who, objtype)
   var items := GetObjProperty(who,  "recipes");

   if (objtype in items)
      return 1;
   endif

   return 0;
endfunction

function RecipeCharges(difficulty)
   if (difficulty >= 25)
      return 5;
   elseif (difficulty >= 20)
      return 4;
   elseif (difficulty >= 18)
      return 3;
   elseif (difficulty >= 15)
      return 2;
   else
      return 1;
   endif
endfunction

function AddRecipe(who, objtype)
   var recipes := GetObjProperty(who, "recipes");
   if (HaveRecipe(objtype))
      return 0;
   endif

   recipes.append(objtype);
   SetObjProperty(who, recipes);
   return 1;
endfunction

function CheckCharges(user_serial, charges_to_learn)
   var charge_list := GetObjProperty(recipe, "learning");
   if (!learning)
      charge_list := array{};
   endif

   var already_learning := FindInArray(charge_list, struct{ person := user_serial });
   if (already_learning)
      var charges := charge_list[already_learning].charges;
      if (charges+1 >= charges_to_learn)
         return 1;
      endif

      charge_list[already_learning].charges += charges;
      SetObjProperty(recipe, "learning", charge_list);
      TS_StartCooldown(who, "learning_recipe", 60);
      return 0;
   endif

   var me_learning := struct{ "person" := user_serial, "charges" := 1};
   charge_list.append(me_learning);
   SetObjProperty(recipe, "learning", charge_list);
   TS_StartCooldown(who, "learning_recipe", 60);
   return 0;
endfunction

function LearnRecipe(who, recipe)
   var recipe_obj := GetObjProperty(recipe, "objtype");
   if (recipe.objtype == 0xef1f)
      SendSysMessageEx(who, "Esta receita deve ser aprendida de outra forma.", SSM_INFO);
      return 0;
   elseif (HaveRecipe(recipe_obj))
      SendSysMessageEx(who, "Ja possui essa receita.", SSM_INFO);
      return 0;
   elseif (TS_GetCooldown(who, "learning_recipe"))
      SendSysMessageEx(who, "Sua mente ainda esta absorvendo a ultima receita que leu.", SSM_FAIL);
      return 0;
   endif

   var cfg := ReadConfigFile(":*:recipes");
   var obj := FindConfigElem(cfg, recipe_obj);

   var difficulty       := GetConfigInt(obj, "Difficulty");
   var type             := GetConfigString(obj, "Type");
   var charges_to_learn := RecipeCharges(difficulty);

   if (CheckCharges(who.serial, charges_to_learn))
      if (type == "group")
         var recipes = GetConfigStringArray(obj, "Recipes");
         foreach obj_type in recipes
            AddRecipe(who, obj_type);
            sleepms(2);
         endforeach
      else
         AddRecipe(who, obj_type);
      endif

      SendSysMessageEx(who, "A receita foi adicionada a sua lista.", SSM_INFO);
      DestroyItem(recipe);
      return 1;
   endif

   SendSysMessageEx(who, "Aprendeu mais sobre a receita. Leia mais vezes para dominar ela.", SSM_INFO);
   SendSysMessageEx(who, "Sera possivel ler uma receita novamente em 60 minutos.", SSM_INFO);
endfunction
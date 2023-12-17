# Projeto Servidor Ultima Online - Sussurros Eternos 2020

Bem-vindo ao reposit�rio do Projeto Servidor Ultima Online - Sussurros Eternos 2020. Este projeto � desenvolvido com a engine POL v100 e tem como objetivo criar uma experi�ncia imersiva de roleplay em Ultima Online.

## Caracter�sticas Principais

- **Sistema Baseado em D&D 5e**: Incorporamos um sistema de rolagem de dados din�mico que inclui D20, D10, D6 e D4, proporcionando uma experi�ncia de jogo rica e variada.
- **Benchmarking**: Otimizado para suportar at� 60 jogadores simult�neos, garantindo desempenho e estabilidade.

## Filosofia do Projeto

Nosso servidor � projetado para dar aos GMs (Game Masters) e jogadores um alto n�vel de controle sobre a cria��o de conte�do. Isso significa que:

- **Cria��o Flex�vel de Monstros**: Utilizamos um sistema onde os monstros podem ser criados diretamente pelos usu�rios atrav�s de gumps e armazenados em datafiles.
- **Sistema de Respawn Yggdrasil**: Implementamos um sistema de respawn exclusivo, denominado Yggdrasil, que oferece uma abordagem personalizada e integrada ao nosso mundo de jogo.

---

## Conven��es do Projeto

Para garantir a consist�ncia e a legibilidade do c�digo em todo o projeto, adotamos as seguintes conven��es de c�digo:

1. **Documenta��o de C�digo**: Cada arquivo .inc deve conter um cabe�alho com a descri��o das fun��es inclu�das no arquivo. Por exemplo:
```polscript
/**
 * [Commands for SpawnGroups]
 * LoadQuestData() - Get the DataFile document
 * SetSpawnGroupData(group_name, group_struct) - Set changes to a group;
 * GetSpawnGroupData(group_name) - Get all info about a group;
 * RemoveGroupData(group_name) - Remove a group;
 * RemoveGroupMobData(group_name, index_mob) - Remove a mob from mobList. Need index;

## Arquitetura
- NodeJS: � utlizado o servi�o pm2 para manter o servidor ligado em host externo. Para local, n�o h� necessidade de iniciar pelo pm2.
- Methods: Utiliza-se o syshook de methods sempre que poss�vel, permitindo invocar met�dos direto nos objetos (mobile, item, etc). Como h� sistemas legados no cliente, pe�o que opte-se sempre por criar m�todos quando poss�vel. (ex: Player: pkg/systems/attributes/charmethods.src , NPC: pkg/mobiles/ghaia/include/npcmethods.inc)

## Conven��es de C�digo
Para garantir a consist�ncia e a legibilidade do c�digo em todo o projeto, adotamos as seguintes conven��es de c�digo:

1. **Documenta��o de C�digo**: Cada arquivo .inc deve conter um cabe�alho com a descri��o das fun��es inclu�das no arquivo. Por exemplo:
```polscript
/**
 * [Commands for SpawnGroups]
 * LoadQuestData() - Get the DataFile document
 * SetSpawnGroupData(group_name, group_struct) - Set changes to a group;
 * GetSpawnGroupData(group_name) - Get all info about a group;
 * RemoveGroupData(group_name) - Remove a group;
 * RemoveGroupMobData(group_name, index_mob) - Remove a mob from mobList. Need index;
 * UpdateGroupMobData(group_name, mob_struct, index) - Update all informations about a mob.
 */
```

2. **Nomenclatura de Fun��es**: Os nomes das fun��es devem ser intuitivos e refletir o tipo de retorno da fun��o. Por exemplo:
```exemplo
// A fun��o retorna um valor booleano
// Correto:
isUserFrozen() // return true

// Errado:
userFrozen() // return true
```

3. **GUMP IDs**: Ao implementar novos Gumps, certifique-se de que cada Gump tenha seu pr�prio GUMP ID. O ID do gump deve ser especificado na constante de GUMPS em `scripts/include/client.inc`.

---


## Estrutura de Arquivos
A arquitetura de um projeto � fundamental para o seu sucesso. Ela define a estrutura do projeto e facilita a compreens�o do fluxo de trabalho. Uma boa arquitetura permite que os desenvolvedores encontrem facilmente o que precisam e entendam como tudo se encaixa. A seguir, apresentamos a estrutura de arquivos do nosso projeto.

`./dev`: Cont�m arquivos auxiliares n�o utilizados pelo servidor.

`./pkg`: Este � um diret�rio principal que cont�m v�rios subdiret�rios e arquivos relacionados a diferentes aspectos do jogo/servidor.
- `./pkg/items`: Inclui itens usados no jogo, categorizados em v�rios tipos como jogos, champspawn, itens destrut�veis, armadilhas, quadros de avisos, etc. Cada categoria tem seus pr�prios subdiret�rios para tipos de itens espec�ficos ou scripts relacionados.
- `./pkg/systems`: Cont�m diferentes sistemas usados no jogo, como cria��o de personagens, sistemas de loot, crafting e mais. Cada sistema est� organizado em seu pr�prio subdiret�rio.
- `./pkg/utils`: Cont�m scripts e arquivos de utilidade que auxiliam em v�rias funcionalidades como gumps, controles, coordenadas, etc.
- `./pkg/commands`: Consiste em diferentes comandos categorizados por fun��o do usu�rio (jogador, vidente, administrador, etc.).
- `./pkg/multis`: Cont�m arquivos relacionados a estruturas multi-objetos como casas ou barcos.
- `./pkg/skills`: Cont�m arquivos e scripts relacionados a v�rias habilidades do jogador no jogo.
- Outros diret�rios de itens espec�ficos como montarias, comida, etc., cada um com sua pr�pria estrutura e potencialmente contendo comandos, configura��es e arquivos de inclus�o.
- `./pkg/mobiles`: Inclui scripts e arquivos relacionados a mobiles (NPCs, criaturas) no jogo, categorizados por sua funcionalidade.

`./scripts`: Cont�m v�rios scripts POL-CORE usados no projeto, possivelmente incluindo funcionalidades principais, m�dulos e outros scripts diversos.
`./regions`: Cont�m v�rios scripts de configura��o POL-CORE para dados espec�ficos de regi�o.
`./config`: Cont�m v�rias configura��es globais POL-CORE para o servidor.

`./node_service`: Cont�m scripts NodeJS para gerenciamento do servidor.

---

## Pacotes Importantes
Descri��o de packages importantes deste servidor e onde localizar sistemas especif�cos.
**yggdrasil**: Este � o sistema mais importante relacionado � intelig�ncia de gerenciamento do shard.
   - `.spawns`: Acesso ao sistema de spawnpoints da ghaia.
   - `.dynamicevents`: Acesso ao sistema de eventos din�micos da ghaia.
   - `.editgroups`: Acesso ao sistema de cria��o de grupos de monstros da ghaia.
   - `.combatevents`: Acesso ao sistema de habilidades de monstros. Permite criar habilidades e importar em monstros. Alterar a habilidade no combatevents afeta todos os monstros que possuem a habilidade.
   - `.reagentspawn`: Acesso ao sistema de spawn de itens no mapa.
**ghaia**: Este � o sistema de AI do shard, controlando todos os tipos de NPCs aut�nomos e pets.

**faccao**: Sistema que implementa gerenciamento de fac��es por players e utiliza includes ghaia para gerenciamento de AI.
   - `.faccoes`: Acesso ao sistema de fac��es.

**quest**: Sistema de gerenciamento de quests autom�ticas, podendo fazer quest de evento �nico ou repet�veis.
   - `.questmaker`: Acesso ao sistema.

**roleplay_window**: Objeto interativo para exibir textos ou imagens. Usu�rios podem acessar ao clicar ou se posicionar pr�ximo ao objeto.

**nature**: Sistema legado para gerenciamento de clima.

**heir**: Sistema de heran�a n�o finalizado.

**email**: Sistema de caixa de mensagens para notificar jogadores de eventos importantes out-of-game.

**charactercreation**: Sistema de cria��o de personagem. Inclui depend�ncias usadas por muitos scripts, e configura��es de feats, per�cias e habilidades.

**combat**: Sistema de combate, com todas as regras PvE, PvP e feats de combate.

**vitals**: Sistema que gerencia vida, mana, stamina, death points e progress�o de experi�ncia.

**gathering**: Sistema de coleta de recursos baseado em veios. � necess�rio criar o item 0xee99 para adicionar min�rios as minas.

---

## Pacotes Auxiliares
Aqui est�o alguns pacotes auxiliares que podem ser utilizados em outros pacotes:

- `include/arrays`: Este pacote � um wrapper para o tratamento de Arrays, como ordena��o, c�pia, etc.
- `include/facings`: Este pacote � um wrapper para capturar a dire��o em que os mobiles est�o olhando.
- `include/say`: Este pacote � um wrapper para enviar mensagens para os jogadores.
- `include/shapes`: Este pacote � um wrapper para capturar coordenadas de diferentes geometrias ao redor de um ponto.
- `include/client`: Este pacote cont�m uma lista de constantes para serem usadas em diversos scripts.
- `gump`: Este pacote cont�m diversos wrappers para a constru��o de gumps.

---

## Pacotes em Desenvolvimento
**architect**: Sistema de constru��o projetado para facilitar a constru��o de staff dentro do jogo. Planejado para expans�o futura para os jogadores.
**contract**: Sistema destinado a facilitar contratos entre jogadores.

---


## Instru��es de Instala��o

1. Baixe a vers�o do POL correspondente ao seu sistema operacional em [POL Server](https://github.com/polserver/polserver/releases).
2. Extraia o arquivo em uma pasta separada.
3. Copie as seguintes pastas e execut�veis para a pasta do projeto:
   - pol
   - poltool
   - uoconvert
   - uotool
   - scripts/ecompile
   - scripts/modules/

   **Nota:** N�o copie nenhum outro arquivo, pois s�o arquivos de configura��o.

4. Abra o arquivo pol.cfg e altere UoDataFileRoot para o caminho do seu Ultima Online com os arquivos do shard.
  - Se estiver usando Linux, instale a libmysqlclient2 com o comando `apt-get install libmysqlclient2`.
6. Carregue o mapa do servidor usando o uoconvert com os seguintes comandos:
   - `./uoconvert map     realm=britannia mapid=0 usedif=1 width=6144 height=4096`
   - `./uoconvert statics realm=britannia`
   - `./uoconvert maptile realm=britannia`

7. Crie uma c�pia da pasta dev/data/ para a pasta raiz. Altere as informa��es no arquivo /data/accounts.txt para criar sua conta.
- A senha da conta � 123. N�o altere o hash!
8. Para compilar todos os scripts, abra o terminal na pasta do projeto e execute o comando `scripts/ecompile -a`.

Agora voc� est� pronto para iniciar seu servidor Ultima Online!

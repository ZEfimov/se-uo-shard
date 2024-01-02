# Habilidades Iniciais de Classe
## Guerreiro
Armas: Espadas, Arcos, Machados, Armas de Concuss�o, Armas Gigantes, L�minas Curtas, Lan�a e Alabarda
Armaduras: Armadura Leve, Armadura Pesada e Escudos
Habilidade: F�lego Extra
- Recupera 40% da stamina. 
- CD 10 min

## Ladino
Armas: L�minas Curtas, Armas Duplas, Espadas, Arcos, Balestras
Armaduras: Armadura Leve
Habilidade: Ataque Furtivo
- Atacar um alvo em modo furtivo aumenta o dano em 15%
- CD 15s

## Cl�rigo
Armas:  Armas de Concuss�o, L�minas Curtas, Espadas, Arcos
Armaduras: Simbolo Divino, Armadura Leve, Armadura Pesada
Habilidade: Resist�ncia
- Alvo recebe 1d4 em testes de resist�ncia por 15 min
- CD 2 min

## Bardo
Armas: L�minas Curtas, Balestras, Espadas e Arcos
Armaduras: Armadura Leve
Habilidade: Inspira��o de Bardo
- Alvo recebe 1d6 na pr�xima rolagem de dados.
- N�o pode usar em si mesmo.
- CD 1 min


## Elementalista
Armas: Varinhas, Cajados e Balestras
Armaduras: Nenhuma
Habilidade: Recupera��o Arcana
- Recupera 40% da mana. CD de 5 min

## Invocador
Armas: Cajados, Varinhas, L�minas Curtas
Armaduras: Armadura Leve
Habilidade: Invocar Familiar
- Invoca um familiar de luz que o acompanha por 30 min.
- O familiar pode ser usado como fonte de calor.
- CD 10 min

## Druida
Armas: Cajados, L�minas Curtas, Armas de Concuss�o
Armaduras: Armadura Leve, S�mbolos Naturais
Habilidade: Forma Selvagem
- Transforma-se em um coelho, rato ou galinha, ganhando habilidades �nicas por 5 minutos.
- Enquanto transformado, recupera 1d10 de vida a cada 30 segundos.
- CD 20 min

# Habilidades de Classe

```mermaid
graph TD
    subgraph "Guardi�o"
        G1L1([Level 1]) --> |"Pancada Atordoante"| G1F1[Feat 1]
        G1L1 --> |"C�rculo de Cura"| G1F2[Feat 2]
        G2L5([Level 5]) --> |"Grito de Guerra"| G1F3[Feat 3]
        G2L5 --> |"Lan�a de Anar"| G1F4[Feat 4]
        G3L10([Level 10]) --> |"Escudo do Guardi�o"| G1F5[Feat 5]
        G3L10 --> |"Terreno Sagrado"| G1F6[Feat 6]
        G4L15([Level 15]) --> |"Elo de Fogo"| G1F7[Feat 7]
        G4L15 --> |"V�u Sagrado"| G1F8[Feat 8]
    end
```
```mermaid
graph TD
    subgraph "Furioso"
        F1L1([Level 1]) --> |"Golpe Destruidor"| F1F81[Feat 81]
        F1L1 --> |"Finesse"| F1F9[Feat 9]
        F2L5([Level 5]) --> |"F�ria do Guerreiro"| F1F10[Feat 10]
        F2L5 --> |"Senhor da Guerra"| F1F11[Feat 11]
        F3L10([Level 10]) --> |"Sangue por Sangue"| F1F12[Feat 12]
        F3L10 --> |"Ataque do Drag�o"| F1F13[Feat 13]
        F4L15([Level 15]) --> |"Ira dos Deuses"| F1F14[Feat 14]
        F4L15 --> |"Executar"| F1F15[Feat 15]
    end
```
```mermaid
graph TD
    subgraph "Mago do V�u"
        MV1L1([Level 1]) --> |"Levita��o"| MV1F16[Feat 16]
        MV1L1 --> |"Barreira do V�u"| MV1F17[Feat 17]
        MV2L5([Level 5]) --> |"Dissipar Males"| MV1F18[Feat 18]
        MV2L5 --> |"Detonar Barreira"| MV1F19[Feat 19]
        MV3L10([Level 10]) --> |"Atravessar o V�u"| MV1F20[Feat 20]
        MV3L10 --> |"Flor do V�u"| MV1F21[Feat 21]
        MV4L15([Level 15]) --> |"Engrossar o V�u"| MV1F22[Feat 22]
        MV4L15 --> |"Romper o V�u"| MV1F23[Feat 23]
    end
```
```mermaid
graph TD
    subgraph "Elementalista"
        E1L1([Level 1]) --> |"Raio em Cadeia"| E1F24[Feat 24]
        E1L1 --> |"Encantamento do Fogo"| E1F25[Feat 25]
        E2L5([Level 5]) --> |"Trilha de Fogo"| E1F26[Feat 26]
        E2L5 --> |"Passo G�lido"| E1F27[Feat 27]
        E3L10([Level 10]) --> |"Mina de Fogo"| E1F28[Feat 28]
        E3L10 --> |"Mina de Gelo"| E1F29[Feat 29]
        E4L15([Level 15]) --> |"Pilar de Gelo"| E1F30[Feat 30]
        E4L15 --> |"Onda de Energia"| E1F31[Feat 31]
    end
```
```mermaid
graph TD
    subgraph "Infiltrador"
        I1L1([Level 1]) --> |"Passo das Sombras"| I1F32[Feat 32]
        I1L1 --> |"Armas T�xicas"| I1F33[Feat 33]
        I2L5([Level 5]) --> |"Prote��o do Crep�sculo"| I1F34[Feat 34]
        I2L5 --> |"Marca do Assassino"| I1F35[Feat 35]
        I3L10([Level 10]) --> |"Instinto Assassino"| I1F36[Feat 36]
        I3L10 --> |"Disfarces"| I1F37[Feat 37]
        I4L15([Level 15]) --> |"Sentidos Agu�ados"| I1F38[Feat 38]
        I4L15 --> |"Sentidos de Felino"| I1F39[Feat 39]
    end
```
```mermaid
graph TD
    subgraph "Ca�ador"
        C1L1([Level 1]) --> |"Salto Mortal"| C1F40[Feat 40]
        C1L1 --> |"Analisar Terreno"| C1F41[Feat 41]
        C2L5([Level 5]) --> |"Arquearia Agu�ada"| C1F42[Feat 42]
        C2L5 --> |"Esquiva Furtiva"| C1F43[Feat 43]
        C3L10([Level 10]) --> |"Marca Sombria"| C1F44[Feat 44]
        C3L10 --> |"Aura Sensorial"| C1F45[Feat 45]
        C4L15([Level 15]) --> |"Golpe Sombrio"| C1F46[Feat 46]
        C4L15 --> |"Marca Fatal"| C1F47[Feat 47]
    end
```

# Habilidades de Sub-classe

```mermaid
graph TD
    subgraph "Sabotador"
        S1L1([Level 1]) --> |"Aptitude Mec�nica"| S1F1[Feat 1]
        S1L1 --> |"Roubar"| S1F2[Feat 2]
        S2L5([Level 5]) --> |"Arrombar Fechaduras"| S1F3[Feat 3]
        S2L5 --> |"Implantar Objeto"| S1F4[Feat 4]
        S3L10([Level 10]) --> |"Armadilheiro"| S1F5[Feat 5]
    end
```
```mermaid
graph TD
    subgraph "Domador"
        D1L1([Level 1]) --> |"Domesticar Animais"| D1F1[Feat 1]
        D1L5([Level 5]) --> |"Treinador"| D1F2[Feat 2]
        D1L5 --> |"Montaria"| D1F3[Feat 3]
        D1L12([Level 12]) --> |"Mestre das Bestas"| D1F4[Feat 4]
    end
```
```mermaid
graph TD
    subgraph "Alquimista"
        A1L1([Level 1]) --> |"Medicinais e Tintas"| A1F1[Feat 1]
        A1L3([Level 3]) --> |"Potencializadores"| A1F2[Feat 2]
        A1L8([Level 8]) --> |"Explosivos"| A1F3[Feat 3]
        A1L12([Level 12]) --> |"Piroman�aco"| A1F4[Feat 4]
    end
```
```mermaid
graph TD
    subgraph "Artes�o"
        AR1L1([Level 1]) --> |"Ferraria"| AR1F1[Feat 1]
        AR1L1 --> |"Marcenaria"| AR1F2[Feat 2]
        AR1L1 --> |"Costura"| AR1F3[Feat 3]
        AR1L1 --> |"Identificar Objeto"| AR1F4[Feat 4]
        AR1L5([Level 5]) --> |"Artes�o Experiente"| AR1F5[Feat 5]
        AR1L5 --> |"Material Ex�tico"| AR1F6[Feat 6]
        AR1L10([Level 10]) --> |"Mestre Artes�o"| AR1F7[Feat 7]
    end
```
```mermaid
graph TD
    subgraph "Escavador"
        E1L1([Level 1]) --> |"Coletar Recursos"| E1F1[Feat 1]
        E1L5([Level 5]) --> |"Garimpeiro"| E1F2[Feat 2]
        E1L10([Level 10]) --> |"Bra�os Fortes"| E1F3[Feat 3]
    end
```


# Tideman - CS50x 2023

## Descrição

Este programa implementa o sistema de votação **Tideman** (também conhecido como Pares Ordenados). O objetivo do algoritmo é garantir eleições justas por meio de votação ranqueada. Os candidatos são comparados em pares, e os pares que representam vitórias mais fortes são "trancados" em um gráfico sem formar ciclos, determinando o vencedor da eleição.

## Funcionalidades

- **Entrada de votos**: Os eleitores podem classificar os candidatos em ordem de preferência.
- **Contagem de pares**: As preferências dos eleitores são convertidas em pares de candidatos, indicando quem é preferido sobre quem.
- **Trancamento de pares**: Os pares são trancados com base na força da vitória, evitando a formação de ciclos no grafo.
- **Determinação do vencedor**: O vencedor é determinado ao analisar o gráfico de pares trancados.

## Como executar

1. Compile o programa com o seguinte comando:

   ```
   make tideman
   ```

2. Execute o programa e insira o nome dos candidatos:

   ```
   ./tideman [candidatos]
   ```

3. Siga as instruções para inserir a quantidade de votos, e as preferências dos eleitores.

  ## Estrutura do Código
  - **vote**: Registra um voto, atualizando as preferências dos eleitores.
  - **add_pairs:** Identifica pares de candidatos, calculando quem é preferido sobre quem.
  - **sort_pairs**: Ordena os pares pela força da vitória.
  - **lock_pairs**: Tranca os pares em um gráfico, evitando ciclos no grafo.
  - **print_winner**: Exibe o vencedor da eleição.

    ## Algoritmo Tideman
    O algoritmo Tideman ranqueia os candidatos com base na força de suas vitórias em confrontos diretos, garantindo que o vencedor não seja derrotado por nenhum outro candidato, sem criar dependências circulares.

    ## Referências
    Este projeto faz parte do curso CS50x da Universidade de Harvard.
   

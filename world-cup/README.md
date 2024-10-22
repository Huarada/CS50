# World Cup - CS50x 2023

## Descrição

Este programa simula torneios de futebol da **Copa do Mundo** usando um algoritmo baseado em probabilidades. O programa realiza várias simulações e, ao final, calcula quantas vezes cada time vence o torneio. O objetivo é utilizar essas simulações para prever o resultado de um torneio com base nas probabilidades de vitória de cada time.

## Funcionalidades

- **Simulação de Torneio**: O programa realiza simulações completas de torneios, determinando os vencedores com base nas probabilidades associadas a cada time.
- **Previsão de Vencedores**: Após um número específico de simulações, o programa exibe quantas vezes cada time venceu o torneio.
- **Ajuste de Simulações**: O número de simulações é ajustável para permitir maior precisão nas previsões.

## Como executar

1. Execute o programa **`tournament.py`** passando um arquivo CSV com os times e suas respectivas probabilidades de vitória:

   ```bash
   python tournament.py teams.csv
   ```

2. O programa realizará várias simulações (por padrão, 1000) e exibirá o número de vezes que cada time venceu o torneio.
3. 
## Estrutura do Código
 - simulate_game: Função que simula um jogo entre dois times com base em suas probabilidades de vitória.
 - simulate_round: Função que simula uma rodada completa de jogos no torneio.
 - simulate_tournament: Função que simula o torneio inteiro, retornando o vencedor.
 - main: Função principal que lê os times de um arquivo CSV, realiza as simulações e exibe os resultados.

## Exemplo de Uso
Ao executar o programa com o seguinte comando:
```bash
python tournament.py teams.csv
```
A saída será semelhante a:
```bash
Brazil: 247 wins
Germany: 187 wins
Argentina: 220 wins
France: 346 wins
```

## Arquivos
 - tournament.py: Contém o código para simular os jogos e torneios.
 - teams.csv: Arquivo CSV que lista os times e suas respectivas probabilidades de vitória.
 - 
## Ajuste de Simulações

O número de simulações pode ser ajustado modificando o valor no código, permitindo maior precisão conforme o número de simulações aumenta. O tempo necessário para executar as simulações também aumentará proporcionalmente.
## Exemplo de Simulações

De acordo com os testes realizados (disponíveis no arquivo answers.txt):

1000 simulações: ~0.059s
10000 simulações: ~0.049s
1000000 simulações: ~8.760s

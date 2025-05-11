# Speller - CS50x 2023

## Descrição

O programa **Speller** é um verificador de ortografia que utiliza um **dicionário** para identificar palavras incorretas em um texto. O programa carrega o dicionário na memória, verifica cada palavra do texto e exibe as palavras que não foram encontradas no dicionário, indicando possíveis erros de digitação ou ortografia.

## Funcionalidades

- **Carregamento de Dicionário**: O programa carrega um dicionário de palavras na memória para ser usado na verificação.
- **Verificação de Ortografia**: Cada palavra do texto é comparada com as palavras no dicionário, e palavras não encontradas são sinalizadas como incorretas.
- **Desempenho**: O programa mede o tempo necessário para carregar o dicionário, verificar o texto e liberar a memória.

## Como executar

1. Compile o programa com o seguinte comando:

   ```bash
   make speller
   ```
2. Execute o programa com um dicionário e um arquivo de texto para verificação:
   ```bash
    ./speller [dicionario] [texto]
   ```
Por exemplo:
  ```bash
  ./speller dictionaries/large texts/sample.txt
  ```
3. O programa exibirá as palavras não encontradas no dicionário e informará o tempo gasto em cada etapa do processo

## Estrutura do Código
 - load: Função que carrega o dicionário na memória, armazenando as palavras em uma estrutura de dados apropriada (como uma hash table).
 - check: Função que verifica se uma palavra está ou não no dicionário.
 - unload: Função que libera a memória alocada para o dicionário.
 - size: Retorna o número de palavras no dicionário carregado.

## Exemplo de Uso
Se o arquivo sample.txt contiver as palavras:
  ```bash
  Hello world! This is a simple test.
  ```
E o dicionário não contiver a palavra "simple", a saída será:
```bash
Misspelled word: simple
```
## Estrutura de Dados
O dicionário foi implementado usando a seguinte estrutura de dados:

 - Hash Table: Utilizada para permitir a verificação rápida das palavras, minimizando o tempo de busca.

## Requisitos
 - Linguagem C: O programa é escrito em C e faz uso de estruturas de dados eficientes para armazenar e buscar palavras.
 - Dicionário: O programa utiliza um arquivo de texto que contém uma lista de palavras (um dicionário) para comparação com o texto fornecido.

## Desempenho
O programa mede o tempo de execução das seguintes etapas:

 - Carregar o dicionário: Tempo gasto para carregar todas as palavras do dicionário na memória.
 - Verificar o texto: Tempo necessário para verificar cada palavra do texto em comparação com o dicionário.
 - Descarregar o dicionário: Tempo para liberar a memória alocada pelo dicionário.

## Referências
Este projeto faz parte do curso CS50x da Universidade de Harvard.

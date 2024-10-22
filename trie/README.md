# Trie - CS50x 2023

## Descrição

O projeto **Trie** implementa uma **árvore de prefixos** (Trie), uma estrutura de dados eficiente para armazenar e buscar palavras, particularmente útil em contextos como dicionários e autocompletar. O projeto foca no armazenamento e na busca de nomes de cães, utilizando uma Trie para facilitar a pesquisa rápida.

## Funcionalidades

- **Inserção de Palavras**: As palavras são inseridas na Trie uma letra por vez, criando ramos de prefixos compartilhados.
- **Busca de Palavras**: O programa permite buscar rapidamente palavras na Trie, retornando se a palavra existe ou não.
- **Autocompletar**: Com base no prefixo fornecido, a Trie pode sugerir palavras correspondentes.

## Como executar

1. Compile o programa com o seguinte comando:

   ```bash
   make trie
   ```
2. Execute o programa:
   ```bash
   ./trie
   ```
3. O programa carregará nomes de cães a partir do arquivo dog_names.txt e permitirá que o usuário insira prefixos ou palavras para buscar ou autocompletar.

## Estrutura do Código
 - insert: Função que insere uma palavra na Trie, letra por letra, criando nós quando necessário.
 - search: Função que busca uma palavra completa na Trie, retornando se a palavra está ou não presente.
 - autocomplete: Função que sugere palavras com base em um prefixo fornecido pelo usuário.
 - main: Função principal que carrega as palavras do arquivo e gerencia a interação do usuário.

## Exemplo de Uso
O programa carrega o arquivo dog_names.txt, que contém nomes de cães, como:
```bash
Bella
Max
Luna
...
```
2. Ao buscar por um nome de cachorro, como "Max", o programa irá retornar se o nome foi encontrado ou não:
```bash
Enter a dog name to search: Max
Found!
```
3. Para autocompletar um prefixo, o usuário pode digitar um prefixo e o programa sugerirá possíveis nomes de cães com esse prefixo:
```bash
Enter a prefix to autocomplete: Ma
Suggestions: Max, Maya, Mario
```
## Estrutura de Dados
- Trie: A Trie é uma árvore de prefixos em que cada nó representa uma letra. As palavras são armazenadas de forma eficiente, com prefixos compartilhados entre palavras que têm o mesmo início.

## Arquivos
- trie.c: Contém a implementação da Trie e as funções de inserção, busca e autocompletar.
- dog_names.txt: Um arquivo de texto contendo nomes de cães que serão carregados na Trie para a busca e autocompletar.
## Referências
Este projeto faz parte do curso CS50x da Universidade de Harvard

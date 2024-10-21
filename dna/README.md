# DNA - CS50x 2023

## Descrição

Este programa compara uma sequência de DNA com um banco de dados de perfis genéticos para identificar a quem pertence o DNA fornecido. Ele usa **Short Tandem Repeats (STRs)**, que são sequências repetitivas de nucleotídeos no DNA, para fazer essa correspondência. O programa identifica o número de repetições de STRs na sequência de DNA e compara com as contagens de STR no banco de dados para determinar a correspondência.

## Funcionalidades

- **Leitura do banco de dados de DNA**: O programa lê um arquivo CSV contendo perfis de DNA (nomes e contagens de STR).
- **Análise da sequência de DNA**: O programa processa uma sequência de DNA e identifica quantas vezes cada STR aparece consecutivamente.
- **Identificação de correspondência**: Compara os dados de STR da sequência de DNA com os do banco de dados e identifica a pessoa correspondente.

## Como executar

1. Certifique-se de ter o Python instalado no seu sistema.

2. Para executar o programa, use o seguinte comando no terminal:

   ```bash
   python dna.py [banco_dados.csv] [sequencia_dna.txt]
   ```

# Onde:
 - [banco_dados.csv] é o arquivo CSV contendo as informações de perfis genéticos.
 - [sequencia_dna.txt] é o arquivo de texto contendo a sequência de DNA a ser analisada.

3. O programa irá comparar a sequência de DNA com o banco de dados e imprimir o nome da pessoa correspondente. Se não houver correspondência, ele exibirá "No match".

# Estrutura do Código

- read_database: Lê o arquivo CSV contendo os perfis de DNA e retorna um dicionário com os nomes e contagens de STR.
- read_sequence: Lê a sequência de DNA do arquivo de texto.
- count_strs: Conta quantas vezes cada STR aparece consecutivamente na sequência de DNA.
- find_match: Compara as contagens de STR com os perfis do banco de dados para encontrar uma correspondência.
- main: Função principal que coordena a leitura dos arquivos, a contagem de STRs e a identificação de correspondências.

# Exemplo de Uso:

1. Dado o arquivo banco_dados.csv com os perfis genéticos:
   
   ```bash
   name,AGAT,AATG,TATC
    Alice,4,1,5
    Bob,3,2,8
    Charlie,5,3,2
   ```
E o arquivo sequencia_dna.txt contendo a sequência de DNA:

   ```bash
   python dna.py banco_dados.csv sequencia_dna.txt
   ```
resultaria na saida
   ```bash
   Alice
   ```
## Regras de correspondência

- O programa identifica o número máximo de repetições consecutivas de cada STR na sequência de DNA.
- Se as contagens de STR da sequência de DNA corresponderem exatamente a um perfil no banco de dados, o nome correspondente será exibido






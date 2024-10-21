# Substituição - CS50x 2023

## Descrição

Este programa implementa uma **cifra de substituição**, onde cada letra do alfabeto em um texto claro é substituída por outra letra, de acordo com uma chave fornecida. A chave é um mapeamento de 26 caracteres distintos que define como as letras do alfabeto serão substituídas.

## Funcionalidades

- **Cifra de Substituição**: O programa substitui cada letra do texto de entrada por uma letra correspondente da chave.
- **Validação da Chave**: A chave fornecida deve conter 26 caracteres únicos e deve ser composta apenas por letras (não pode conter números ou símbolos).

## Como executar

1. Compile o programa com o seguinte comando:

   ```bash
   make substitution
   ```
2. Execute o programa passando a chave de substituição como argumento:

  ```bash
    ./substitution [chave]
  ```

3. Insira o texto que deseja cifrar.

## Estrutura do Código
- **validate_key:** Verifica se a chave de substituição é válida (26 letras distintas).
- **cipher:** Substitui cada letra do texto claro pela letra correspondente na chave fornecida.
- **main:** Ponto de entrada do programa, que valida a chave, solicita o texto a ser cifrado, e exibe o texto cifrado.

## Exemplo de Uso
- Chave de exemplo: QWERTYUIOPASDFGHJKLZXCVBNM
- Texto de entrada: HELLO
- Saída cifrada: ITSSG

## Regras de Substituição
- O programa preserva a capitalização das letras (maiúsculas e minúsculas).
- Espaços e outros caracteres não alfabéticos não são alterados.

  ## Reeferências
  Este projeto faz parte do curso CS50x da Universidade de Harvard.
  

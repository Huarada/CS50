# Trivia - CS50x 2023

## Descrição

Este projeto implementa um simples jogo de **Trivia** na web, composto por perguntas de múltipla escolha e perguntas de resposta livre. Utilizando HTML, CSS e JavaScript, o programa interage com o usuário, verificando se suas respostas estão corretas ou não.

## Funcionalidades

- **Perguntas de Múltipla Escolha**: O usuário seleciona uma resposta dentre várias opções, e o programa exibe se a escolha foi correta ou errada.
- **Perguntas de Resposta Livre**: O usuário digita sua resposta e o programa compara com a resposta correta, exibindo uma mensagem de acerto ou erro.
- **Feedback Imediato**: O programa fornece feedback instantâneo sobre a correção das respostas através de alertas.

## Como executar

1. Abra o arquivo **`index.html`** em um navegador moderno.
2. O jogo de Trivia aparecerá com uma pergunta de múltipla escolha e uma pergunta de resposta livre.
3. Responda as perguntas e o programa exibirá um alerta indicando se sua resposta está correta ou errada.

## Estrutura do Código

- **HTML**: Define a estrutura da página e exibe as perguntas.
- **JavaScript**: Gerencia a lógica de verificação de respostas, exibindo mensagens conforme as respostas são enviadas.
  - **Perguntas de múltipla escolha**: Cada botão verifica se a resposta selecionada está correta.
  - **Resposta livre**: Compara o texto digitado pelo usuário com a resposta correta usando a função `compareAnswers`.
- **CSS**: Estiliza a página, tornando-a visualmente atraente e fácil de usar.

## Exemplo de Uso

1. **Pergunta de Múltipla Escolha**:
   - Pergunta: "Quem é o protagonista de Persona 5?"
   - Respostas:
     - Makoto Nijima
     - Ren Amamiya (correto)
     - Yusuke Kitagawa
     - Ryuji Sakamoto
   - Ao selecionar a resposta correta, o programa exibirá: "correto!"

2. **Pergunta de Resposta Livre**:
   - Pergunta: "Em qual país é ilegal possuir apenas um porquinho da índia?"
   - Resposta correta: "Suíça"
   - O usuário insere sua resposta e o programa exibe se está correta ou não.

## Arquivos

- **`index.html`**: Contém a estrutura da página, as perguntas e o código JavaScript para validação de respostas.
- **`styles.css`**: Arquivo de estilo que define a aparência da página.

## Requisitos

- Um navegador moderno com suporte a HTML5, CSS e JavaScript.

## Personalização

- O conteúdo das perguntas e as respostas podem ser facilmente modificados no arquivo **`index.html`**. Basta alterar o texto das perguntas e as condições de validação nas funções JavaScript.

## Referências

Este projeto faz parte do curso [CS50x](https://cs50.harvard.edu/x) da Universidade de Harvard.

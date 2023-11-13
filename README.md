# Jogo de Adivinhação em C
## Descrição
Este é um simples jogo de adivinhação de números, implementado em C. O objetivo é adivinhar um número secreto gerado aleatoriamente pelo programa, que está entre 1 e 100. O jogador tem um total de 5 tentativas para adivinhar o número correto.

## Como Executar

Compile o código utilizando um compilador de C (como gcc) e execute o arquivo binário gerado. Para compilar, você pode usar o seguinte comando no terminal (se estiver usando gcc):



     gcc nome_do_arquivo.c -o jogo_adivinhacao
    ./jogo_adivinhacao

## Regras do Jogo

    Ao iniciar o jogo, o usuário é saudado e informado de que o número secreto está entre 1 e 100.
    O usuário começa com 200 pontos.
    A cada tentativa, o usuário deve inserir um palpite.
    Se o palpite estiver correto, o jogador vence e o jogo exibe a pontuação final, que é o número de pontos restantes multiplicado por um fator que decresce a cada tentativa.
    Se o palpite estiver errado, o jogo informa se o número secreto é maior ou menor que o palpite.
    A pontuação diminui com base na diferença entre o palpite e o número secreto.
    Se o usuário não adivinhar o número após 5 tentativas, o jogo termina e revela o número secreto.

## Variáveis

    numerosecreto: Armazena o número secreto que o usuário deve adivinhar.
    pontos: Armazena a pontuação atual do jogador.
    chute: Recebe o palpite do usuário a cada tentativa.

## Funções

    srand e time: Usadas para garantir que um novo número secreto seja gerado a cada vez que o jogo é iniciado.
    scanf: Utilizado para capturar o palpite do usuário.
    printf: Utilizado para comunicar com o usuário.
    abs: Calcula a diferença absoluta entre o palpite e o número secreto para ajustar a pontuação.

## Pontuação

  A pontuação começa em 200 e diminui com cada palpite, de acordo com a diferença absoluta entre o palpite e o número secreto. Se o usuário adivinha corretamente, a pontuação é multiplicada por um fator decrescente (iniciando em 6 e decrescendo a cada tentativa).

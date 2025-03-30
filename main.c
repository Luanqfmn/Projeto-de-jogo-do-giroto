#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int menu;
    char escolha;

    do {
        printf("TITULO DO JOGO\n1) PERGUNTAS E RESPOSTAS\n2) COBRA NA CAIXA\n3) GOUSMAS WAR\n4) SAIR\n\n");
        scanf("%d", &menu); // Lê a opção escolhida pelo usuário

        // jogo 1
        if (menu == 1) {
            do {
                printf("PERGUNTAS E RESPOSTAS\n");
                printf("Voce escolheu um jogo de perguntas e respostas.\n");
                printf("1) Qual e a capital do Brasil?\n");
                printf("a) Sao Paulo\n");
                printf("b) Rio de Janeiro\n");
                printf("c) Brasilia\n");
                printf("d) Salvador\n\n");
                char resposta;
                scanf(" %c", &resposta); // Lê a resposta escolhida pelo usuário
                if (resposta == 'c') {
                    printf("Resposta correta!\n");
                } else {
                    printf("Resposta incorreta!\n");
                }
                printf("2) Quais desses animais e um mamifero?\n");
                printf("a) Tubarao\n");
                printf("b) Golfinho\n");
                printf("c) Carpa\n");
                printf("d) Marlin\n\n");
                char resposta2;
                scanf(" %c", &resposta2); // Lê a resposta escolhida pelo usuário
                if (resposta2 == 'b') {
                    printf("Resposta correta!\n");
                } else {
                    printf("Resposta incorreta!\n");
                }
                printf("3) Qual e o maior orgao do corpo humano?\n");
                printf("a) Figado\n");
                printf("b) Pulmao\n");
                printf("c) Intestino\n");
                printf("d) Pele\n\n");
                char resposta3;
                scanf(" %c", &resposta3); // Lê a resposta escolhida pelo usuário
                if (resposta3 == 'd') {
                    printf("Resposta correta!\n");
                } else {
                    printf("Resposta incorreta!\n");
                }
                printf("4) Qual e o maior continente do mundo?\n");
                printf("a) America\n");
                printf("b) Asia\n");
                printf("c) Africa\n");
                printf("d) Europa\n\n");
                char resposta4;
                scanf(" %c", &resposta4); // Lê a resposta escolhida pelo usuário
                if (resposta4 == 'b') {
                    printf("Resposta correta!\n");
                } else {
                    printf("Resposta incorreta!\n");
                }
                printf("5) O que e um ano bissexto?\n");
                printf("a) Um ano com 366 dias\n");
                printf("b) Um ano com 365 dias\n");
                printf("c) Um ano com 364 dias\n");
                printf("d) Um ano com 363 dias\n\n");
                char resposta5;
                scanf(" %c", &resposta5); // Lê a resposta escolhida pelo usuário
                if (resposta5 == 'a') {
                    printf("Resposta correta!\n");
                } else {
                    printf("Resposta incorreta!\n");
                }
                printf("VOCE QUER JOGAR DE NOVO OU VOLTAR AO MENU PRINCIPAL?\n");
                printf("1) JOGAR DE NOVO\n");
                printf("2) VOLTAR AO MENU PRINCIPAL\n");
                int escolha;
                scanf("%d", &escolha);
                if (escolha == 2) {
                    break;
                }
            } while (1);
        } else if (menu == 2) { //jogo 2
            do {
                printf("COBRA NA CAIXA\n");
                printf("A historia do jogo se passa dentro de uma tumba egipcia onde dois exploradores ficaram presos. No centro da sala, ha cinco caixas: uma delas contem o botao para abrir a porta, enquanto uma outra esconde uma cobra mortal. A cada rodada, o local do botao e da cobra muda de caixa de forma aleatoria, aumentando o desafio e a imprevisibilidade do jogo.\n");
                printf("Escolha o seu nome:\n");
                printf("1) Alice\n2) Henry\n3) Carol\n4) Dave\n5) Eve\n6) Frank\n7) Grace\n");
                char* nomes[] = {"Alice", "Henry", "Carol", "Dave", "Eve", "Frank", "Grace"};
                int jogador1, jogador2;
                printf("Jogador 1, escolha um nome (1-7): ");
                scanf("%d", &jogador1);
                printf("Jogador 2, escolha um nome (1-7): ");
                scanf("%d", &jogador2);

                srand(time(NULL));
                int jogadorAtual = rand() % 2 + 1;
                printf("%s comeca!\n", nomes[jogadorAtual == 1 ? jogador1 - 1 : jogador2 - 1]);

                int encontrou = 0;
                while (!encontrou) {
                    printf("%s, escolha uma caixa de 1 a 5:\n", nomes[jogadorAtual == 1 ? jogador1 - 1 : jogador2 - 1]);
                    int caixa;
                    scanf("%d", &caixa);
                    int cobra = rand() % 5 + 1;
                    int botao = rand() % 5 + 1;
                    while (cobra == botao) {
                        botao = rand() % 5 + 1;
                    }

                    if (caixa == cobra) {
                        printf("Voce abriu a caixa errada e foi mordido pela cobra! %s perdeu!\n", nomes[jogadorAtual == 1 ? jogador1 - 1 : jogador2 - 1]);
                        printf("%s venceu!\n", nomes[jogadorAtual == 1 ? jogador2 - 1 : jogador1 - 1]);
                        encontrou = 1;
                    } else if (caixa == botao) {
                        printf("Voce abriu a caixa certa e conseguiu sair da tumba! %s venceu!\n", nomes[jogadorAtual == 1 ? jogador1 - 1 : jogador2 - 1]);
                        encontrou = 1;
                    } else {
                        printf("Voce abriu uma caixa vazia! Nenhuma ação ocorreu.\n");
                        // Alterna o jogador atual
                        jogadorAtual = (jogadorAtual == 1) ? 2 : 1;
                    }
                }

                printf("VOCE QUER JOGAR DE NOVO OU VOLTAR AO MENU PRINCIPAL?\n");
                printf("1) JOGAR DE NOVO\n");
                printf("2) VOLTAR AO MENU PRINCIPAL\n");
                int escolha;
                scanf("%d", &escolha);
                if (escolha == 2) {
                    break;
                }
            } while (1);
        } else if (menu == 3) { // jogo 3
            do{
            printf("GOUSMAS WAR\n");
            printf("Voce escolheu o jogo Gousmas War.\n");
            printf("Neste jogo de estrategia, os jogadores controlam criaturas chamadas Gousmas, que podem se dividir e acumular furia ao serem atacadas.\n");
            printf("Cada jogador possui 2 Gousmas, cada Gousma inicia com nivel de furia 1 e deve tentar eliminar as Gousmas do adversario.\n");
            printf("O jogador que eliminar todas as Gousmas do adversario vence.\n");

            int furiaJogador1[2] = {1, 1}; // Níveis de fúria das Gousmas do Jogador 1
            int furiaJogador2[2] = {1, 1}; // Níveis de fúria das Gousmas do Jogador 2
            int gousmasJogador1 = 2; // Número de Gousmas do Jogador 1
            int gousmasJogador2 = 2; // Número de Gousmas do Jogador 2
            int jogadorAtual = 1; // Jogador 1 começa
            int fimDeJogo = 0;

            while (!fimDeJogo) {
                printf("\nTurno do %s\n", jogadorAtual == 1 ? "Jogador 1" : "Jogador 2");
                printf("Escolha uma acao:\n");
                printf("1) Atacar uma Gousma adversaria\n");
                printf("2) Dividir uma Gousma\n");
                int acao;
                scanf("%d", &acao);

                if (acao == 1) { // Atacar
                    int atacante, alvo;
                    printf("Escolha sua Gousma para atacar (1 ou 2): ");
                    scanf("%d", &atacante);
                    printf("Escolha a Gousma adversaria para atacar (1 ou 2): ");
                    scanf("%d", &alvo);

                    if (jogadorAtual == 1) {
                        if (atacante > gousmasJogador1 || alvo > gousmasJogador2 || atacante < 1 || alvo < 1) {
                            printf("Escolha invalida!\n");
                            continue;
                        }
                        furiaJogador2[alvo - 1] += furiaJogador1[atacante - 1];
                        printf("Gousma %d do Jogador 1 atacou a Gousma %d do Jogador 2!\n", atacante, alvo);
                        if (furiaJogador2[alvo - 1] > 5) {
                            printf("A Gousma %d do Jogador 2 se desintegrou!\n", alvo);
                            furiaJogador2[alvo - 1] = 0;
                            gousmasJogador2--;
                        }
                    } else {
                        if (atacante > gousmasJogador2 || alvo > gousmasJogador1 || atacante < 1 || alvo < 1) {
                            printf("Escolha invalida!\n");
                            continue;
                        }
                        furiaJogador1[alvo - 1] += furiaJogador2[atacante - 1];
                        printf("Gousma %d do Jogador 2 atacou a Gousma %d do Jogador 1!\n", atacante, alvo);
                        if (furiaJogador1[alvo - 1] > 5) {
                            printf("A Gousma %d do Jogador 1 se desintegrou!\n", alvo);
                            furiaJogador1[alvo - 1] = 0;
                            gousmasJogador1--;
                        }
                    }
                } else if (acao == 2) { // Dividir
                    if ((jogadorAtual == 1 && gousmasJogador1 == 2) || (jogadorAtual == 2 && gousmasJogador2 == 2)) {
                        printf("Voce ja possui o limite de 2 Gousmas!\n");
                        continue;
                    }
                    int gousma;
                    printf("Escolha a Gousma para dividir (1 ou 2): ");
                    scanf("%d", &gousma);

                    if (jogadorAtual == 1) {
                        if (gousma > gousmasJogador1 || gousma < 1) {
                            printf("Escolha invalida!\n");
                            continue;
                        }
                        int furiaDividida;
                        printf("Quanto de furia deseja transferir para a nova Gousma (1 a %d): ", furiaJogador1[gousma - 1] - 1);
                        scanf("%d", &furiaDividida);
                        if (furiaDividida < 1 || furiaDividida >= furiaJogador1[gousma - 1]) {
                            printf("Valor invalido!\n");
                            continue;
                        }
                        furiaJogador1[gousma - 1] -= furiaDividida;
                        furiaJogador1[gousmasJogador1] = furiaDividida;
                        gousmasJogador1++;
                        printf("Gousma %d do Jogador 1 foi dividida!\n", gousma);
                    } else {
                        if (gousma > gousmasJogador2 || gousma < 1) {
                            printf("Escolha invalida!\n");
                            continue;
                        }
                        int furiaDividida;
                        printf("Quanto de furia deseja transferir para a nova Gousma (1 a %d): ", furiaJogador2[gousma - 1] - 1);
                        scanf("%d", &furiaDividida);
                        if (furiaDividida < 1 || furiaDividida >= furiaJogador2[gousma - 1]) {
                            printf("Valor invalido!\n");
                            continue;
                        }
                        furiaJogador2[gousma - 1] -= furiaDividida;
                        furiaJogador2[gousmasJogador2] = furiaDividida;
                        gousmasJogador2++;
                        printf("Gousma %d do Jogador 2 foi dividida!\n", gousma);
                    }
                } else {
                    printf("Acao invalida!\n");
                    continue;
                }

                // Verifica se algum jogador perdeu todas as Gousmas
                if (gousmasJogador1 == 0) {
                    printf("Jogador 2 venceu!\n");
                    fimDeJogo = 1;
                } else if (gousmasJogador2 == 0) {
                    printf("Jogador 1 venceu!\n");
                    fimDeJogo = 1;
                }

                // Alterna o jogador atual
                jogadorAtual = (jogadorAtual == 1) ? 2 : 1;
            }

            // Pergunta se o jogador deseja jogar novamente ou voltar ao menu principal
            printf("VOCE QUER JOGAR DE NOVO OU VOLTAR AO MENU PRINCIPAL?\n");
            printf("1) JOGAR DE NOVO\n");
            printf("2) VOLTAR AO MENU PRINCIPAL\n");
            int escolha;
            scanf("%d", &escolha);
            if (escolha == 2) {
                break;
            }
            } while (1);
        } else if (menu == 4) {
            printf("VOCE ESCOLHEU SAIR\n");
            break;
        } else {
            printf("Opção inválida\n");
        }

        // pergunta se o usuario deseja continuar
        printf("Deseja voltar ao menu principal? (s/n)\n");
        scanf(" %c", &escolha);
        if (escolha == 'n') {
            printf("Obrigado por jogar!\n");
            break;
        }
    } while (escolha != 'n');

    return 0;
}
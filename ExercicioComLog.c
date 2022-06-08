#include <stdio.h>
#include <ctype.h>
/*
    Desenvolver um programa que simule uma calculadora
    que realize as seguintes operações: adição (+),
    subtração (-), multiplicação (x), divisão (/) e logaritmo
    (L). O sistema deve permanecer apresentando um
    menu ao usuário até que este opte pela opção de saída
    (S). Se a opção escolhida for uma das 4 operações
    básicas, devem ser solicitados os dois operadores; caso
    escolha logaritmo, devem ser solicitados o numero
    (logaritmando) e a base.
            Nota: logba = c <-> bc = a
        Observações: todos os operandos são numeros
        reais, assim como a base e o logaritmando. Porém,
        o resultado do logaritmo deverão¡ ser inteiro.
*/

    void main(){
        //declaração de varariáveis
            char menu;
            float n1=0, n2=0, operacao, base, logarit;
            int log=0;
        //estrutura de repetição
            while(menu!='S')
            {
                printf("\n\t\t CALCULADORA\n");
                printf("Digite [+]SOMA\t\t\tDigite [-]SUBTRACAO\nDigite [X]MULTIPLICACAO\t\tDigite [/]DIVISAO\nDigite [L]Logaritmo\t\tDigite [S]PARA SAIR\n\n");
                fflush(stdin);
                scanf("%c", &menu);
                menu=toupper(menu);

                //estrutura de condição
                    switch(menu)
                    {
                    	//adição
                        case '+':
                        printf("\nDigite um numero: ");
                        scanf("%f", &n1);
                        printf("Digite outro numero: ");
                        scanf("%f", &n2);
                            operacao= n1+n2;
                            printf("\nResultado: %.1f + %.1f = %.1f\n", n1, n2,operacao);
                         break;
						//subtração
                        case '-':
                        printf("\nDigite um numero: ");
                        scanf("%f", &n1);
                        printf("Digite outro numero: ");
                        scanf("%f", &n2);
                            operacao= n1-n2;
                            printf("\nResultado: %.1f - %.1f = %.1f\n", n1, n2,operacao);
                         break;
						//multiplicação
                        case 'X':
                        printf("\nDigite um numero: ");
                        scanf("%f", &n1);
                        printf("Digite outro numero: ");
                        scanf("%f", &n2);
                            operacao= n1*n2;
                            printf("\nResultado: %.1f x %.1f = %.1f\n", n1, n2,operacao);
                         break;
						//divisão
                        case '/':
                        printf("\nDigite um numero: ");
                        scanf("%f", &n1);
                        printf("Digite outro numero: ");
                        scanf("%f", &n2);
                            operacao= n1/n2;
                            printf("\nResultado: %.1f / %.1f = %.1f\n", n1, n2,operacao);
                         break;
						//log
                        case 'L':
                        printf("\nDigite a base: ");
                        scanf("%f", &base);
                        printf("Digite o logaritmando: ");
                        scanf("%f", &logarit);
                            while(logarit!=1)
                            {
                                logarit=(int)logarit/base;
                                log++;
                            }
                        printf("\nO resultado e: %d\n",log);
                            log=0;
                            break;
                    }
            }

                printf("\nO PROGRAMA FOI ENCERRADO!");

    }

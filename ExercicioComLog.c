#include <stdio.h>
#include <ctype.h>
/*
    Desenvolver um programa que simule uma calculadora
    que realize as seguintes opera��es: adi��o (+),
    subtra��o (-), multiplica��o (x), divis�o (/) e logaritmo
    (L). O sistema deve permanecer apresentando um
    menu ao usu�rio at� que este opte pela op��o de sa�da
    (S). Se a op��o escolhida for uma das 4 opera��es
    b�sicas, devem ser solicitados os dois operadores; caso
    escolha logaritmo, devem ser solicitados o numero
    (logaritmando) e a base.
            Nota: logba = c <-> bc = a
        Observa��es: todos os operandos s�o numeros
        reais, assim como a base e o logaritmando. Por�m,
        o resultado do logaritmo dever�o� ser inteiro.
*/

    void main(){
        //declara��o de varari�veis
            char menu;
            float n1=0, n2=0, operacao, base, logarit;
            int log=0;
        //estrutura de repeti��o
            while(menu!='S')
            {
                printf("\n\t\t CALCULADORA\n");
                printf("Digite [+]SOMA\t\t\tDigite [-]SUBTRACAO\nDigite [X]MULTIPLICACAO\t\tDigite [/]DIVISAO\nDigite [L]Logaritmo\t\tDigite [S]PARA SAIR\n\n");
                fflush(stdin);
                scanf("%c", &menu);
                menu=toupper(menu);

                //estrutura de condi��o
                    switch(menu)
                    {
                    	//adi��o
                        case '+':
                        printf("\nDigite um numero: ");
                        scanf("%f", &n1);
                        printf("Digite outro numero: ");
                        scanf("%f", &n2);
                            operacao= n1+n2;
                            printf("\nResultado: %.1f + %.1f = %.1f\n", n1, n2,operacao);
                         break;
						//subtra��o
                        case '-':
                        printf("\nDigite um numero: ");
                        scanf("%f", &n1);
                        printf("Digite outro numero: ");
                        scanf("%f", &n2);
                            operacao= n1-n2;
                            printf("\nResultado: %.1f - %.1f = %.1f\n", n1, n2,operacao);
                         break;
						//multiplica��o
                        case 'X':
                        printf("\nDigite um numero: ");
                        scanf("%f", &n1);
                        printf("Digite outro numero: ");
                        scanf("%f", &n2);
                            operacao= n1*n2;
                            printf("\nResultado: %.1f x %.1f = %.1f\n", n1, n2,operacao);
                         break;
						//divis�o
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

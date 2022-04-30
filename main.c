/******************************************************************************
Dia 30/04/2022
1) faça um algoritmo que simule o funcionamento de um caixa eletrônico, onde será apresentado 
uma lista de operações:

1-Saldo
2-Saque
3-Deposito
Ao iniciar o programa determine um valor inicio para a variável saldo, 
se o cliente escolher a opção 1 mostre o valor do saldo, 
caso escolha o valor 2 leia o valor a ser sacado e verifique se existe saldo suficiente, 
se o saldo for maior ou igual , deduza da variável saldo o valor solicitado, 
caso não haja saldo suficiente mostre a mensagem “Saldo Insuficiente”, 
caso a opção 3 seja escolhida adicione o valor informado de deposito ao saldo

*******************************************************************************/
#include <stdio.h>

int main()
{
   int caixa;
   float saldo,saque,deposito,vsaque,vdeposito;
   
    
 printf("Escolha a operação que deseja realizar: 1-saldo, 2-saque, 3-deposito\t");
    scanf("%i", &caixa);
    
    saldo=1000;
       switch(caixa){
           
        case 1: {
            printf("\nSeu saldo é %2.f", saldo); 
            break;
        }
        
        case 2: {
            printf("Digite o valor que deseja sacar");
            scanf("%f",&saque);
            if(saque<=saldo){
            vsaque= (saldo-saque);
            printf("\nSeu saldo é restante é: %2.f",vsaque);
            
            }if(saque>saldo){
              printf("Saldo insuficiente");
              printf("\nSeu saldo é %2.f", saldo);
            }
            break;
        }
        
        case 3:{
            printf("Digite o valor que deseja depositar:");
            scanf("%f",&deposito);
            vdeposito=(saldo+deposito);
            printf("\nSeu saldo é atual é: %2.f",vdeposito);
           break;
        }

        default :{
            printf("\n operacao invalida !!!");
        }
    }
    return 0;
}

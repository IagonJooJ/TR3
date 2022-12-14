#include <stdio.h>
#include <stdlib.h>

int main(){
   
   	unsigned int z[200];
   	int arm;
    int x; 
    int pot;
    int saida;
    int i;
    int aux;

    //zerando o vetor para poder realizar a operação bit a bit posteriormente

    for(i = 0; i < 200; i++){

        z[i] = 0;

    }

    //laço principal do programa

    while(1){

        //Receber o numero do usuário e definir valores padrões para algumas das variaveis usadas no programa

        printf("insira um numero: ");
        scanf("%d",&x);
        pot = 1;
        i = 0;
        aux = x/32;
        arm = aux;

        //condição para parar ou não o programa

        if(x != -1){

            arm = x - (arm*32);
            while(i < arm){
                pot = pot*2;
                i++;

            }

        i = z[aux];
        i = i|pot;
        z[aux] = i;

        }

        else{

            for(pot = 199; pot >=0; pot--){

                for(i = 31; i >= 0; i--) {

                    arm = z[pot] >> i;

                    if(arm & 1){

                        printf("%u \n", (i)+32*(pot));

                    }

                }

            }

            break;

        }

    }

	return 0;  

}
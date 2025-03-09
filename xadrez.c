#include <stdio.h>

int main(){
    int torre_passos = 5, bispo_passos = 5, rainha_passos = 8;

    printf("\nTorre %d Passos \n", torre_passos);
    for (int i = 0 ; i < torre_passos ; i++){
        printf("Direita\n");
    }
    
    printf("\nBispo %d Passos \n", bispo_passos);
    for (int i = 1 ; i <= bispo_passos*2 ; i++){
        if (i % 2 == 0){
            printf("Direita\n");
        }else{
            printf("Cima-");
        }
    }
    
    printf("\nRainha %d Passos \n", rainha_passos);
    for (int i = 0 ; i < rainha_passos ; i++){
        printf("Esquerda\n");
    }

    return 0;

}


// Torre: Move-se em linha reta horizontalmente ou verticalmente. Seu programa deverá simular o movimento da Torre cinco casas para a direita.
// Bispo: Move-se na diagonal. Seu programa deverá simular o movimento do Bispo cinco casas na diagonal para cima e à direita. Para representar a diagonal, você imprimirá a combinação de duas direções a cada casa (ex: "Cima, Direita").
// Rainha: Move-se em todas as direções. Seu programa deverá simular o movimento da Rainha oito casas para a esquerda.

// O programa deverá imprimir no console a direção do movimento a cada casa percorrida pela peça. Para movimentos na diagonal (Bispo), imprimir a combinação de duas direções. Utilize o comando printf para exibir as informações. As saídas devem seguir o padrão: printf("Cima\n");, printf("Baixo\n");, printf("Esquerda\n");, printf("Direita\n");, printf("Cima Esquerda\n"); printf("Direita\n");
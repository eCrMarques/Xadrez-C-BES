#include <stdio.h>

int main(){
    int torre_passos = 5;
    int bispo_passos = 5;
    int rainha_passos = 8;
    int cavalo_passos = 5;

    // Torre
    printf("\nTorre %d Passos \n", torre_passos);
    for (int i = 0 ; i < torre_passos ; i++){
        printf("Direita\n");
    }
    

    // Bispo
    printf("\nBispo %d Passos \n", bispo_passos);
    for (int i = 1 ; i <= bispo_passos*2 ; i++){
        if (i % 2 == 0){
            printf("Direita\n");
        }else{
            printf("Cima-");
        }
    }
    
    // Rainha
    printf("\nRainha %d Passos \n", rainha_passos);
    for (int i = 0 ; i < rainha_passos ; i++){
        printf("Esquerda\n");
    }

    // Cavalo
    printf("\nCavalo %d Passos \n", cavalo_passos);
    for (int i = 1; i <= cavalo_passos ; i++){
        int j = 1;
        do{
            if (j % 3 == 0 ){
                printf("Direita\n");
            }else{
                printf("Cima-");
            }
            j++;
        }while(j <= 3);
    }

    return 0;

}

// Lógica de Movimentação: O programa deverá implementar a lógica específica do movimento em "L" do Cavalo usando loops aninhados (um loop for e um loop while ou do-while).
// Saída de Dados: O programa deverá imprimir no console a direção de cada etapa do movimento do Cavalo ("Baixo", "Baixo", "Esquerda"), utilizando o comando printf. Para as outras peças as saídas devem seguir o padrão: printf("Cima\n");, printf("Baixo\n");, printf("Esquerda\n");, printf("Direita\n");. Separe o movimento do Cavalo dos movimentos anteriores com uma linha em branco.
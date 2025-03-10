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

    printf("\n--------Desafio: nível mestre--------");
    
    printf("\nTorre %d Passos nível mestre \n", torre_passos);
    Movimentacao_Torre(torre_passos);

    printf("\nBispo %d Passos nível mestre \n", bispo_passos);
    Movimentacao_Bispo(bispo_passos*2);

    printf("\nRainha %d Passos nível mestre \n", rainha_passos);
    Movimentacao_Rainha(rainha_passos);

    printf("\nCavalo %d Passos nível mestre \n", cavalo_passos);
    for ( int i = 1, j = 0; i <= cavalo_passos*3; i++, j = (i % 3 == 0) ? 1 : 0 ){
        if (j == 1){
            printf("Direita\n");
            continue;
        }else{
            printf("Cima-");
        }
    }

    return 0;

}
void Movimentacao_Torre(int passos){
    if (passos > 0){
        printf("Direita\n");
        Movimentacao_Torre(--passos);
    }
}

void Movimentacao_Bispo(int passos){
    if (passos >= 0){
        if (passos % 2 == 0){
            printf("Direita\n");
        }else{
            printf("Cima-");
        }
        Movimentacao_Bispo(--passos);
    }
}
void Movimentacao_Rainha(int passos){
    if (passos > 0){
        printf("Esquerda\n");
        Movimentacao_Rainha(--passos);
    }
}

// Recursividade (Torre, Bispo e Rainha): Implemente funções recursivas para simular o movimento de cada peça, substituindo os loops originais.

// Loops Complexos (Cavalo): Utilize loops aninhados com múltiplas variáveis e/ou condições para simular o movimento do Cavalo em "L" (duas casas para cima e uma para a direita).
 
// Loops Aninhados (Bispo): Utilize loops aninhados para o bispo, sendo o loop mais externo o vertical, e o mais interno o horizontal.
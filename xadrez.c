#include <stdio.h>

void torre(int numero){
    if(numero > 0){
        printf("Direita\n");
        torre(numero - 1);
    }
}
void rainha(int numero){
    if(numero > 0){
        printf("Esqueda\n",numero);
        rainha(numero - 1);
    }
}
void Bispo(){
    int bispo;
    printf("\nBispo se move 5 casas para cima e Direita.\n");
    while(bispo <= 5){
        printf("cima Direita\n",bispo);
        bispo++;
    }
}
void Cavalo(){
    int cavalo;
    printf("\nMovimento do Cavalo, duas casas para baixo e uma para a direita.\n");
    for(cavalo = 0; cavalo <= 2; cavalo++){
        printf("Baixo\n");

       if(cavalo == 1){
        while(cavalo <= 1){
            printf("Direita\n");
            cavalo++;
            }
        }
    }
}

int main(){

    int torre1 = 5;
    printf("\nMovemento da Torre, 5 casas a direita\n");
    torre(torre1);

    int rainha1 = 8;
    printf("\nMovimento da Rainha, 8 casas a esquerda\n");
    rainha(rainha1);

    Bispo();

    Cavalo();
    

    return 0;
}
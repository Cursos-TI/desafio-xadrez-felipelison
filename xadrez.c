#include <stdio.h>

void andarTorre(int casas){
    if (casas > 0){
        printf("Direira\n");
        andarTorre(casas - 1);
    }
}

void andarBispo(int casas){
    for (casas; casas > 0; casas--)
    {
        printf("Cima\n");

        for (int casa = 1; casa > 0; casa--)
        {
            printf("Direita\n");
        }
        
    }
}

void andarRainha(int casas){
    if (casas > 0){
        printf("Esquerda\n");
        andarRainha(casas - 1);
    }
}

int main() {
    
    //TORRE
    printf("**Torre**\n");
    andarTorre(5);

    //BISPO
    printf("\n**Bispo**\n");
    andarBispo(5);
    
    //RAINHA
    printf("\n**Rainha**\n");
    andarRainha(8);
    
    //CAVALO
    printf("\n**Cavalo**\n");
    for(int cavalo = 0, casas = 0; casas < 1; casas++)
    {
        for (cavalo; cavalo < 2; cavalo++)
        {
            printf("Cima\n");
        }
        printf("Direita\n");
    }

    return 0;
}
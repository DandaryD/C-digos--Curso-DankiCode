#include <stdio.h> 
#include <stdlib.h>



int main() {
    
    char nome[256];
    
    int idade;
   
    printf("Qual seu nome\n");
    scanf ("%s", nome);

    printf("\nShow de bola, %s......Qual sua idade?", nome);
    scanf ("%d", &idade);

     printf("\n Muito bom! O %s tem %d anos", nome, idade);
    
    
    return 0;
}

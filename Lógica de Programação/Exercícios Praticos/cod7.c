// Criando Jogo da velha 

#include <stdio.h>
#include <stdlib.h>

int main () 
{
   
    //pedra, papel ou tesoura!
    
    //p = player
    char p1 = [256];  
    char p2 = [256];

    printf("Player 1, Sua vez de jogar...\n");
    scanf("%s", &p1);

    printf("Player 2, Sua vez de jogar...\n");
    scanf("%s", &p2);

    printf("Aguarde enquanto calculamos o Resultado......\n");
    if (strcmp(p1,"papel") == 0) {
                printf("Player 1 jogou papel!\n"){
                }if (strcmp(p2,"papel") == 0){
            printf("Empate!\n");
        }else if (strcmp(p2,"tesoura")== 0){
            printf("Player 2 venceu!\n");
        }else if (strcmp(p2,"pedra") == 0){
            printf("Player 1 venceu!\n");
        }else{
            printf("Jogada cancelada! Informacao incorreta\n");
        }
    }else if (strcmp(p1,"tesoura") == 0){
        if (strcmp(p2,"papel") == 0){
            printf("Player 1 venceu!\n");   
        }else if (strcmp(p2,"tesoura") == 0){
            printf("Empate!\n");
        }else if (strcmp(p2,"pedra") == 0){
            printf("Player 2 venceu!\n");
        }else{
            printf("Jogada cancelada! Informacao incorreta\n"); 
        }

    }else if (strcmp(p1,"pedra") == 0){
        if (strcmp(p2,"papel") == 0){
            printf("Player 2 venceu!\n");
        }else if (strcmp(p2,"tesoura") == 0){
            printf("Player 1 venceu!\n");
        }else if (strcmp(p2,"pedra") == 0){
            printf("Empate!\n");
        }else{
            printf("Jogada cancelada! Informacao incorreta\n");
        }

  return 0;
   
}
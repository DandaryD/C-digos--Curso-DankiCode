#include <stdio.h>
#include <stdlib.h>




int main () {

    

    char nome[256];
    int idade;

    printf ("Digite o seu nome \n");
    scanf ("%s",&nome);
    printf ("=================\n");

    printf ("Digite sua idade \n");
    scanf ("%d", &idade);
    printf ("=================\n");

    printf ("Aguarde Enquanto Lemos os seus dados......\n");
    printf ("A primeira letra do seu nome e : %c\n", nome[0]);
    //------------------------x-------------------------------------
    //Trabalhando com validações

    if (idade >= 18) {
        printf("De acordo com o Estatuto da Criança e do Adolescente (ECA) e pelo Codigo Civil do Brasil, voce e um adulto! \n");
        }
        else if (idade >=12) {
            printf("De acordo com o Estatuto da Crianca e do Adolescente (ECA) e pelo Código Civil do Brasil, voce e um adolescente! \n");
            }
            else {
            printf("De acordo com o Estatuto da Criança e do Adolescente (ECA) e pelo Código Civil do Brasil, você é uma criança! \n");
             }
    return 0;

}
    


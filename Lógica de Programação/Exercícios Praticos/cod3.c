#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int hora_cinema = 20;
    int hora_atual = 20;

      if (hora_atual > hora_cinema + 30)
          {
           printf("passou do tempo limite! Na pode entrar!  \n");
          } 
       else if (hora_atual < hora_cinema - 30){
           printf ("Cinema esta fechado!");
            
         }
     else {
        printf ("Cinema aberto! Pode entrar!\n"); 
     }
            

    printf("....\n");   
    printf("\n");
    _
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int contador = 1;
    int limite = 10;
    int contador_2 = 5;

   while (contador <= limite) {
      printf("%d ", contador);
      printf("Estamos no primeiro Loop!\n");
      printf("-------------\n");
      if  (contador == 3){

          
        while (contador_2 > 0) {
            printf("%d ", contador_2);
            printf("Estamos no segundo Loop!\n");
            printf("-------------\n");
            contador_2--;
        }

      }
         contador++;
    }
   

    return 0;
}

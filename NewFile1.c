#include <stdio.h>

int main (){
   float n1, n2, n3, media;
  
   printf("Insira o primeiro número: \n");
    scanf("%f",&n1);
  
    printf("Insira o segundo número: \n");
    scanf("%f",&n2);
  
    printf("Insira o terceiro número: \n");
    scanf("%f",&n3);
  
    media = (n1+n2+n3)/3;
  
    printf("A média dos números é: %.2f", media);
  
    return 0;
}

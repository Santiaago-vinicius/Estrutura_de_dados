#include <stdlib.h> 
#include <stdio.h> 
  
  
 int main(){ 
     int idade; 
     int anos; 
     int meses; 
     int dias; 
     int resto; 
  
     printf("Idade em dias: \n"); 
     scanf("%d", &dias); 
     resto = dias; 
     anos = resto / 365 ; 
     resto = resto%365; 
     meses = resto / 30; 
     resto = resto % 30; 
     dias = resto; 
  
  
     printf("A idade do usuário corresponde a %d anos, %d meses e %d dias.", anos, meses, dias); 
  
     return 0; 
}
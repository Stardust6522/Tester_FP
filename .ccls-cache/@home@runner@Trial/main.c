#include <stdio.h>

int main(){
//Variables
  float a,b,Ans;
//Preguntas
  printf("Ingresa un número:");
  scanf("%f",&a);
  printf("Ingresa otro número:"); 
  scanf("%f",&b);
//Operaciones
  Ans=a+b;
  printf("Sumados: %f\n",Ans);
  Ans=a-b;
  printf("Restados: %f\n",Ans);
  Ans=a*b;
  printf("Multiplicados: %f\n",Ans);
  if (b!=0){
    Ans=a/b;
    printf("Divididos: %f\n",Ans);
  }
  else{
    printf("Divididos: ERROR");
  } 
  return 0;
}
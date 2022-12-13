//Librerías
#include "stdio.h"
#include "stdlib.h"
//Global VAR's
int n,j,k;
//DEV FN
int fnBody(){
  for(k=0;k<=n;k++){
    for(j=0;j<=n-k;j++){
      printf(" ");
    }
    printf("*");
    for(j=0;j<=(2*k);j++){
      printf(" ");
    }
    printf("*");
    printf("\n");
  }
}
int fnBase(){
  printf("*");
    for(k=0;k<=n+1;k++){
      printf(" ");
      printf("*");
    }
    printf("\n");
}
int fnHeight (){
  printf("Dame la altura: ");
  scanf("%d",&n);
  printf("\n");
}
//MAIN
int main (){
  fnHeight();
  if(n>=0){
    for(k=0;k<=n+1;k++){
     printf(" ");
    }
    printf("*");
    printf("\n");
  }
  fnBody();
  if(n>=1){
    fnBase();
  }
  return 0;
}
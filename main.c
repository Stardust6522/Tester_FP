#include <stdio.h>
#include <stdlib.h>
//
int main(){
  int i,j;
  float M[2][2], s=0;
  printf("<<<<<  MATRIZ 2x2  >>>>>\n\n");
  for(i=0;i<2;i++){
    for(j=0;j<=1;j++){
    printf("(• Teclear el elemento |%d %d| 5 •)",i+1,j+1);
    scanf("%f",&M[i][j]);
      s+=M[i][j];
    }
  }
  printf("\n \t La MATRIZ es:\n\n");
  for(i=0;i<2;i++){
    for(j=0;j<=1;j++){
    printf("\t%.1f",M[i][j]);
    }
  printf("\t\n");
  }
  printf("\t\n La suma de los elementos  es: %.2f",s);
  return 0;
}
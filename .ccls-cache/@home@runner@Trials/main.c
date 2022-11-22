#include <stdio.h>
#include <stdlib.h>
//
int main(){
  float Res, n;
  int Ans,i,j;
  do {
  printf("\n<<<<<  TABLAS DE MULTIPLICAR  >>>>>\n\n Mostrar tabla del: ");
  scanf("%f",&n);
  printf("\n desde 1 hasta el valor: ");
  scanf("%d",&i);
  printf("\n| Tabla del %.2f\n|\n",n);
  for(j=1;j<=i;j++){
    Res=(n*j);
    printf("|\t%.2f \n",Res);
  }
  printf("\n\tProbar otra tabla?\n\n 1)Sí!\n 2)Mejor luego\n\n\t •)");
  scanf("%d",&Ans);
  }
  while(Ans!=2);
  return 0;
	}
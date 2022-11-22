#include <stdio.h>
#include <stdlib.h>
//
int main(){
  int Res, n, i, Ans;
  do {
  printf("\n<<<<<  Cuenta regresiva  >>>>>\n\n Ingresa el número desde el cual\n comenzará la cuenta regresiva: ");
  scanf("%d",&n);
  printf("\n");
  for(i=0;i<n;i++){
    Res=(n-i);
    printf("\t%d \n",Res);
  }
  printf("\n✨✨✨ Feliz Año nuevo!! ✨✨✨\n\n");
  printf("\tContamos de nuevo?\n\n 1)Sí!\n 2)Mejor luego\n\n\t •)");
  scanf("%d",&Ans);
  }
  while(Ans!=2);
  return 0;
	}
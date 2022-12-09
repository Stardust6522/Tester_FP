//
#include <stdio.h>
//
char meses[12][3] = {"Ene","Feb","Mar","Abr","May","Jun","Jul","Ago","Sep","Oct","Nov","Dic"};
int i=0, j=0, dia, mes, año;
//
int main() {
  printf("\ningrese una fecha corta: ");
  scanf("%d %d %d",&dia,&mes,&año);
  if(año<=0){
    printf("\naño no válido");
    return 0;
  }
  else if (mes<=0 || mes>12){
    printf("\nmes no válido");
    return 0;
  }
  if (mes==2){
    if (dia<0 || dia>28){
      printf("\ndía no válido");
      return 0;
      }
    }
  else if (mes==11 || mes==9 || mes==7 || mes==6 || mes==4){
    if (dia<0 || dia>30){
      printf("\ndía no válido");
      return 0;
      }
    }
  else{
    if(dia<0||dia>31){
      printf("\ndía no válido");
      return 0;
    }
  }
  printf("\n\tLa fecha es:\n%d de %c%c%c de %d",dia,meses[mes-1][0],meses[mes-1][1],meses[mes-1][2],año);
  return 0;
}
#include <stdio.h>
#include <stdlib.h>
//
int main(){
	int Ans,GM,Res1,n,i,j;
	float L1,L2,Res,k;
  do{
    printf("\n|\t>>>>>>>>  EL GRAN MENÚ  <<<<<<<<\t|\n\n\t 1)Programa < Poligonos >\n\t 2)Programa < Cuenta regresiva >\n\t 3)Programa < Tablas de multiplicar >\n\n>>> 0)Salir\n\n\t Seleccione su Programa<>\n\n\t•)");
    scanf("%d",&GM);
    switch(GM){
      //POLIGONOS
      case 1:{
        do {
        printf("\n<<<<  POLIGONOS  >>>>>\n\n | Seleccione entre las diferentes figuras |\n\t 1) Cuadrado\n\t 2) Rectangulo\n\t 3) Triangulo\n\n");
	      printf(">>> 0) Salir\n\n •)");
	      scanf("%d",&Ans);
	      switch(Ans){
	      case 1: {
	      printf("\n )Ingrese el tamaño del lado: ");
	      scanf("%f",&L1);
	      Res=(4*L1);
	      printf("\n El perímetro es: %.4f",Res);
	      Res=(L1*L1);
	      printf("\n El área es: %.4f\n",Res);
	      break;
	      }
	      case 2: {
	      printf("\n )Ingrese el tamaño del largo: ");
      	scanf("%f",&L1);
      	printf("\n )Ingrese el tamaño del ancho: ");
	      scanf("%f",&L2);
	      Res=(2*(L1+L2));
	      printf("\n El perímetro es: %.4f",Res);
	      Res=(L1*L2);
	      printf("\n El área es: %.4f\n",Res);
	      break;
        }
	      case 3: {
	      printf("\n )Ingrese el tamaño de la base: ");
	      scanf("%f",&L1);
	      printf("\n )Ingrese el tamaño de la altura: ");
	      scanf("%f",&L2);
	      Res=((L1*L2)/2);
	      printf("\n El área es: %.4f\n",Res);
	      break;
	      }
      	case 0: {
	      printf("\n Nos vemos luego 😊\n\n");
	      break;
	      }
        default: {
	      printf("\t oops! 😳 Intentalo de nuevo 😊 \n");
	      break;
	      }
        }
        }
	      while(Ans!=0);
        break;
        }
      // COUNTDOWN
      case 2:{
        do {
  printf("\n<<<<<  CUENTA REGRESIVA  >>>>>\n\n Ingresa el número desde el cual\n comenzará la cuenta regresiva: ");
  scanf("%d",&n);
  printf("\n");
  for(i=0;i<n;i++){
    Res1=(n-i);
    printf("\t%d \n",Res1);
  }
  printf("\n✨✨✨ Feliz Año nuevo!! ✨✨✨\n\n");
  printf("\tContamos de nuevo?\n\n 1)Sí!\n 2)Mejor luego\n\n\t •)");
  scanf("%d",&Ans);
  }
        while(Ans!=2);
        break;
	      }
      // MULTIPLICATION CHARTS
      case 3:{
        do {
  printf("\n<<<<<  TABLAS DE MULTIPLICAR  >>>>>\n\n Mostrar tabla del: ");
  scanf("%f",&k);
  printf("\n desde 1 hasta el valor: ");
  scanf("%d",&i);
  printf("\n| Tabla del %.2f\n|\n",k);
  for(j=1;j<=i;j++){
    Res=(k*j);
    printf("|\t%.2f \n",Res);
  }
  printf("\n\tProbar otra tabla?\n\n 1)Sí!\n 2)Mejor luego\n\n\t •)");
  scanf("%d",&Ans);
  }
        while(Ans!=2);
        break;
        }
      //OUT GATE
      case 0:{
        printf("\n\n\t>> Hasta pronto <<\n\n");
        break;
      }
      //ERROR
      default:{
        printf("\t oops! 😳 Intentalo de nuevo 2😊 \n");
        break;
      }
	  }
  }
    while(GM!=0);
return 0;
  }
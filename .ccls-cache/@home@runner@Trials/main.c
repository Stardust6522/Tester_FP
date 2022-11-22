#include <stdio.h>
#include <stdlib.h>
//
int main(){
	int Ans;
	float L1, L2, Res;
  do{
	printf("\n<<<<  Poligonos  >>>>>\n\n | Seleccione entre las diferentes figuras |\n\t 1) Cuadrado\n\t 2) Rectangulo\n\t 3) Triangulo\n\t 4) Mensaje secreto 🤫\n\n");
	printf(">>> 0) Salir\n\n •)");
	scanf("%d",&Ans);
    if(Ans!=4){
      printf("\n Quizá deberías leer el mensaje secreto 🤭\n");
    }
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
  case 4: {
  printf("\n Curiosilla!, te quiero mucho 🥰❤️  737");
    Ans=0;
    
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
  return 0;
	}
#include <stdio.h>
#include <stdlib.h>
//
int main(){
  int i,j;
  char M[6];
  M[0]='M';
  M[1]='a';
  M[2]='r';
  M[3]='c';
  M[4]='o';
  M[5]='s';
  printf("\n<<<<<  MI NOMBRE ES  >>>>>\n\n\t\t  ");
  for(i=0;i<6;i++){
    printf("%c",M[i]);
  }
  return 0;
}
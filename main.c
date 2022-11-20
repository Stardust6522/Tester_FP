#include <stdio.h>
#include <stdlib.h>
//
int main(){
  int i, M[30], s=0,m=3;
  for(i=0;i<30;i++){
    M[i]=m;
    m+=3;
    s=s+M[i];
    printf("%d\t",M[i]);
  }
  printf("\nLa suma es: %d",s);
  return 0;
}
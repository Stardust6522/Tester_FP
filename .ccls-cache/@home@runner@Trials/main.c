#include <stdio.h>
#include <stdlib.h>
//
int main ( )
{
int i=10, *i_ptr;
// Inicialización del apuntador
printf("\n Acceso directo, var= %d", i);
printf("\n Acceso indirecto, var= %d", *i_ptr); /*Se despliega la dirección de la
variable de dos maneras*/
printf("\n La dirección de var= %d", &i);
printf("\n LA dirección de var= %d", *i_ptr);
return 0;
}
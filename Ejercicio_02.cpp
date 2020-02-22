#include <stdio.h>
#include <stdlib.h>

int main(){
int a,b;

printf("Ingrese un numero entero: ");
scanf("%d",&a);
printf("Ingrese otro numero entero: ");
scanf("%d",&b);
if (a%b==0){
    printf("Los valores enteros son divisibles");
}
return 0;
}

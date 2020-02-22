#include <stdio.h>
#include <stdlib.h>

int main(){

int a;
printf("Ingrese un valor entero: ");
scanf("%d",&a);
if (a%2==0){
    printf("Es par. :P\n");
}
else if (a%3==0){
    printf("Es impar.\n Y es divisible entre 3");
}
return 0;
}

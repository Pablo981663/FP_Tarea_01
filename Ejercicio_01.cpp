#include <stdio.h>
#include <stdlib.h>

int main(){
int Num;

printf("Escriba cualquier numero: ");
scanf("%d",&Num);

if (Num>100){
    printf("El numero %d es mayor que 100",Num);
}
return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main(){

int c,d;
printf("Ingrese valor de a: ");
scanf("%d",&c);
printf("Ingrese valor de b: ");
scanf("%d",&d);
if (c>d){
    printf("el valor de a es mayor: %d",c);
}
else if (c<d){
    printf("el valor de b es mayor: %d",d);
}
else{
    printf("Ambos valores son iguales");
}

}

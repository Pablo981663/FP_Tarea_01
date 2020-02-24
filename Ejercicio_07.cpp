#include <stdio.h>
#include <stdlib.h>

int main(){
int a,b,c;
printf("\tCONTRASENIA");
printf("\n  ingrese 3 digitos");
printf("\nprimer digito: ");
scanf("%d",&a);
printf("\nsegundo digito: ");
scanf("%d",&b);
printf("\ntercer digito: ");
scanf("%d",&c);
if((a==3)&&(b==9)&&(c==5)){
    printf("\nAcceso aceptado");
}
else{
    printf("\nContrasenia incorrecta");
}
}

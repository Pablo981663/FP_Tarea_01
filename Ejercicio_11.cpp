#include <stdio.h>
#include <stdlib.h>

int main(){
float x1,x2,y1,y2;
float m;

printf("Ingrese el valor de x para la primer coordenada: ");
scanf("%f",&x1);
printf("Ingrese el valor de y para la primer coordenada: ");
scanf("%f",&y1);
printf("Ingrese el valor de x para la segunda coordenada: ");
scanf("%f",&x2);
printf("Ingrese el valor de y para la segunda coordenada: ");
scanf("%f",&y2);
m=(y2-y1)/(x2-x1);
if ((x2-x1)!=0){
    printf("El valor de la pendiente es:%f",m);
} if((x2-x1)==0){
    printf("La pendiente es vertical");
}

}

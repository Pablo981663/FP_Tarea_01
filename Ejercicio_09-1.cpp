#include <stdio.h>
#include <stdlib.h>

int main(){
char opcion;
printf("Ingresa cualquier tecla: ");
opcion=getchar();
if (opcion=='0'||opcion=='1'||opcion=='2'||opcion=='3'||opcion=='4'||opcion=='5'||opcion=='6'||opcion=='7'||opcion=='8'||opcion=='9'){
    printf("Es un numero");
}else {
    printf("Es un caracter");
}
return 0;
}

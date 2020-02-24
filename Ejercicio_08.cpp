#include <stdio.h>
#include <stdlib.h>

int main(){

int a,b,c;

printf("Ingrese un valor: ");
scanf("%d",&a);
printf("Ingrese un segundo valor: ");
scanf("%d",&b);
printf("Ingrese un tercer valor: ");
scanf("%d",&c);

if ((a<b && a<c)&&(b<c)){
        printf("%d,",a);
        printf("%d,",b);
        printf("%d",c);
}
else if((a<b && a<c)&&(c<b)){
    printf("%d,",a);
    printf("%d,",c);
    printf("%d",b);
}
else if ((b<a && b<c)&&(c<a)){
    printf("%d,",b);
    printf("%d,",c);
    printf("%d",a);
}
else if ((b<a && b<c)&&(a<c)){
    printf("%d,",b);
    printf("%d,",a);
    printf("%d",c);
}
else if ((c<a && c<b)&&(a<b)){
    printf("%d,",c);
    printf("%d,",a);
    printf("%d",b);
}
else if ((c<a && c<b)&&(b<a)){
    printf("%d,",c);
    printf("%d,",b);
    printf("%d",a);
}
}

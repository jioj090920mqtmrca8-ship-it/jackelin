#include<stdio.h>
main(){
float altura;
float base ;
float area;

printf("ingresa el valor de la altura");
scanf("%f",&altura);

printf("ingresa el valor de la base");
scanf("%f",&base);

area = (base*altura)/2;
printf("el area del triangulo es : %.2f\n",area);
}
//calcule el area de un triangiulo

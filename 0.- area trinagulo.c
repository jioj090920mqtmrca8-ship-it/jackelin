#include<stdio.h>
main() {
float altura;
float base;
float area;

printf("ingresa el valor de altura\n");
scanf("%f",&altura);

printf("ingresa el valor de la base\n");
scanf("%f",&base);

area= (base * altura)/ 2;

printf("ingresa el valor de el area del tringulo es: %.2f \n", area);

}

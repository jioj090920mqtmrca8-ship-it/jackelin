#include<stdio.h>
main()
{
    int opcion;
do{
        system("cls");
printf("\t\tmenu\n");
printf("1.-saludar\n");
printf("2.-mensaje\n");
printf("3.-salir\n");


printf("selecciona una opcion:");
scanf("%d",&opcion);
switch(opcion)
{
case 1:
printf("HOLA!!!!");
break;
case 2:
printf("ERES LA MEJOR!");
break;
case 3:
printf("GRACIAS POR USAR EL PROGRAMA");
break;
default:
printf("opcion no valida");
break;

}
printf("\n");
system("pause");
}while(opcion != 3);
}


//Se incluyen todas las librerias que se utilizaran
#include <stdio.h>
#include <stdlib.h>

//La funcion principal
int main ()
{
    int variable1 = 0;
    float variable2 =0;
    char caracter1;

    printf("Usuario, por favor ingrese un numero: ");
    scanf("%d",&variable1);

    printf("Lo que ingresaste fue: %d\n",variable1);

    printf("Usuario, por favor ingrese un nuevo numero, con punto decimal: ");
    scanf("%f",&variable2);

    printf("Lo que ingresaste fue: %f\n",variable2);

    printf("Usuario, por favor ingrese un caracter: ");
    fflush(stdin);
    scanf("%c",&caracter1);

    printf("Lo que ingresaste fue: %c\n\n",caracter1);

    system("PAUSE");

    return 0;
}
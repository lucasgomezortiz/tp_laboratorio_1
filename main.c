#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    int numero1, numero2,numeroaux,numeroacum,fact;





    while(seguir=='s')
    {
        printf("\n--------------------------------");
        printf("\nSuper Calculadora");
        printf("\n--------------------------------\n");
        printf("1- Ingresar 1er operando (A=x)\n");
        printf("2- Ingresar 2do operando (B=y)\n");
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1://se ingesa el primer numero
                    printf("\nIngrese el 1er operando\n");
                    scanf("%d",&numero1);
                    system("cls");
                break;
            case 2:
                //se ingesa el segundo numero
                    printf("\nIngrese el 2do operando\n");
                    scanf("%d",&numero2);
                    system("cls");
                break;
            case 3:
                    system("cls");
                    sumar(numero1,numero2);
                break;
            case 4:
                    system("cls");
                    restar(numero1,numero2);
                break;
            case 5:
                    system("cls");
                    dividir(numero1,numero2);
                break;
            case 6:
                    system("cls");
                    multiplicar(numero1,numero2);
                break;
            case 7:
                    system("cls");
                    fact=factorial(numero1);
                    printf("\n--------------------------------");
                    printf("\nEl factorial de %d es %d", numero1, fact);
                    printf("\n--------------------------------\n");
                break;
            case 8:
                    sumar(numero1,numero2);
                    restar(numero1,numero2);
                    dividir(numero1,numero2);
                    multiplicar(numero1,numero2);
                    fact=factorial(numero1);
                    printf("\n--------------------------------");
                    printf("\nEl factorial de %d es %d", numero1, fact);
                    printf("\n--------------------------------\n");
                break;
            case 9:
                seguir = 'n';
                break;
        }



}
return 0;
}

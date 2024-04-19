/*Leer dos números e imprima cual es mayor y el menor de los números ingresados.*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num1, num2;
    printf("Proporciona el valor del primer numero: ");
    scanf("%i", &num1);
    printf("Proporciona el valor del segundo numero: ");
    scanf("%i", &num2);

    if(num1 > num2){
        printf("El numero mayor es: %i\n", num1);
        printf("El numero menor es: %i\n", num2);
    }
    else{
        printf("El numero mayor es: %i\n", num2);
        printf("El numero menor es: %i\n", num1);
    }
    return 0;
}

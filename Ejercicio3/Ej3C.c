#include <stdio.h>

int main() {
    int numero;
    char *meses[] = {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};

    printf("Introduce un numero del 1 al 12: ");
    scanf("%d", &numero);

    if(numero >= 1 && numero <= 12) {
        printf("%s\n", meses[numero - 1]);
    } else {
        printf("Numero no valido. Debe ser del 1 al 12.\n");
    }

    return 0;
}

#include <stdio.h>
#include <math.h>

// Prototipo de la función
double calcRaiz2(double numero);

int main() {
    double numero, raizCuadrada;
    
    // Solicitamos al usuario un número entre 80 y 200
    printf("Ingrese un numero entre 80 y 200: ");
    scanf("%lf", &numero);
    
    if (numero < 80 || numero > 200) {
        printf("Intenete de nuevo, el numero debe estar entre 80 y 200.\n");
        return 0; 
    }
    
  
    raizCuadrada = calcRaiz2(numero);
    
    printf("La raiz cuadrada de %.2lf es: %.2lf\n", numero, raizCuadrada);
    
    return 0;
}

double calcRaiz2(double numero) {
    return sqrt(numero);
}

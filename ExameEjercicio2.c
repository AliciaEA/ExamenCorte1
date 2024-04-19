#include <stdio.h>
#include <string.h>

struct Producto {
    char nombre[100];
    float precioCompra;
    float precioVenta;
    int existencia;
};

float calcularGanancia(const struct Producto* producto) {
    return (producto->precioVenta - producto->precioCompra) * producto->existencia;
}

int main() {
    struct Producto inventario[100];
    int numProductos;

    printf("Ingrese el número de productos: ");
    scanf("%d", &numProductos);

    for (int i = 0; i < numProductos; ++i) {
        printf("Producto %d:\n", i + 1);
        printf("Nombre: ");
        getchar(); // Limpiar el buffer de entrada
        fgets(inventario[i].nombre, 100, stdin);
        strtok(inventario[i].nombre, "\n"); // Eliminar el salto de línea del final
        printf("Precio Compra: ");
        scanf("%f", &inventario[i].precioCompra);
        printf("Precio Venta: ");
        scanf("%f", &inventario[i].precioVenta);
        printf("Existencia: ");
        scanf("%d", &inventario[i].existencia);
    }

    float gananciaTotal = 0.0;
    printf("\nGanancias por producto:\n");
    for (int i = 0; i < numProductos; ++i) {
        float ganancia = calcularGanancia(&inventario[i]);
        gananciaTotal += ganancia;
        printf("Producto: %s, Ganancia: %.2f\n", inventario[i].nombre, ganancia);
    }

    printf("\nGanancia total: %.2f\n", gananciaTotal);

    return 0;
}

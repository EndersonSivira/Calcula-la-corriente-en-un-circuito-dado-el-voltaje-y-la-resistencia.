#include <stdio.h>

int main() {
    float voltaje, resistencia, corriente;

    printf("Ingrese el voltaje (en voltios): ");
    scanf("%f", &voltaje);

    printf("Ingrese la resistencia (en ohmios): ");
    scanf("%f", &resistencia);

    corriente = voltaje / resistencia;

    printf("La corriente es: %.2f amperios\n", corriente);

    return 0;
}
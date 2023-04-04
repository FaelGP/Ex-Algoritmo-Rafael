#include <stdio.h>

float celsius_para_fahrenheit(float celsius) {
    return (9 * celsius / 5) + 32;
}

float fahrenheit_para_celsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

float celsius_para_kelvin(float celsius) {
    return celsius + 273.15;
}

float kelvin_para_celsius(float kelvin) {
    return kelvin - 273.15;
}

float celsius_para_reaumur(float celsius) {
    return celsius * 4 / 5;
}

float reaumur_para_celsius(float reaumur) {
    return reaumur * 5 / 4;
}

float kelvin_para_rankine(float kelvin) {
    return kelvin * 1.8;
}

float rankine_para_kelvin(float rankine) {
    return rankine / 1.8;
}

int main() {
    int escala;
    float temperatura;

    printf("Escolha a conversao de temperatura: \n");
    printf("1 - Celsius para Fahrenheit\n");
    printf("2 - Fahrenheit para Celsius\n");
    printf("3 - Celsius para Kelvin\n");
    printf("4 - Kelvin para Celsius\n");
    printf("5 - Celsius para Reaumur\n");
    printf("6 - Reaumur para Celsius\n");
    printf("7 - Kelvin para Rankine\n");
    printf("8 - Rankine para Kelvin\n");
    scanf("%d", &escala);

    printf("Informe a temperatura a ser convertida: \n");
    scanf("%f", &temperatura);

    switch (escala) {
        case 1:
            printf("%.2fC = %.2fF\n", temperatura, celsius_para_fahrenheit(temperatura));
            break;
        case 2:
            printf("%.2fF = %.2fC\n", temperatura, fahrenheit_para_celsius(temperatura));
            break;
        case 3:
            printf("%.2fC = %.2fK\n", temperatura, celsius_para_kelvin(temperatura));
            break;
        case 4:
            printf("%.2fK = %.2fC\n", temperatura, kelvin_para_celsius(temperatura));
            break;
        case 5:
            printf("%.2fC = %.2fRe\n", temperatura, celsius_para_reaumur(temperatura));
            break;
        case 6:
            printf("%.2fRe = %.2fC\n", temperatura, reaumur_para_celsius(temperatura));
            break;
        case 7:
            printf("%.2fK = %.2fR\n", temperatura, kelvin_para_rankine(temperatura));
            break;
        case 8:
            printf("%.2fR = %.2fK\n", temperatura, rankine_para_kelvin(temperatura));
            break;
        default:
            printf("Escolha invalida.\n");
    }
    return 0;
}

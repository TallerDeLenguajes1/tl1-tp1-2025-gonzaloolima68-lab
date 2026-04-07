#include <stdio.h>

void invertir_numero(int *p) {
    int temp = *p;
    int rev = 0;
    while (temp > 0) {
        rev = (rev * 10) + (temp % 10);
        temp = temp / 10;
    }
    *p = rev;
}

void dividir_en_dos(int *p) {
    *p = *p / 2;
}

void suma_digitos(int *p) {
    int temp = *p;
    int suma = 0;
    while (temp > 0) {
        suma = suma + (temp % 10);
        temp = temp / 10;
    }
    *p = *p + suma;
}

void proceso(int *valor_referencia) {
    invertir_numero(valor_referencia);
    dividir_en_dos(valor_referencia);
    suma_digitos(valor_referencia);
}

int main() {
    int num = 452;
    
    printf("Iniciando depuracion con el valor: %d\n", num);
    
    // Instrucción para el alumno: 
    // Pon un breakpoint aquí (F9) y usa F11 (Step Into) para entrar a cada función.
    proceso(&num);
    
    printf("Resultado final del enigma: %d\n", num);
    
    return 0;
}
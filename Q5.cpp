#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
    float numero;
    float *pont_numero;

    printf("Digite um n�mero real: ");
    scanf("%f", &numero);

    pont_numero = &numero;

    *pont_numero = *pont_numero * 2; 

    printf("\nO n�mero original � %.2f e seu dobro � %.2f.\n", numero/2, *pont_numero); 

    return 0;
}


/* Escreva um programa que declare uma variável real e um ponteiro para essa variável. Em seguida, 
preencha a variável com um valor real informado pelo usuário e utilize o ponteiro para calcular o dobro desse valor.
 Por fim, utilize o ponteiro para imprimir na tela o valor original e o dobro calculado.
*/

#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
    float numero;
    float *pont_numero;

    printf("Digite um número real: ");
    scanf("%f", &numero);

    pont_numero = &numero;

    *pont_numero = *pont_numero * 2; 

    printf("\nO número original é %.2f e seu dobro é %.2f.\n", numero/2, *pont_numero); 

    return 0;
}

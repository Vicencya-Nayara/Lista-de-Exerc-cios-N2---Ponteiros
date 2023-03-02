/*Escreva um programa que declare um array de inteiros com 5 elementos e um ponteiro para o primeiro elemento do array. 
Em seguida, preencha o array com valores informados pelo usuário e imprima esses valores utilizando o ponteiro. 
Ao final, mostre em tela cada valor armazenado e seu respectivo endereço de memória. 
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int array[5];
	int *pont;

	for(int i = 0; i < 5; i++){
		scanf("%d", &array[i]);
	}
	
	pont = array;
	
    for(int j = 0; j < 5; j++){
    	printf("\nValor: %d\n", *(pont + j));
    	printf("Endereço: %p\n", pont + j);
	}
	
	
	return 0;
}

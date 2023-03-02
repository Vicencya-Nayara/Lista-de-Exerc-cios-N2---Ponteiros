/*Escreva um programa que solicite ao usuário que digite um número inteiro positivo n. Em seguida, 
crie um vetor dinamicamente alocado de tamanho n e preencha o vetor com valores inteiros
 informados pelo usuário. Em seguida, crie um ponteiro que aponte para o primeiro elemento do vetor e percorra o vetor utilizando esse ponteiro,
  imprimindo na tela os valores dos elementos do vetor em ordem inversa.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
    int n;
    int *pv;
    

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    
    int v[n];
       
    printf("Digite um número positivo: ");
 
    for(int i = 0; i < n; i++){
    	scanf("%d", &v[i]);
	}
	
	pv = v;
	
	for(int i = (n-1); i >= 0; i--){
		printf("%d\n", *(pv + i));
	}
	

return 0;
}

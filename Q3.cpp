/*Escreva um programa que declare duas vari�veis inteiras e dois ponteiros para essas vari�veis. 
Em seguida, preencha as vari�veis com valores informados pelo usu�rio. Utilizando ponteiros, 
troque os valores entre as duas vari�veis sem usar uma vari�vel tempor�ria e sem utilizar operadores de atribui��o direta. 
Em seguida, imprima os valores atualizados das duas vari�veis.
*/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
    int a, b;

    printf("Digite dois n�meros inteiros: ");
    scanf("%d%d", &a, &b);

    
    a = a + b;
    b = a - b;
    a = a - b;

    printf("\nO valor trocado dos n�meros s�o: a: %d\t b: %d\n", a, b);
    return 0;
}

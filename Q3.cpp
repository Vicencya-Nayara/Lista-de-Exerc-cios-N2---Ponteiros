/*Escreva um programa que declare duas variáveis inteiras e dois ponteiros para essas variáveis. 
Em seguida, preencha as variáveis com valores informados pelo usuário. Utilizando ponteiros, 
troque os valores entre as duas variáveis sem usar uma variável temporária e sem utilizar operadores de atribuição direta. 
Em seguida, imprima os valores atualizados das duas variáveis.
*/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
    int a, b;

    printf("Digite dois números inteiros: ");
    scanf("%d%d", &a, &b);

    
    a = a + b;
    b = a - b;
    a = a - b;

    printf("\nO valor trocado dos números são: a: %d\t b: %d\n", a, b);
    return 0;
}

/*Escreva um programa que declare duas variáveis inteiras e dois ponteiros para essas variáveis. 
Em seguida, preencha as variáveis com valores informados pelo usuário. Utilizando ponteiros, 
troque os valores entre as duas variáveis sem usar uma variável temporária e sem utilizar operadores de atribuição direta. 
Em seguida, imprima os valores atualizados das duas variáveis.
*/
#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int num1, num2, *pa = &num1, *pb = &num2;
	
	printf("Digite 2 valores\n");
	
	printf("Digite o primeiro valor: ");
	scanf("%d", &num1);
	
	printf("Digite o primeiro valor: ");
	scanf("%d", &num2);
	
	*pa = *pa + *pb;
	*pb = *pa - *pb;
	*pa = *pa - *pb;
	
   printf("OS VALORES TROCADOS SÃO: %d %d", *pa, *pb);
   
    return 0;
}

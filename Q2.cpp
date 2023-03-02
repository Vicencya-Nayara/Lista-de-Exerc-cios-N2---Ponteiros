/*Escreva um programa que solicite ao usuário que digite uma string e, em seguida, crie uma nova string que seja a cópia da string original,
 mas com todas as vogais removidas. O programa deve usar ponteiros para manipular as strings.
*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
    char str[100], *pont;
    
    printf("Digite uma string: ");
    
    fgets(str, sizeof(str), stdin);
    pont = str;
    
    while (*pont) {
        if (*pont != 'a' && *pont != 'e' && *pont != 'i' && *pont != 'o' && *pont != 'u' &&
            *pont != 'A' && *pont != 'E' && *pont != 'I' && *pont != 'O' && *pont != 'U') {
            printf("%c", *pont);
        }
        pont++;
    }
    return 0;
}

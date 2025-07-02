#pragma warning (disable:4996) //pré-processamento para ignorar avisos de erros de segurança
#include <stdio.h>
#include <locale.h> // biblioteca de localização para usar o setlocale
// Atalho para comentar em bloco: ctl + k + c, a maioria funciona como VS code
// Comentario em bloco: /* */
//%.2f indica que num float irá aparecer apenas 2 casas decimais

int main()
{
	setlocale(LC_ALL, "Portuguese"); //define o ambiente para o idioma portugues
	
//Input de dados

	int num = 0;
	

	printf("Digite um número: ");
	scanf("%d", &num);/*o & pega o endereço de memoria da variavel.
						Caso não usar o "pragma warning" usar scanf_s (secure)*/ 
	
	printf("O seu primeiro número é: %d\n", num);

	return 0;

}

#pragma warning (disable:4996) //pr�-processamento para ignorar avisos de erros de seguran�a
#include <stdio.h>
#include <locale.h> // biblioteca de localiza��o para usar o setlocale
// Atalho para comentar em bloco: ctl + k + c, a maioria funciona como VS code
// Comentario em bloco: /* */
//%.2f indica que num float ir� aparecer apenas 2 casas decimais

int main()
{
	setlocale(LC_ALL, "Portuguese"); //define o ambiente para o idioma portugues
	
//Input de dados

	int num = 0;
	

	printf("Digite um n�mero: ");
	scanf("%d", &num);/*o & pega o endere�o de memoria da variavel.
						Caso n�o usar o "pragma warning" usar scanf_s (secure)*/ 
	
	printf("O seu primeiro n�mero �: %d\n", num);

	return 0;

}

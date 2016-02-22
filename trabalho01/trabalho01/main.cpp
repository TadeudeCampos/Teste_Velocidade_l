#include "listaapo.h"
#include "arvore.h"
#include <iostream>
#include <iomanip>
using namespace std;

extern int contArvore;
extern int contLista;

void main()
{
	//la�o esterno n = a 100 ate 2000 passo 100 
	for (int n = 100; n <= 2000; n += 100)
	{
		contArvore = contLista = 0;
		//declara uma lista
		TipoLista Lista;
		//Declara uma �rvore
		TipoArvore Arvore;

		//inicializa a lista 
		Elemento X; // declara X e Item  do tipo elemento 
		FLVazia(Lista); // verifica se a lista est� vazia 

		//inicializa a arvore 
		Elemento Ax; // declara Ax
		Inicializa(Arvore); // inicializa a �rvore Arvore verificando se esta vazia

		//la�o interno passo de 100 em 100 
		for (int i = 1; i <= n; i++)
		{
			Ax.Valor = rand();// o elemento da �rvore recebe um n�mero rand�mico 
			X.Valor = Ax.Valor;// o elemento da lista recebe o mesmo n�mero do elemento da �rvore

			Insere(Ax, Arvore);// insere o elemento Ax na �rvore 
			Insere(X, Lista);// insere o elemento na X lista 
		}
		//segundo la�o interno para contar os valores da pesquisa
		for (int i = 1; i < (2 * n); i++)
		{
			Ax.Valor = rand();// o elemento da �rvore recebe um n�mero rand�mico 
			X.Valor = Ax.Valor;// o elemento da lista recebe o mesmo n�mero do elemento da �rvore

			Pesquisa(Ax, Arvore);
			Localiza(Lista, X.Valor);
		}
		double mediaArvore = contArvore / (2.0 * n);

		double mediaLista = contLista / (2.0 * n);
		cout << n << "\t" << mediaArvore << "\t" << mediaLista << "\n";
		//zera os contadores
		contArvore = contLista = 0;
	}
	system("Pause");
}

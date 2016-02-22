#include "listaapo.h"
#include "arvore.h"
#include <iostream>
#include <iomanip>
using namespace std;

extern int contArvore;
extern int contLista;

void main()
{
	//laço esterno n = a 100 ate 2000 passo 100 
	for (int n = 100; n <= 2000; n += 100)
	{
		contArvore = contLista = 0;
		//declara uma lista
		TipoLista Lista;
		//Declara uma árvore
		TipoArvore Arvore;

		//inicializa a lista 
		Elemento X; // declara X e Item  do tipo elemento 
		FLVazia(Lista); // verifica se a lista está vazia 

		//inicializa a arvore 
		Elemento Ax; // declara Ax
		Inicializa(Arvore); // inicializa a árvore Arvore verificando se esta vazia

		//laço interno passo de 100 em 100 
		for (int i = 1; i <= n; i++)
		{
			Ax.Valor = rand();// o elemento da árvore recebe um número randômico 
			X.Valor = Ax.Valor;// o elemento da lista recebe o mesmo número do elemento da árvore

			Insere(Ax, Arvore);// insere o elemento Ax na árvore 
			Insere(X, Lista);// insere o elemento na X lista 
		}
		//segundo laço interno para contar os valores da pesquisa
		for (int i = 1; i < (2 * n); i++)
		{
			Ax.Valor = rand();// o elemento da árvore recebe um número randômico 
			X.Valor = Ax.Valor;// o elemento da lista recebe o mesmo número do elemento da árvore

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

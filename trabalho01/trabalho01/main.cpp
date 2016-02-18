#include "listaapo.h"
#include "arvore.h"
#include <iostream>

using namespace std;

 int contArvore = 0, contLista = 0;

void main()
{
	//laço esterno n = a 100 ate 2000 passo 100 
	for (int n = 100; n <= 2000; n++)
	{
		//declara uma lista
		TLista Lista;
		//Declara uma árvore
		TArvore Arvore;

		//inicializa a lista 
		ElementoL X, Item; // declara X e Item  do tipo elemento 
		FLVazia(Lista); // verifica se a lista está vazia 

		//inicializa a arvore 
		Elemento Ax, AItem; // declara Ax
		Inicializa(Arvore); // inicializa a árvore Arvore verificando se esta vazia

		//laço interno passo de 100 em 100 
		for (int i = 1; i <= n; i++)
		{
			Ax.Valor = rand();// o elemento da árvore recebe um número randômico 
			X.valoR = Ax.Valor;// o elemento da lista recebe o mesmo número do elemento da árvore

			InsereA(Ax, Arvore);// insere o elemento Ax na árvore 
			Insere(Lista, X);// insere o elemento na X lista 
		}
		//segundo laço interno para contar os valores da pesquisa
		for (int i = 1; i < (2 * n); i++)
		{
			double mediaArvore = contArvore / (2 * n);
			double mediaLista = contLista / (2 * n);
			cout << n <<"\t"<< mediaArvore <<"\t"<<mediaLista;
			//zera os contadores
			contArvore << 0;
			contLista << 0;
		}

	}
}

//#include "listaapo.h"
//#include "arvore.h"
//
//extern int contA;
//extern int contL;
//
//void main()
//{
//	//laço esterno n = a 100 ate 2000 passo 100 
//	for (int n = 100; n <= 2000; n++)
//	{
//		//declara uma lista
//		TLista Lista;
//		//Declara uma arvore
//		TArvore Arvore;
//
//		//inicializa a lista 
//		ElementoL X, Item; // declara X e Item  do tipo elemento 
//		FLVazia(Lista); // verifica se a lista está vazia 
//
//		//inicializa a arvore 
//		Elemento Ax, AItem; // declara Ax
//		Inicializa(Arvore);
//
//		for (int i = 1; i <= n; i++)
//		{
//			Ax.Valor = rand();
//			X.valoR = Ax.Valor;
//
//			InsereA(Ax, Arvore);
//			Insere(Lista, X);
//		}
//	}
//}
//
//
//

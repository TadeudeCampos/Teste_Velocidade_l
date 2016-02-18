#include "listaapo.h"
#include "arvore.h"
#include <iostream>

using namespace std;

 int contArvore = 0, contLista = 0;

void main()
{
	//la�o esterno n = a 100 ate 2000 passo 100 
	for (int n = 100; n <= 2000; n++)
	{
		//declara uma lista
		TLista Lista;
		//Declara uma �rvore
		TArvore Arvore;

		//inicializa a lista 
		ElementoL X, Item; // declara X e Item  do tipo elemento 
		FLVazia(Lista); // verifica se a lista est� vazia 

		//inicializa a arvore 
		Elemento Ax, AItem; // declara Ax
		Inicializa(Arvore); // inicializa a �rvore Arvore verificando se esta vazia

		//la�o interno passo de 100 em 100 
		for (int i = 1; i <= n; i++)
		{
			Ax.Valor = rand();// o elemento da �rvore recebe um n�mero rand�mico 
			X.valoR = Ax.Valor;// o elemento da lista recebe o mesmo n�mero do elemento da �rvore

			InsereA(Ax, Arvore);// insere o elemento Ax na �rvore 
			Insere(Lista, X);// insere o elemento na X lista 
		}
		//segundo la�o interno para contar os valores da pesquisa
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
//	//la�o esterno n = a 100 ate 2000 passo 100 
//	for (int n = 100; n <= 2000; n++)
//	{
//		//declara uma lista
//		TLista Lista;
//		//Declara uma arvore
//		TArvore Arvore;
//
//		//inicializa a lista 
//		ElementoL X, Item; // declara X e Item  do tipo elemento 
//		FLVazia(Lista); // verifica se a lista est� vazia 
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

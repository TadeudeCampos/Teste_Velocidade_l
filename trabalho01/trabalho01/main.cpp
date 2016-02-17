#include "listaapo.h"
#include "arvore.h"

extern int contA;
extern int contL;

void main()
{
	//laço esterno n = a 100 ate 2000 passo 100 
	for (int n = 100; n <= 2000; n++)
	{
		//declara uma lista
		TipoLista Lista;
		//Declara uma arvore
		TipoArvore Arvore;

		//inicializa a lista 
		Elemento X, Item; // declara X e Item  do tipo elemento 
		FLVazia(Lista); // verifica se a lista está vazia 

		//inicializa a arvore 
		Elemento Ax, AItem; // declara Ax
		Inicializa(Arvore);

		for (int i = 1; i <= n; i++)
		{
			Ax.Valor = rand();
			X.Valor = Ax.Valor;

			Insere(AX, Arvore);
			Insere(X, Lista);
		}

	}
}
//void carregarnumeros()
////{
////	void Insere(Elemento x, TipoLista &Lista)	{	                 	
////      (*Lista.Ultimo).Prox=(Celula*)malloc(sizeof(Celula));
////	Lista.Ultimo = (*Lista.Ultimo).Prox;
////	(*Lista.Ultimo).Item = x;
////	(*Lista.Ultimo).Prox = NULL;
////}
//}


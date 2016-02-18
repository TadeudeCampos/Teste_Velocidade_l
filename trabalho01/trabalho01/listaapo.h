#include <malloc.h>
#include<string>
using namespace std;

struct ElementoL{
	int valoR;
};

struct CelulaL{
   ElementoL Item;
   CelulaL *Prox;
   //int val[12];
} ;

struct TLista{
	CelulaL * Primeiro;
    CelulaL * Ultimo;
	//int tamanho[12];
};

// Faz uma lista tornar-se vazia
void FLVazia(TLista &Lista)
{
	Lista.Primeiro = (CelulaL*) malloc(sizeof(CelulaL));
	Lista.Ultimo = Lista.Primeiro;
	(*Lista.Primeiro).Prox = NULL;
}
// testa se uma lista está vazia
int Vazia(TLista Lista)
{
	return (Lista.Primeiro == Lista.Ultimo);
}

//Insere um elemento na lista. Insere após o último
void Insere(TLista &Lista, ElementoL x)
 {
	//(*Lista.Ultimo).Prox = (CelulaL*) malloc(sizeof(CelulaL));
	(*Lista.Ultimo).Prox = new CelulaL;
	Lista.Ultimo = (*Lista.Ultimo).Prox;
	(*Lista.Ultimo).Item = x;
	(*Lista.Ultimo).Prox = NULL;
}



// dado um endereço de uma posição valida da lista este procedimento retira
// o elemento seguinte
void Retira(TLista &Lista, CelulaL *p, ElementoL &Item)
{
	CelulaL *q;
	if (Vazia(Lista) || p ==NULL || (*p).Prox == NULL)
		printf("Erro");
	else
    {
		q = (*p).Prox;
		Item = (*q).Item;
		(*p).Prox=(*q).Prox;
		
		if ((*p).Prox ==NULL)
			Lista.Ultimo = p;
		
		free( q );
	}
}


CelulaL *compara(TLista Q, ElementoL E)
{
	CelulaL *aux;//apontador que recebe o local da lista pesquisado
	aux = (*Q.Primeiro).Prox;
	while(aux != NULL)
			{
				if((*aux).Item.valoR == E.valoR)
				{
					return aux;
				}
				else
				{
					aux = (*aux).Prox;
				}
			}
	return NULL;
}
CelulaL *localiza(TLista Q, int  E)
{
	CelulaL *aux, *aux2;
	aux = (*Q.Primeiro).Prox;
	aux2 = Q.Primeiro;
	int A=(*aux).Item.valoR;
	while(aux != NULL)
	{
		if ((*aux).Item.valoR == E)
		{
			return aux;
		}
		else
		{
			return aux2;
			aux = (*aux).Prox;
			aux2 = (*aux2).Prox;
		}
	} 
	return NULL;

}


// imprime uma lista do primeiro ao último elemento
void Imprime(TLista Lista)
{
	CelulaL *Aux;
	Aux = (*Lista.Primeiro).Prox;
	while (Aux != NULL)
    {
		//printf("%s \n", ((*Aux).Item.query));
		cout <<(*Aux).Item.valoR<<"\n";
		Aux = (*Aux).Prox;
	}
}
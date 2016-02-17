//Implementação de Lista com Apontador
#include <stdlib.h>
#include <stdio.h>
#include "elemento.h"
#include "listaapo.h"

// Implementação das funções da lista

void FLVazia(TipoLista &Lista)	{
	Lista.Primeiro = (Celula*)malloc(sizeof(Celula));
	Lista.Ultimo = Lista.Primeiro;
	(*Lista.Ultimo).Prox = NULL;
}

int Vazia(TipoLista Lista)	{
	return(Lista.Ultimo == Lista.Primeiro);
}

void Insere(Elemento x, TipoLista &Lista)	{	                 	
      (*Lista.Ultimo).Prox=(Celula*)malloc(sizeof(Celula));
	Lista.Ultimo = (*Lista.Ultimo).Prox;
	(*Lista.Ultimo).Item = x;
	(*Lista.Ultimo).Prox = NULL;
}

void InsereInicio(Elemento x, TipoLista &Lista)	{
	Celula *p = (Celula*)malloc(sizeof(Celula));
	(*p).Item = x;
	(*p).Prox = (*Lista.Primeiro).Prox;
	(*Lista.Primeiro).Prox = p;
}

void Limpa(TipoLista &Lista)	{
	Celula *aux = (*Lista.Primeiro).Prox;
	Celula *aux_prox;

	while(aux != NULL)	{
		aux_prox = (*aux).Prox;
		free(aux);
		aux = aux_prox;
	}

	Lista.Ultimo = Lista.Primeiro;
	(*Lista.Ultimo).Prox = NULL;
}

Celula *Localiza(TipoLista Lista, int Valor)	{
	Celula *p = Lista.Primeiro;

	while((*p).Prox != NULL)	{
		if((*(*p).Prox).Item.Valor == Valor)
			return(p);
		p = (*p).Prox;
	}
	return(NULL);
}

void Retira(Celula *p, TipoLista &Lista, Elemento &Item)	{
	Celula *q;

	if(Vazia(Lista) || p == NULL || (*p).Prox == NULL)	
		printf("\nErro\n");
	
	else	{
		q = (*p).Prox;
		Item = (*q).Item;
		(*p).Prox = (*q).Prox;
		if((*p).Prox == NULL)
			Lista.Ultimo = p;
		free(q);
	}
}

void Imprime(TipoLista Lista)	{
	Celula *aux = (*Lista.Primeiro).Prox;
	int cont = 1;

	printf(">> Elementos da Lista <<\n");

	while(aux != NULL)	{
		printf("Elemento %d = ", cont++);
		printf("%d\n", (*aux).Item.Valor);
		aux = (*aux).Prox;
	}

	printf("-----------------------\n");
}

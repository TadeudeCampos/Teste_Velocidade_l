#ifndef __listaapo_h
#define __listaapo_h

//Implementação de Lista com Apontador
//Arquivo de interface

#include "elemento.h"

struct Celula	{
	Elemento Item;
	Celula *Prox;
};

struct TipoLista	{
	Celula *Primeiro, *Ultimo;
};

// Funções da lista

void FLVazia(TipoLista &Lista);

int Vazia(TipoLista Lista);

void Insere(Elemento x, TipoLista &Lista);

void InsereInicio(Elemento x, TipoLista &Lista);

void Limpa(TipoLista &Lista);

void Retira(Celula *p, TipoLista &Lista, Elemento &Item);

void Imprime(TipoLista Lista);
Celula *Localiza(TipoLista Lista, int Valor);

#endif

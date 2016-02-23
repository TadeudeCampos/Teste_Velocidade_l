//Implementação de Árvore Binária de Busca
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include "elemento.h"
#include "arvore.h"

using namespace std;

int contArvore = 0;
void Inicializa(TipoArvore &Tree)
{
	Tree = NULL;
}

void Pesquisa(Elemento x, TipoArvore p) 
{
	if (p == NULL);//printf("\nRegistro nao esta na arvore\n"); 
	else
		if (contArvore++,(x.Valor <= (*p).Item.Valor))
		{
		Pesquisa(x, (*p).Esq);
		}
		else
			if (contArvore++,(x.Valor > (*p).Item.Valor))
			{
		Pesquisa(x, (*p).Dir);
			}
}

void Insere(Elemento x, TipoArvore &p)  {
	if (p == NULL)
	{
		p = (Nodo*)malloc(sizeof(Nodo));
		(*p).Item = x;
		(*p).Esq = NULL;
		(*p).Dir = NULL;
		//inserido por Vitor Tadeu 18022016
		contArvore++;
	}
	else
		if (x.Valor <= (*p).Item.Valor)
		{
		Insere(x, (*p).Esq);
		//inserido por Vitor Tadeu 18022016
		contArvore++;
		}
		else
			if (x.Valor > (*p).Item.Valor)
			{
		Insere(x, (*p).Dir);
		//inserido por Vitor Tadeu 18022016
		contArvore++;
			}
}

void Antecessor(Nodo *q, TipoArvore &r)  {
	if ((*r).Dir != NULL)
		Antecessor(q, (*r).Dir);
	else  {
		(*q).Item = (*r).Item;
		q = r;
		r = (*r).Esq;
		free(q);
	}
}

void Retira(Elemento x, TipoArvore &p)  {
	Nodo* Aux;
	if (p == NULL)
		printf("\nRegistro nao esta na arvore\n");
	else
		if (x.Valor < (*p).Item.Valor)
			Retira(x, (*p).Esq);
		else
			if (x.Valor >(*p).Item.Valor)
				Retira(x, (*p).Dir);
			else
				if ((*p).Dir == NULL)  {
		Aux = p;
		p = (*p).Esq;
		free(Aux);
				}
				else
					if ((*p).Esq != NULL)
						Antecessor(p, (*p).Esq);
					else  {
						Aux = p;
						p = (*p).Dir;
						free(Aux);
					}
}

void Imprime(TipoArvore a, int nivel)
{
	if (a != NULL)
	{
		Imprime(a->Dir, nivel + 1);
		for (int i = 0; i < nivel; i++) cout << '\t';
		cout << a->Item.Valor << endl;
		Imprime(a->Esq, nivel + 1);
	}
}
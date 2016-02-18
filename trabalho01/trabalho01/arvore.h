#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

struct Elemento
{
  int Valor;
};

struct Nodo
{
  Elemento Item;
  Nodo *Esq, *Dir;
};

typedef Nodo *TArvore;

//Faz o apontador da  arvore apontador para NULL
void Inicializa(TArvore &p)
{
  p = NULL;
}

void InsereA(Elemento x, TArvore &p)
{
  if (p == NULL)
  {
    p = (Nodo*) malloc(sizeof(Nodo));
    (*p).Item = x;
    (*p).Esq = NULL;
    (*p).Dir = NULL;
  }
  else
  {
    if (x.Valor < (*p).Item.Valor)
      Insere(x, (*p).Esq);
    else
    if (x.Valor > (*p).Item.Valor)
      Insere(x, (*p).Dir);
    else
	{
		printf("O elemento ja  existe");
		system("pause>null");
	}
	
  }
}

void Pesquisa(Elemento x, TArvore p)
{
  if (p == NULL)
    printf("Valor n∆o encontrado");
  else
    if (x.Valor < (*p).Item.Valor)
      Pesquisa(x, (*p).Esq);
    else
      if (x.Valor > (*p).Item.Valor)
	Pesquisa(x, (*p).Dir);
      else
	printf("Valor encontrado");
}

void ImprimePreOrdem(TArvore p)
{
  if(p != NULL)
  {
    printf("\n%d", (*p).Item.Valor);
    ImprimePreOrdem((*p).Esq);
    ImprimePreOrdem((*p).Dir);
  }
}

void TrocaMaior(TArvore r, TArvore &q)
{
  TArvore Aux;
  if ((*q).Dir == NULL)
  {
    (*r).Item.Valor = (*q).Item.Valor;
    Aux = q; //Armazena o endereco do maior em Aux
    q = (*q).Esq;//Pode haver ainda algum nodo a esquerda do maior
    free(Aux);
  }
  else
    TrocaMaior(r, (*q).Dir);
}

void Retira(TArvore &p, Elemento x)
{
  TArvore Aux, EndMaior;
  if (p == NULL)
    printf("Elemento n„o encontrado");
  else  
    if (x.Valor < (*p).Item.Valor) //Procura o elemento na subarvore esquerda
	{
		Retira((*p).Esq, x);
	    printf<<"\n Valor retirado:" <<x.Valor;
	}
	else
      if (x.Valor > (*p).Item.Valor) //Procura o elemento na subarvore direita
	  {
		Retira((*p).Dir, x);
		printf<<"\n Valor retirado:" <<x.Valor;
	  }
	  else
      {
        if ((*p).Esq == NULL) //Retirando um nodo que nao tem subarvore esquerda
        {
  	  Aux = p;
  	  p = (*p).Dir;
	  free(Aux);
        }
        else
  	  if ((*p).Dir == NULL) //Retirando um nodo que nao tem subarvore direita
	  {
	    Aux = p;
	    p = (*p).Esq;  
	    free(Aux);
	  }
	  else
	    TrocaMaior(p, (*p).Esq);
      }
}
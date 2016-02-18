#ifndef __arvore_h
#define __arvore_h

//Interface da �rvore Bin�ria de Busca
#include <stdlib.h>
#include <stdio.h>
#include "elemento.h"

struct Nodo{ 
	Elemento Item; 
	Nodo *Esq, *Dir; 
}; 

typedef Nodo *TipoArvore; 

//Fun��es da �rvore

void Inicializa(TipoArvore &Tree);

void Pesquisa( Elemento x, TipoArvore p);

void Insere( Elemento x, TipoArvore &p); 

void Antecessor(Nodo *q, TipoArvore &r); 

void Retira( Elemento x, TipoArvore &p); 

void Imprime( TipoArvore a, int nivel);

#endif

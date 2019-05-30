#include "tipos.h"

// Apresente uma definição da função int contaFolhas (ABin a) que dada uma árvore binária de inteiros, conta quantos dos seus nodos
// são folhas, i.e., que não têm nenhum descendente.

int contaFolhas (ABin a) {

	if (a == NULL) return 0;

	int x = 0;

	if (a->dir == NULL && a->esq == NULL)
		x = 1;
	else {
		x += contaFolhas (a->esq);
		x += contaFolhas (a->dir);
	}

	return x;
}
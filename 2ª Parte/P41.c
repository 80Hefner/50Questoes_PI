#include "tipos.h"

// Defina uma função ABin somasAcA (ABin a) que, dada uma árvore de inteiros, calcula a árvore das somas acumuladas dessa árvore.
// A árvore calculada deve ter a mesma forma da árvore recebida como argumento e em cada nodo deve conter a soma dos elementos
// da sub-árvore que aí se inicia.

int somaABin (ABin a) {

	int x;

	if (a == NULL)
		x = 0;
	else
		x = a->valor + somaABin (a->esq) + somaABin (a->dir);

	return x;
}

ABin somasAcA (ABin a) {

	ABin new;

	if (a == NULL) return NULL;

	new = malloc (sizeof(struct nodo));
	new->valor = somaABin (a);
	new->esq = somasAcA (a->esq);
	new->dir = somasAcA (a->dir);


	return new;
}

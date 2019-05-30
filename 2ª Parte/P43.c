#include "tipos.h"

// Defina uma função ABin cloneMirror (ABin a) que cria uma árvore nova, com o resultado de inverter a árvore (efeito de espelho).

ABin cloneMirror (ABin a) {

	if (a == NULL) return NULL;

	ABin new = malloc (sizeof(struct nodo));

	new->valor = a->valor;
	new->esq = cloneMirror (a->dir);
	new->dir = cloneMirror (a->esq);

	return new;
}
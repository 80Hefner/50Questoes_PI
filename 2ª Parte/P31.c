#include "tipos.h"

// Defina a função void inorder (ABin , LInt *) que cria uma lista ligada de inteiros a partir de uma travessia inorder de uma árvore binária.

void inorder_aux (ABin a, LInt *l) {

	if (a == NULL) return;

	inorder_aux (a->esq, l);

	LInt atual = *l;

	while (atual->prox != NULL)
		atual = atual->prox;

	atual->prox = newLInt (a->valor, NULL);

	inorder_aux (a->dir, l);

	return;
	
}

void inorder (ABin a, LInt *l) {

	*l = newLInt (0, NULL);
	inorder_aux (a, l);

	LInt aux = *l;
	*l = aux->prox;
	free (aux);

	return;
}
#include "tipos.h"

// Defina uma função LInt nivelL (ABin a, int n) que, dada uma árvore binária, constrói uma lista com os valores dos elementos que
// estão armazenados na árvore ao nível n (assuma que a raiz da árvore está ao nível 1).

void nivelL_aux (ABin a, int n, LInt *l) {

	if (a == NULL) return;

	if (n == 1) {
		*l = newLInt (a->valor, *l);
	}
	else {
		nivelL_aux (a->dir, n-1, l);
		nivelL_aux (a->esq, n-1, l);
	}
}

LInt nivelL (ABin a, int n) {

	LInt new = NULL;
	nivelL_aux (a, n, &new);

	return new;
}
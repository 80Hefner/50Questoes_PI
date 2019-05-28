#include "tipos.h"

// Defina uma função merge (LInt *r, LInt a, LInt b) que junta duas listas ordenadas (a e b) numa única lista ordenada (r).

void merge (LInt *r, LInt a, LInt b) {

	LInt atual = newLInt (0, NULL);
	*r = atual;

	while (a != NULL && b != NULL) {

		if (a->valor < b->valor) {
			atual->prox = a;
			a = a->prox;
		}
		else {
			atual->prox = b;
			b = b->prox;
		}

		atual = atual->prox;
	}

	if (a == NULL)
		atual->prox = b;
	else
		atual->prox = a;

	atual = *r;
	*r = atual->prox;
	free (atual);

	return;
}
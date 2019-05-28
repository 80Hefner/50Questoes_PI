#include "tipos.h"

// Defina uma função LInt parte (LInt l) que parte uma listal em duas: na lista l ficam apenas os elementos das posições ímpares;
// na lista resultante ficam os restantes elementos.
// Assim, se a lista x tiver os elementos {1,2,3,4,5,6} a chamada y = parte (x), coloca na lista y os elementos {2,4,6}
// ficando em x apenas os elementos {1,3,5}

LInt parte (LInt l) {

	if (l == NULL) return l;

	LInt atual = l->prox, ant = l, new = newLInt (0, NULL), auxn = new;
	int i;

	for (i = 2; atual != NULL; i++) {
		if (i % 2 == 0) {
			auxn->prox = atual;
			auxn = auxn->prox;
			ant->prox = atual->prox;
			atual = atual->prox;
			auxn->prox = NULL;
		}
		else {
			ant = ant->prox;
			atual = atual->prox;
		}
	}

	auxn = new;
	new = new->prox;
	free (auxn);

	return new;
}
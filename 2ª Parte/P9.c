#include "tipos.h"

// Defina uma função LInt parteAmeio (LInt *l) que, parte uma lista não vazia *l a meio. Se x contiver os elementos {1,2,3,4,5},
// após a invocação y=parteAmeio(&x) a lista y deverá conter os elementos {1,2} e a lista x os restantes {3,4,5}

LInt parteAmeio (LInt *l) {

	LInt y = newLInt (0,*l), auxl = *l, auxy = y;
	int x;

	for (x = 0; auxl != NULL; x++)
		auxl = auxl->prox;

	auxl = auxy->prox;
	x = x / 2;

	while (x > 0) {
		auxl = auxl->prox;
		auxy = auxy->prox;
		x--;
	}

	auxy->prox = NULL;
	*l = auxl;

	auxy = y;
	y = y->prox;
	free (auxy);

	return y;
}
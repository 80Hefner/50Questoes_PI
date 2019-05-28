#include "tipos.h"

// Apresente uma definição não recursiva da função LInt cloneRev (LInt) que cria uma nova lista ligada com os elementos por ordem inversa.

LInt cloneRev (LInt l) {

	LInt auxl = newLInt (0, l);
	l = auxl;
	LInt novo = NULL;

	while (auxl->prox != NULL) {
		auxl = auxl->prox;
		novo = newLInt (auxl->valor, novo);
	}

	auxl = l;
	l = l->prox;
	free (auxl);

	return novo;
}
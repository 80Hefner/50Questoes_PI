#include "tipos.h"

// Defina uma função LInt somasAcL (LInt l) que, dada uma lista de inteiros, constrói uma nova lista de inteiros contendo as somas
// acumuladas da lista original (que deverá permanecer inalterada).
// Por exemplo, se a lista l tiver os valores [1,2,3,4] a lista contruída pela invocação de somasAcL (l) deverá conter os valores [1,3,6,10].

LInt somasAcL (LInt l) {

	if (l == NULL) return NULL;

	LInt atual = l, new = newLInt (atual->valor, NULL), auxn = new;
	int soma = atual->valor;

	while (atual->prox != NULL) {
		atual = atual->prox;
		soma += atual->valor;
		auxn->prox = newLInt (soma, NULL);
		auxn = auxn->prox;
	}

	return new;
}
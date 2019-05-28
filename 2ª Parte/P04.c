#include "tipos.h"

// Apresente uma definição não recursiva da função LInt reverseL (LInt) que inverte uma lista (sem criar uma nova lista).

LInt reverseL (LInt lista) {
	LInt ant = NULL, aux;

	if (lista == NULL)
		return lista;

	while (lista != NULL){
		aux = lista->prox;
		lista->prox = ant;
		ant = lista;
		lista = aux;
	}

	return ant;
}

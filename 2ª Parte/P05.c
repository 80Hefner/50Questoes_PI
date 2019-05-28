#include "tipos.h"

// Apresente  uma  definição não recursiva da função void insertOrd (LInt *, int) que insere ordenadamente um elemento numa lista ordenada.

void insertOrd (LInt * lista, int x) {

	LInt nodo = malloc (sizeof(LInt));
	LInt aux = (*lista);
	LInt ant;

	nodo->valor = x;
	nodo->prox = NULL;

	// 0 elementos
	if ((*lista) == NULL) {
		(*lista) = nodo;
		return;
	}

	// 1 elemento
	if (aux->prox == NULL) {
		if (x < aux->valor) {
			(*lista) = nodo;
			nodo->prox = aux;
		}
		else {
			aux->prox = nodo;
		}
		return;
	}

	// 2 ou mais elementos
	ant = aux;
	aux = aux->prox;

	if (ant->valor > x) {
		(*lista) = nodo;
		nodo->prox = ant;
		return;
	}
	else {

		while (aux->valor < x) {
			if (aux->prox == NULL) {
				aux->prox = nodo;
				return;
			}
			else {
				ant = ant->prox;
				aux = aux->prox;
			}
		}

		ant->prox = nodo;
		nodo->prox = aux;
		return;
	}

}

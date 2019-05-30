#include "tipos.h"

// Apresente uma definição não recursiva da função int maiorAB (ABin) que calcula o maior elemento de uma árvore binária de procura não vazia.

int maiorAB (ABin a) {

	while (1) {
		if (a->dir == NULL)
			return a->valor;
		else
			a = a->dir;
	}
}
#include "tipos.h"

// Defina uma função int dumpAbin (ABin a, int v[], int N) que dada uma árvore a, preenche o array v com os elementos da árvore segundo
// uma travessia inorder. A função deverá preencher no máximo N elementos e retornar o número de elementos preenchidos.

int dumpAbin_aux (ABin a, int v[], int *N, int *i) {

	if (a == NULL) return 0;

	int x = 0;

	x += dumpAbin_aux (a->esq, v, N, i);

	if (*N > 0) {
		v[*i] = a->valor;
		(*i)++;
		(*N)--;
		x++;
	}

	x += dumpAbin_aux (a->dir, v, N, i);

	return x;
}

int dumpAbin (ABin a, int v[], int N) {

	int i = 0, x;

	x = dumpAbin_aux (a, v, &N, &i);

	return x;
}
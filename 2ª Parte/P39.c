#include "tipos.h"

// Defina uma função int nivelV (ABin a, int n, int v[]) que preenche o vector v com os elementos de a que se encontram no nível n.
// Considere que a raíz da árvore se encontra no nível 1.
// A função deverá retornar o número de posições preenchidas do array.

void nivelV_aux (ABin a, int n, int v[], int *x) {

	if (a == NULL) return;

	if (n == 1) {
		v[*x] = a->valor;
		(*x)++;
	}
	else {
		nivelV_aux (a->esq, n-1, v, x);
		nivelV_aux (a->dir, n-1, v, x);		
	}

}

int nivelV (ABin a, int n, int v[]) {

	int x = 0;

	nivelV_aux (a, n, v, &x);

	return x;
}
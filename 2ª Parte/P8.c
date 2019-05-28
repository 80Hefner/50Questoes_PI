#include "tipos.h"

// Defina uma função void splitQS (LInt l, int x, LInt *mx, LInt *Mx) que, dada uma lista ligada l e um inteiro x, parte a lista em 
// duas (retornando os endereços dos primeiros elementos da lista em *mx e *Mx): uma com os elementos de l menores do que x e a outra
// com os restantes. Note que esta função não deverá criar cópias dos elementos da lista.


void splitQS (LInt l, int x, LInt *mx, LInt *Mx) {
	LInt atual = l;

	*mx = newLInt(0, NULL);
	LInt mxa = *mx;

	*Mx = newLInt(0, NULL);
	LInt Mxa = *Mx;

	while (atual != NULL) {

		if (atual->valor < x) {
			mxa->prox = atual;
			atual = atual->prox;
			mxa = mxa->prox;
			mxa->prox = NULL;
		}
		else {
			Mxa->prox = atual;
			atual = atual->prox;
			Mxa = Mxa->prox;
			Mxa->prox = NULL;
		}
	}

	atual = *mx;
	*mx = (*mx)->prox;
	free (atual);

	atual = *Mx;
	*Mx = (*Mx)->prox;
	free (atual);

}
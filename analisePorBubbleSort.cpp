#include "tipos.h"

void  analisePorBubbleSort(TCV conjuntoDeVetores){
    alimentarVetores(10,conjuntoDeVetores.vetores10.vetorOrdenadoCresc,conjuntoDeVetores.vetores10.vetorOrdenadoDec,conjuntoDeVetores.vetores10.vetorOrdenadoAleatorio);
    alimentarVetores(100,conjuntoDeVetores.vetores100.vetorOrdenadoCresc,conjuntoDeVetores.vetores100.vetorOrdenadoDec,conjuntoDeVetores.vetores100.vetorOrdenadoAleatorio);
    alimentarVetores(1000,conjuntoDeVetores.vetores1000.vetorOrdenadoCresc,conjuntoDeVetores.vetores1000.vetorOrdenadoDec,conjuntoDeVetores.vetores1000.vetorOrdenadoAleatorio);
}

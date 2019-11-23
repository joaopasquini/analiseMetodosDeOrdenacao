#ifndef _tipos_
#define _tipos_

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

typedef struct tipoVetoresDe10{
	int vetorOrdenadoCresc[10];
	int vetorOrdenadoDec[10];
	int vetorOrdenadoAleatorio[10];
}TV10;

typedef struct tipoVetoresDe100{
	int vetorOrdenadoCresc[100];
	int vetorOrdenadoDec[100];
	int vetorOrdenadoAleatorio[100];
}TV100;

typedef struct tipoVetoresDe1000{
	int vetorOrdenadoCresc[1000];
	int vetorOrdenadoDec[1000];
	int vetorOrdenadoAleatorio[1000];
}TV1000;

typedef struct tipoVetoresDe10000{
	int vetorOrdenadoCresc[10000];
	int vetorOrdenadoDec[10000];
	int vetorOrdenadoAleatorio[10000];
}TV10000;

typedef struct tipoConjuntoDeVetores{
	TV10 vetores10;
	TV100 vetores100;
	TV1000 vetores1000;
	TV10000 vetores10000;
}TCV;


void  analisePorBubbleSort(TCV conjuntoDeVetores);
void  analisePorSelectionSort(TCV conjuntoDeVetores);
void  analisePorHeapSort(TCV conjuntoDeVetores);
void  analisePorInsertionSort(TCV conjuntoDeVetores);
void  analisePorMergeSort(TCV conjuntoDeVetores);
void  analisePorQuickSort(TCV conjuntoDeVetores);
void alimentarVetores(int tamanhoDosVetores,int vetorOrdenadoCresc[],int vetorOrdenadoDec[],int vetorAleatorio[]);



#endif

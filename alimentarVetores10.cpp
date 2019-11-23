#include "tipos.h"

void alimentarVetores(int tamanhoDosVetores,int vetorOrdenadoCresc[],int vetorOrdenadoDec[],int vetorAleatorio[]){
	
	srand(time(NULL));
	int limInferior = 0;
	int limSuperior = tamanhoDosVetores;
	int vetorRepetidos[limSuperior];
	int numeroAleatorio;
	
	
	for(int i = limInferior ; i<limSuperior ; i++){
		
		vetorOrdenadoCresc[i] = i;
		vetorOrdenadoDec[limSuperior-1-i] = i;
		
		//inserir Numero Aleatorio Nao Repetido
		bool jaTem = false;
		numeroAleatorio = (rand() %  (limSuperior - limInferior + 1)) + limInferior;
		
		for (int j = limInferior ; j< limSuperior ; j++){
			if(vetorRepetidos[i] == numeroAleatorio){
				jaTem = true;
			}
		}
		
		if(jaTem == false){
			vetorAleatorio[i] = numeroAleatorio;
		}
		
	}
}

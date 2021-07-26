#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void printArray(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

void insertionSort(int array[], int tamanhoArray)
{
	int elementoAtual, antecessor;
	for (int i = 1; i < tamanhoArray; i++) {
		elementoAtual = array[i];
		antecessor = i - 1;

		while (antecessor >= 0 && array[antecessor] > elementoAtual) {
			array[antecessor + 1] = array[antecessor];
			antecessor = antecessor - 1;
		}
		array[antecessor + 1] = elementoAtual;
	}
    
}

int encontrarMediana(int array[], int tamanhoArray){
    insertionSort(array, tamanhoArray);
    return array[tamanhoArray/2];
}

void troca(int *primeiroElemento, int *segundoElemento){
    int temp = *primeiroElemento;
    *primeiroElemento = *segundoElemento;
    *segundoElemento = temp;
}

int fazParticao(int array[], int baixo, int alto, int x){
    int i, j;
    for(i = baixo; i < alto;i++){
        if (array[i] == x){
            troca(&array[i], &array[alto]);
            break;
        }
    }

    i = baixo;
    for(j = baixo; j <= alto -1; j++){
        if(array[j] <= x){
            troca(&array[i], &array[j]);
            i++;
        }
    }
    troca(&array[i], &array[alto]);
    return i;

}

int selecao(int array[], int baixo, int alto, int k){

    if(baixo == alto) return array[baixo]; // n == 1

    int tamanhoArray = alto-baixo+1;
    //array de medianas
    int numeroDeMedianas = floor((tamanhoArray+4)/5);
    int *medianas = (int*) malloc(numeroDeMedianas * sizeof(int));
    
    int i;
    for(i = 0; i < tamanhoArray/5; i++){
        medianas[i] = encontrarMediana(array+baixo+i*5, 5);
    }
    
    if(i*5 < tamanhoArray){
        medianas[i] = encontrarMediana(array+baixo+i*5, tamanhoArray%5);
        i++;
    }

    //mediana do array de medianas
    int medianaDasMedianas;
    if(i == 1){
        medianaDasMedianas = medianas[0];
    } else {
        medianaDasMedianas = selecao(medianas, 0, i-1, i/2);
    }

    //particacao
    int indicePivo = fazParticao(array, baixo, alto, medianaDasMedianas);

    //retorna menor k-esimo ou faz recursao em parte do array
    if(indicePivo-baixo == k-1) return array[indicePivo];
    
    if(indicePivo-baixo > k-1) return selecao(array, baixo, indicePivo-1, k);

    return selecao(array, indicePivo+1, alto, k-indicePivo+baixo-1);


}

int main()
{
	int array[] = {12, 3, 5, 7, 4, 19, 26, 40, 35, 10, 23, 18, 50};
    int tamanhoArray = sizeof(array)/sizeof(array[0]), k = 7;

    printf("O k-menor é: %d \n", selecao(array, 0, tamanhoArray-1, k));

	return 0;
}

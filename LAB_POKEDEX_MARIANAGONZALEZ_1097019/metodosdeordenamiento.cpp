#include "metodosdeordenamiento.h"

Pokemon arr[70];
Pokemon* metodosdeordenamiento::bubbleSort(Pokemon arr[], int num) { //método para ordenar numero nacional con bubble sort
	int aux, i, j;
	Pokemon Paux;

	for (i = 0; i < num - 1; i++)
	{
		for (j = i + 1; j < num; j++)
		{
			if (arr[i].nnacional > arr[j].nnacional)
			{
				aux = arr[i].nnacional;
				Paux = arr[i];
				arr[i].nnacional = arr[j].nnacional;
				arr[i] = arr[j];
				arr[j] = Paux;
			}
		}
	}	return arr;
}

int metodosdeordenamiento::Separar(Pokemon arr[], int inicio, int fin) {
	int left;
	int right;
	int pivot;
	int temp;
	Pokemon leftPok;
	Pokemon rightPok;
	Pokemon pivotPok;
	Pokemon tempPok;
	pivot = arr[inicio].nnacional;
	pivotPok = arr[inicio];
	left = inicio;
	right = fin;
	while (left < right)
	{
		while (arr[right].nnacional > pivot)
		{
			right--;
		}
		while ((left < right) && (arr[left].nnacional <= pivot))
		{
			left++;
		}
		if (left < right)
		{
			temp = arr[left].nnacional;
			tempPok = arr[left];
			arr[left].nnacional = arr[right].nnacional;
			arr[left] = arr[right];
			arr[right].nnacional = temp;
			arr[right] = tempPok;
		}
	}
	temp = arr[right].nnacional;
	tempPok = arr[right];
	arr[right].nnacional = arr[inicio].nnacional;
	arr[right] = arr[inicio];
	arr[inicio].nnacional = temp;
	arr[inicio] = tempPok;
	return right;
}
Pokemon* metodosdeordenamiento::quickSort(Pokemon arr[], int inicio, int fin) {
	int pivot;
	if (inicio < fin)
	{
		pivot = Separar(arr, inicio, fin);
		quickSort(arr, inicio, pivot - 1);
		quickSort(arr, pivot + 1, fin);
	}
	return arr;
}
metodosdeordenamiento::metodosdeordenamiento()
{
}


metodosdeordenamiento::~metodosdeordenamiento()
{
}

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
Pokemon* metodosdeordenamiento::bubbleSortGen(Pokemon arr[], int num) { //método para ordenar numero nacional con bubble sort
	int aux, i, j;
	Pokemon Paux;

	for (i = 0; i < num - 1; i++)
	{
		for (j = i + 1; j < num; j++)
		{
			if (arr[i].gen > arr[j].gen)
			{
				aux = arr[i].gen;
				Paux = arr[i];
				arr[i].gen = arr[j].gen;
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
int metodosdeordenamiento::SepararGen(Pokemon arr[], int inicio, int fin) {
	int left;
	int right;
	int pivot;
	int temp;
	Pokemon leftPok;
	Pokemon rightPok;
	Pokemon pivotPok;
	Pokemon tempPok;
	pivot = arr[inicio].gen;
	pivotPok = arr[inicio];
	left = inicio;
	right = fin;
	while (left < right)
	{
		while (arr[right].gen > pivot)
		{
			right--;
		}
		while ((left < right) && (arr[left].gen <= pivot))
		{
			left++;
		}
		if (left < right)
		{
			temp = arr[left].gen;
			tempPok = arr[left];
			arr[left].gen = arr[right].gen;
			arr[left] = arr[right];
			arr[right].gen = temp;
			arr[right] = tempPok;
		}
	}
	temp = arr[right].gen;
	tempPok = arr[right];
	arr[right].gen = arr[inicio].gen;
	arr[right] = arr[inicio];
	arr[inicio].gen = temp;
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
Pokemon* metodosdeordenamiento::quickSortGen(Pokemon arr[], int inicio, int fin) {
	int pivot;
	if (inicio < fin)
	{
		pivot = SepararGen(arr, inicio, fin);
		quickSortGen(arr, inicio, pivot - 1);
		quickSortGen(arr, pivot + 1, fin);
	}
	return arr;
}
metodosdeordenamiento::metodosdeordenamiento()
{
}


metodosdeordenamiento::~metodosdeordenamiento()
{
}

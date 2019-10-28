#pragma once
#include "Pokemon.h"
#include <string>
class metodosdeordenamiento
{
public:
	metodosdeordenamiento();
	~metodosdeordenamiento();
public:
	Pokemon arr[70];
	Pokemon* bubbleSort(Pokemon arr[], int num);
	Pokemon* quickSort(Pokemon arr[], int inicio, int fin);
	int Separar(Pokemon arr[], int inicio, int fin);
};


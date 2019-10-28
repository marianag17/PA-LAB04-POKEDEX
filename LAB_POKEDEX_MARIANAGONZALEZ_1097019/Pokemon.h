#pragma once
#include <string>
class Pokemon
{
public:
	Pokemon();
	~Pokemon();
public:
	int gen;
	std::string nombree;
	int nnacional;
	Pokemon::Pokemon(int generacion, int numnacional,std::string nombre);
};


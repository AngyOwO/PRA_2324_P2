#ifndef DYV_H
#define DYV_H

#include <vector>
#include <iostream>

template <typename T>

T BusquedaBinaria(T x, std::vector<T>& v, int ini, int fin){

	if(ini > fin)
		std::cout << "No se encuentra en el array" << std::endl;	

	int medio = (ini + fin) / 2;

	if(v[medio] == x)
		return medio;
	else if(v[medio] > x)
		return BusquedaBinaria(x, v, ini, medio - 1);
	else
		return BusquedaBinaria(x, v, medio + 1, fin);

}

#endif

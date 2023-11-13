#ifndef DYV_H
#define DYV_H

#include <vector>
#include <iostream>
#include <ostream>

template <typename T>

T BusquedaBinaria (T x, std::vector<T>& v, int ini, int fin){

	if (ini > fin){
		std::cout << "No se encuentra en el array" << std::endl;	
		return -1;
	}

	int medio = (ini + fin) / 2;

	if (v[medio] == x)
		return medio;
	else if (v[medio] > x)
		return BusquedaBinaria(x, v, ini, medio - 1);
	else
		return BusquedaBinaria(x, v, medio + 1, fin);

}

int Partition (std::vector<T>& v, int ini, int fin){

        T x = v[fin];
        int i = ini;

        for (int j = ini; j <= fin; j++){
                if (v[j] <= x){
                        v[i] = v[j];
                        i = i + 1;
                }
        }

        v[i] = v[fin];
        return i;
}

void QuickSort (std::vector<T>& v, int ini, int fin){
	
	if (ini < fin){
		int pivot = Partition(v, ini, fin);
		QuickSort(v, ini, pivot - 1);
		QuickSort(v, pivot + 1, fin);
	}
}

#endif

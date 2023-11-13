#include "DyV.h"
#include <iostream>
#include <chrono>


int main(){
	std::vector<int> a{1,2,3,4,5,6,7,8,9};
	std::vector<double> b{1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0};

	std::cout << BusquedaBinaria(2,a,0,8) << std::endl;
	std::cout << BusquedaBinaria(4.0,b,0,8) << std::endl;

	std::vector<int> c{12,45,21,35,3,56,13,22,9,10};

	auto = start = std::chrono::system_clock::now();
	QuickSort(c,0,9);
	auto end = std::chrono::system_clock::now();

	std::chrono::duration<float, std::milli> duration = end - start;

	std::cout << "Time: " << duration.count() << "s" << std::endl;

	std::cout << "[";
    	for (const auto& elem : c) {
		std::cout << elem << " ";
    	}
	std::cout << "]" << endl;

	return 0;
}

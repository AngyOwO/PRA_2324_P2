#include "DyV.h"

int main(){
	std::vector<int> a{1,2,3,4,5,6,7,8,9};
	std::vector<double> b{1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0};

	BusquedaBinaria(2,a,0,8);
	BusquedaBinaria(4.0,b,0,8);
}

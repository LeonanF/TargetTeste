#include <iostream>
#include <vector>


// 2) Buscar n�mero na sequ�ncia fibonacci

inline void fib(long double n) {
	
	std::vector<long double> sequencia{0,1};
	sequencia.reserve(100);

	while (sequencia.back() < n) {
		sequencia.push_back(sequencia.at(sequencia.size()-1) + sequencia.at(sequencia.size()-2));
	}

	sequencia.back() == n ?
		std::cout << "O valor " << n << " pertence � sequ�ncia fibonacci." : std::cout << "O valor " << n << " n�o pertence � sequ�ncia fibonacci.";

}
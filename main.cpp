#include "questao2.cpp"
#include "questao5.cpp"




// Main usado para testar resultado das quest�es
int main() {
	setlocale(LC_ALL, "portuguese");

	// Quest�o 2
	fib(10946);

	std::cout << '\n';

	// Quest�o 5
	std::string invertida = invertString("Ol�, mundo!");

	std::cout << invertida;

}
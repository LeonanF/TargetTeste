#include "questao2.cpp"
#include "questao5.cpp"




// Main usado para testar resultado das questões
int main() {
	setlocale(LC_ALL, "portuguese");

	// Questão 2
	fib(10946);

	std::cout << '\n';

	// Questão 5
	std::string invertida = invertString("Olá, mundo!");

	std::cout << invertida;

}
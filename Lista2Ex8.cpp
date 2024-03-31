/*
Computacao Para a Engenharia - 2024 - Lista 2, Exercicio 8 
Autor: Guilherme Carvalho
Data: 30/03/2024
*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// Iniccio da função 
int main(){

	float c1;
	float c2;
	float h;
	cout << "Calculo da hipotenusa." << endl;
	cout << "Insira o primeiro cateto: ";
	cin >> c1;
	cout << "Insira o segundo cateto: ";
	cin >> c2;
	h = sqrt(c1*c1 + c2*c2);
	cout << "A hiputenusa desse triangulo retangulo e " << setprecision(3) << fixed << h << " unidades." << endl;
	return 0;							// Retorna 0; Pode ser intepretado com "Ocorreu tudo bem"
}

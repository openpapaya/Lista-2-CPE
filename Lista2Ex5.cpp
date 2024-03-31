/*
Computacao Para a Engenharia - 2024 - Lista 2, Exercicio 5 
Autor: Guilherme Carvalho
Data: 30/03/2024
*/
#include <iostream>
#include <iomanip>
using namespace std;

// Iniccio da função 
int main(){

	float l;
	float c;
	float a;

	cout << "Calculo da area de uma sala" << endl;
	cout << "Forneca a largura da sala: " << endl;
	cin >> l;
	cout << "Forneca o comprimento da sala: " << endl;
	cin >> c;
	a = l*c;
	cout << "Area: " << setprecision(3) << fixed << a << " unidades quadradas" << endl;
	return 0;							// Retorna 0; Pode ser intepretado com "Ocorreu tudo bem"
}

/*
Computacao Para a Engenharia - 2024 - Lista 2, Exercicio 3 
Autor: Guilherme Carvalho
Data: 30/03/2024
*/
#include <iostream>
#include <iomanip>
using namespace std;

// Iniccio da função 
int main(){

	float r;
	float d;
	float c;
	float a;

	cout << "Forneca o raio do circulo para que seja" << endl;
	cout << "calculado o seu diametro e sua area." << endl;
	cout << "Infome o raio: " ;
	cin >> r;
	d = 2*r;
	c = 2*3.1415*r;
	a = 3.1415*r*r;
	cout << "Raio: " << setprecision(3) << fixed << r << " unidades" << endl;
	cout << "Diametro: " << setprecision(3) << fixed << d << " unidades" << endl;
	cout << "Circunferencia: " << setprecision(3) << fixed << c << " unidades" << endl;
	cout << "Area: " << setprecision(3) << fixed << a << " unidades quadradas" << endl;
	return 0;							// Retorna 0; Pode ser intepretado com "Ocorreu tudo bem"
}

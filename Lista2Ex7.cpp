/*
Computacao Para a Engenharia - 2024 - Lista 2, Exercicio 7 
Autor: Guilherme Carvalho
Data: 30/03/2024
*/
#include <iostream>
#include <iomanip>
using namespace std;

// Iniccio da função 
int main(){

	unsigned long int a;
	unsigned long int i;
	int r;
	int n;
	r = 0;
	n = 0;
	cout << "Verificar se o numero inserido e primo ou nao." << endl;
	cout << "Insira o numero: ";
	cin >> a;
	i = a - 1;
	while(i > 0)
	{
		r = a%i;
		if(r == 0)
		{
			n++;
		}
		i--;
	}
	if(n > 1)
	{
		cout << "O numero " << a << " nao e primo." << endl;
	}
	else
		cout << "o numero " << a << " e primo." << endl;
	return 0;							// Retorna 0; Pode ser intepretado com "Ocorreu tudo bem"
}

/*
Computacao Para a Engenharia - 2024 - Lista 2, Exercicio 2 
Autor: Guilherme Carvalho
Data: 30/03/2024
*/
#include <iostream>
#include <iomanip>
using namespace std;

// Iniccio da função 
int main(){

	float a;
	float b;
	float soma;
	float produto;
	float diferenca;
	float quociente;
	cout << "Insira dois numeros, A e B, e receba a soma, o produto," << endl;
	cout << "a diferenca e o quociente dos dois numeros." << endl;
	cout << "Infome o primeiro numero: " ;
	cin >> a;
	cout << "Infome o segundo numero: " ;
	cin >> b;
	soma = a + b;
	produto = a * b;
	diferenca = a - b;
	quociente = a/b;
	cout << "Soma e igual a: " << setprecision(3) << fixed << soma << endl;
	cout << "Produto e igual a: " << setprecision(3) << fixed << produto << endl;
	cout << "Diferenca e igual a: " << setprecision(3) << fixed << diferenca << endl;
	cout << "Quociente e igual a: " << setprecision(3) << fixed << quociente << endl;
	return 0;							// Retorna 0; Pode ser intepretado com "Ocorreu tudo bem"
}

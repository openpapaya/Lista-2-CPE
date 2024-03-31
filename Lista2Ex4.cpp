/*
Computacao Para a Engenharia - 2024 - Lista 2, Exercicio 4 
Autor: Guilherme Carvalho
Data: 30/03/2024
*/
#include <iostream>
#include <iomanip>
using namespace std;

// Iniccio da função 
int main(){

	int f;
	cout << "Impressao de formas geometricas" << endl;
	cout << "Infome a forma geometrica (1-quadrado, 2-circulo oval, 3-seta, 4-losango): " ;
	cin >> f;
	if(f==1)
	{
	cout << "*********" << endl;
	cout << "*       *" << endl;
	cout << "*       *" << endl;
	cout << "*       *" << endl;
	cout << "*       *" << endl;
	cout << "*       *" << endl;
	cout << "*       *" << endl;
	cout << "*       *" << endl;
	cout << "*********" << endl;
	}
	else if(f==2)
	{
	cout << "   ***   " << endl;
	cout << " *     * " << endl;
	cout << "*       *" << endl;
	cout << "*       *" << endl;
	cout << "*       *" << endl;
	cout << "*       *" << endl;
	cout << "*       *" << endl;
	cout << " *     * " << endl;
	cout << "   ***   " << endl;
	}
	else if(f==3)
	{
	cout << "    *    " << endl;
	cout << "   ***   " << endl;
	cout << "  *****  " << endl;
	cout << "    *    " << endl;
	cout << "    *    " << endl;
	cout << "    *    " << endl;
	cout << "    *    " << endl;
	cout << "    *    " << endl;
	cout << "    *    " << endl;		
	}
	else if(f==4)
	{
	cout << "     *     " << endl;
	cout << "   *   *   " << endl;
	cout << "  *     *  " << endl;
	cout << " *       * " << endl;
	cout << "*         *" << endl;
	cout << " *       * " << endl;
	cout << "  *     *  " << endl;
	cout << "   *   *   " << endl;
	cout << "     *     " << endl;
	}
	return 0;							// Retorna 0; Pode ser intepretado com "Ocorreu tudo bem"
}

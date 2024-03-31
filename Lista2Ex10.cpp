/*
Computacao Para a Engenharia - 2024 - Lista 2, Exercicio 10 
Autor: Guilherme Carvalho - 110119801
Data: 30/03/2024
*/
#include <iostream>
#include <iomanip>
using namespace std;

// Iniccio da função 
int main(){

	char s[6];
	int a;
	int e;
	int i;
	int o;
	int u;
	int n;
	n = 6;
	a = e = i = o = u = 0;
	for(n = 6; n >= 0 ; n--){
		s[n] = '0';
	}
	cout << "Numero de ocorrencias de vogais e criptografia" << endl;
	cout << "Insira uma string com 5 caracteres: ";
	cin.getline(s,6);	// Salva a string em 's', 5 caracteres max.
    cout << "String inserida: " << s << endl;
	for(n = 6; n>=0 ; n--){
		
	if(s[n] == 'a'){
		a++;
		s[n] = 'i';
	}
	else if(s[n] == 'e'){
		e++;
		s[n] = 'o';
	}
	else if(s[n] == 'i'){
		i++;
		s[n] = 'u';
	}
	else if(s[n] == 'o'){
		o++;
	}
	else if(s[n] == 'u'){
		u++;
	}
}
	if(a>0){
		cout << "A vogal 'a' aparece " << a << " vezes." << endl;
	}
	if(e>0){
		cout << "A vogal 'e' aparece " << e << " vezes." << endl;
	}
	if(i>0){
		cout << "A vogal 'i' aparece " << i << " vezes." << endl;
	}
	if(o>0){
		cout << "A vogal 'o' aparece " << o << " vezes." << endl;
	}
	if(u>0){
		cout << "A vogal 'u' aparece " << u << " vezes." << endl;
	}
	cout << "String criptografada: " << s << endl;
	//cout << "O custo medio e R$" << setprecision(2) << fixed << m << endl;
	return 0;							// Retorna 0; Pode ser intepretado com "Ocorreu tudo bem"
}

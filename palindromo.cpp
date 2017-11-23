#include <iostream>
#include <cstdlib>
#include <string.h>

using namespace std;

bool esPalindromo (char palabra[], int i, int f);

int main ()
{
	char palabra[50];
	int tam, f;
	bool palindromo;
	cout<<"Ingresar palabra: ";
	cin.getline(palabra, 50);
	tam=strlen(palabra);
	palindromo=esPalindromo (palabra,0,tam-1);
	if (palindromo==true)
	cout<<"Es palindromo";
	else cout<<"No es palindromo";
	
}

bool esPalindromo (char palabra[], int i, int f)
{
	if (i>=f) return true;
	if (palabra[i]==palabra[f])
		esPalindromo (palabra, i+1, f-1);
		else return false;
}

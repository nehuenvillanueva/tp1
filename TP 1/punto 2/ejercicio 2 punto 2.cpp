//PSEUDOCODIGO: se le pide al usuario ingresar un numero que seria la base de un triangulo
//luego se le pide al usuario otro numero que representaria la altura del triangulo
//con esos valores ahora lo que se hace es calcular el area del triangulo
//multiplicando el valor de altura y base, para luego dividirlo por 2.
//una vez terminada la operacion se muestra el resultado en pantalla
#include <iostream>

using namespace std;

int main()
{	
	int base, altura, area;
	cout<<"ingrese el valor la base del triangulo:";
	cin>>base;
	cout<<"ingrese el valor de la altura del triangulo:";
	cin>>altura;
	area = base * altura / 2;
	cout<<"el area del triangulo es igual a:";
	cout<<area;
    return 0;
}
	

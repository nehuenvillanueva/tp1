//PSEUDOCODIGO: se le pide al usuario ingresar 1 numero que vendria a simbolizar la cara de un cuadrado
//ahora con el numero ingresado se calcula el perimetro de el cuadrado, multiplicando
//el valor del lado por cuadro, terminada la operacion se muestra el resultado en pantalla.
#include <iostream>

using namespace std;

int main()
{	
	int lado, perimetro;
	cout<<"ingrese el valor de la cara del cuadrado:";
	cin>>lado;
	perimetro = lado * 4;
	cout<<"el perimetro del cuadrado es:";
	cout<<"\n";
	cout<<perimetro;
    return 0;
}
	

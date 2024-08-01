//PSEUDOCODIGO: al iniciarse el programa, se le pregunta al usuario que asigne 2 valores numéricos a las variables
//conocidas por C++ como num1 y num2, luego, se define el valor de la variable "suma"
//que vendría a ser el equivalente a la suma de la variable "num1" y "num2". 
//Después, con un proceso similar, se define el valor de la variable "producto"
//siendo la misma el producto entre las 2 variables numéricas antes mencionadas. 
//Una vez definidas ambas variables, se pasa a mostrar los resultados en pantalla, para luego terminar la función del programa.

#include <iostream>

using namespace std;

int main()
{	
	int num1, num2, suma, producto;
	cout<<"ingrese el primer valor:";
	cin>>num1;
	cout<<"ingrese el segundo valor:";
	cin>>num2;
	suma = num1 + num2;
	producto = num1 * num2;
	cout<<"la suma de los dos valores es:";
	cout<<suma;
	cout<<"\n";
	cout<<"el producto de los dos valores es:";
	cout<<producto;
    return 0;
}
	

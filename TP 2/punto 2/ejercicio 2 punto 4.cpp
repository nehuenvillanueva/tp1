//PSEUDOCODIGO:pedirle al usuario que ingrese 3 notas, calcular el promedio y mostrar tea si el numero es mayor o igual a 7, tep si es igual o mayor a 4 y ted si es menor a 4
//el trabajo fue hecho con mi compañero agustin poderoso (mas conocido como el negro)
#include <iostream>

using namespace std;

int main(){	
	float nota3, nota2, nota1, promedio;
	cout<<"ingrese su primera nota:";
	cin>>nota1;
	cout<<"ingrese su segunda nota:";
	cin>>nota2;
	cout<<"ingrese su tercera nota:";
	cin>>nota3;
	
	promedio=(nota1+nota2+nota3)/3;
	
	if(promedio>=7)
	{
	cout<<"TEA";
	}
	if(promedio<7 && promedio>=4)
	{
	cout<<"TEP";
    }
    if(promedio<4)
    {
    cout<<"TED";
	}
return 0;
}

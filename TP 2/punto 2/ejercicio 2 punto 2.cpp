//PSEUDOCODIGO:pedirle al usuario que ingrese 2 numeros, si el primer numero es mayor que el segundo
//se realiza la suma y la resta entre los 2 numeros y se muestran en pantalla, en caso contrario
//se realiza el producto y la divisio entre los 2 numeros y se muestra en pantalla.

#include <iostream>

using namespace std;

int main(){	
	float num1, num2, op1, op2;
	cout<<"ingrese el primer numero:";
	cin>>num1;
	cout<<"ingrese el segundo numero:";
	cin>>num2;
	if(num1>num2){
	  {
	  	op1=num1+num2;
	  	op2=num1-num2;
	  	cout<<"la suma entre los 2 numeros es igual a:"<<op1;
	  	cout<<"\n";
	  	cout<<"la diferencia entre los 2 numeros es igual a:"<<op2;
	  }
    }
	else{
		{
		op1=num1*num2;
		op2=num1/num2;
		cout<<"el producto entre los 2 numeros es igual a:"<<op1;
		cout<<"\n";
		cout<<"la division entre los 2 numeros es igual a:"<<op2;
		}

    }
return 0;
}

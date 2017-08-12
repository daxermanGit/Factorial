#include <iostream>
#include <math.h>
using namespace std;
unsigned long long factorialIterativo(int numero,int &);
unsigned long long factorialRecursivo(int numero,int &);
int main (){
	system("color f0");
	int numero;
	int operaciones=0;
	cout<<"ingrese un numero\n";
	cin>>numero;
	cout<<"por metodo iterativo:\n";
	cout<<"el factorial del numero es: "<<factorialIterativo(numero,operaciones)<<"\n";
	cout<<"se realizaron "<<operaciones<<" multiplicaciones\n";
	operaciones=0;
	cout<<"por metodo recursivo:\n";
	cout<<"el factorial del numero es: "<<factorialRecursivo(numero,operaciones)<<"\n";
	cout<<"se realizaron "<<operaciones<<" multiplicaciones\n";
	system("pause");
	return 0;
}
//----------------------------------------------------
unsigned long long factorialIterativo(int numero,int &operaciones){
	unsigned long long variableFactorial=1;
	for (int k=1;k<=numero;k++){
		variableFactorial*=k;
		operaciones++;
	}
	return variableFactorial;
}
//------------------------------------------------------
unsigned long long factorialRecursivo(int numero,int &operaciones){
	if(numero==0)
		return 1;
	if(numero>0){
		operaciones++;
		return numero*factorialRecursivo(numero-1,operaciones);
	}
}

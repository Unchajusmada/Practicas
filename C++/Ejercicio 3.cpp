#include<iostream>
#include<string>
#include<conio.h>

using namespace std;
int a=1;//Valor inicial
int b=1;//Cantidad a sumar
int suma;

int main(){
	
	cout<<"\t\tSumemos numeros impares! \nValor inicial 0"<<endl;
	cout<<"(Para terminar ingrese 0)"<<endl;
	
	while(b!=0){
		cout<<"\nIngresar un numero impar: "; cin>>b;
		if(b %2!=0){
			suma = suma+b;
			cout<<"\nResultado de la suma: "<<suma<<endl;
		}
		
		else if(b==0){
			cout<<"\n\t\tGracias por su colaboracion.\n\n";
		}
		
		else{
			cout<<"\nPor favor, solo introduce numeros pares.\n";
		}
	}	
	
	
	
	
	
	
	system("pause");
	return 0;
}


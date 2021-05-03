#include<iostream>
#include<stdlib.h>


using namespace std;

int a, b;
bool cantidades = true;

int main(){

	cout<<"\t\tIngresar rango de numeros"<<endl;
	
	cout<<"\n\tPrimer numero (debe ser mayor o igual a 30):"; cin>>a;
	cout<<"\n\tUltimo numero (debe ser mayor a la primera edad y menor a 90):"; cin>>b;
	
	
	if(cantidades = (a>=30 && b<=90 && a<b)){
		cout<<"\nLas edades cumplen los requisitos"<<endl;
		
		while(a<b){
			if(a % 3==0){
				cout<<"\n\tEs multiplo de 3: ";
				a++;
			}
			else{
				cout<<"\nNo es multiplo de 3: ";
				a++;
			}
		cout<<a-1<<endl;
			
		}
		
	} 

	else{
		cout<<"\n\tLas cantidades no cumplieron las condiciones"<<endl;
	}
		

	system("pause");	
	return 0;
}

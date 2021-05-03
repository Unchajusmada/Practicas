#include<iostream>
#include<stdlib.h>


using namespace std;

int a, b;
bool edades = true;

int main(){

	cout<<"\t\tIngresar numeros para determinar pares e impares"<<endl;
	
	cout<<"\n\tPrimera numero (1):"; cin>>a;
	cout<<"\n\tUltimo numero (25):"; cin>>b;
	
	
	if(edades = (a>=1 && b<=25 && a<b)){
		cout<<"\nLas edades cumplen los requisitos"<<endl;
		
		while(a<=b){
			if(a % 2==0){
				cout<<"Es par ";
				a++;
			}
			else{
				cout<<"Es impar ";
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

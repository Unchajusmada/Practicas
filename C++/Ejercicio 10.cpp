#include<iostream>
#include<stdlib.h>
#include<string>

using namespace std;

int a; //cantidad de estudiantes
int cedula1, cedula2, cedula3, cedula4, cedula5, nota1, nota2, nota3, nota4, nota5;
string nombre1, apellido1, nombre2, apellido2, nombre3, apellido3, nombre4, apellido4, nombre5, apellido5;

int main(){
	
	cout<<"\nEstudiantes de programacion: "<<endl;
	
	while(nota1<=01 && nota2<=01 && nota3<=01 && nota4<=01 && nota5<=01){
		
		cout<<"\n\tEstudiante: " <<endl;
		cout<<"\nIngrese nombre: "; cin>>nombre1;
		cout<<"\nIngrese apellido: "; cin>>apellido1;
		cout<<"\nIngrese cedula: "; cin>>cedula1;
		cout<<"\nIngrese nota: "; cin>>nota1;
		 
		cout<<"\n\tEstudiante: " <<endl;
		cout<<"\nIngrese nombre: "; cin>>nombre2;
		cout<<"\nIngrese apellido: "; cin>>apellido2;
		cout<<"\nIngrese cedula: "; cin>>cedula2;
		cout<<"\nIngrese nota: "; cin>>nota2;	
		
		cout<<"\n\tEstudiante: " <<endl;
		cout<<"\nIngrese nombre: "; cin>>nombre3;
		cout<<"\nIngrese apellido: "; cin>>apellido3;
		cout<<"\nIngrese cedula: "; cin>>cedula3;
		cout<<"\nIngrese nota: "; cin>>nota3;

		cout<<"\n\tEstudiante: " <<endl;
		cout<<"\nIngrese nombre: "; cin>>nombre4;
		cout<<"\nIngrese apellido: "; cin>>apellido4;
		cout<<"\nIngrese cedula: "; cin>>cedula4;
		cout<<"\nIngrese nota: "; cin>>nota4;
		
		cout<<"\n\tEstudiante: " <<endl;
		cout<<"\nIngrese nombre: "; cin>>nombre5;
		cout<<"\nIngrese apellido: "; cin>>apellido5;
		cout<<"\nIngrese cedula: "; cin>>cedula5;
		cout<<"\nIngrese nota: "; cin>>nota5;
	}
	
	cout<< fixed;
	
		cout<<"\n\t\tEstudiantes que terminaron el curso: "<<endl;
		cout<<"\tNombre y apellido: "<<nombre1; cout<<apellido1<<endl; 
		cout<<"\tCedula: "<<cedula1<<endl;
		cout<<"\tNota: "<<nota1<<fixed<<endl;
		
		cout<<"\n\t\tEstudiantes que terminaron el curso: "<<endl;
		cout<<"\tNombre y apellido: "<<nombre2; cout<<apellido2<<endl; 
		cout<<"\tCedula: "<<cedula2<<endl;
		cout<<"\tNota: "<<nota2<<fixed<<endl;

		cout<<"\n\t\tEstudiantes que terminaron el curso: "<<endl;
		cout<<"\tNombre y apellido: "<<nombre3; cout<<apellido3<<endl; 
		cout<<"\tCedula: "<<cedula3<<endl;
		cout<<"\tNota: "<<nota3<<fixed<<endl;				
		
		cout<<"\n\t\tEstudiantes que terminaron el curso: "<<endl;
		cout<<"\tNombre y apellido: "<<nombre4; cout<<apellido4<<endl; 
		cout<<"\tCedula: "<<cedula4<<endl;
		cout<<"\tNota: "<<nota4<<fixed<<endl;
	
		cout<<"\n\t\tEstudiantes que terminaron el curso: "<<endl;
		cout<<"\tNombre y apellido: "<<nombre5; cout<<apellido5<<endl; 
		cout<<"\tCedula: "<<cedula5<<endl;
		cout<<"\tNota: "<<nota5<<fixed<<endl;
	
	system("pause");
	return 0;
}

#include<iostream>
#include <conio.h>
#include<vector>

using namespace std;

struct info_academica{
	int num_ficha;
	char nom_curso[40];
	float nota1, nota2, nota3, nota4;
	float prom_alumno;
};

struct info_alumno{
	int doc_alumno;
	char nom_alumno[30];
	char ape_alumno[30];
	int eda_alum;
	struct info_academica aca_alum;
};

//funciones
int validarEdad();
float validarNotas(float nota); //no especifica el rango asi que evaluare de 0-5


int main(){
	int registros;
	float promedioGeneral = 0;
	int notaAlumno;
	float nota1,nota2,nota3,nota4;
	int continuar;
	int contadorAlumnos = 0;
	
	
	do{
		cout << "cuantos registros desea realizar? maximo 20 \n";
		cin >> registros;
		if(registros >20 || registros <= 0){
			cout << "Numero no valido\n";
		}
	}while(registros > 20 || registros <= 0);
	
	struct info_alumno alumno[registros];
	
	for(int i = 0; i < registros; i++){
		system("cls");
		cout << "\n Alumno " << i+1 << endl;
		cout << "Ingrese el documento del alumno: " << endl;
		cin >> alumno[i].doc_alumno;
		cout << "Ingrese el nombre del alumno: " << endl;
		cin >> alumno[i].nom_alumno;
		cout << "Ingrese el apellido del alumno: " << endl;
		cin >> alumno[i].ape_alumno;
		alumno[i].eda_alum = validarEdad();
		cout << "Ingrese el numero de ficha del alumno: " << endl;
		cin >> alumno[i].aca_alum.num_ficha;
		cout << "Ingrese el nombre del curso del alumno: " << endl;
		cin >> alumno[i].aca_alum.nom_curso;
		cout << "Ingrese la primera nota del alumno: " << endl;
		cin >> nota1;
		alumno[i].aca_alum.nota1 = validarNotas(nota1);
		cout << "Ingrese la segunda nota del alumno: " << endl;
		cin >> nota2;
		alumno[i].aca_alum.nota2 = validarNotas(nota2);
		cout << "Ingrese la tercer nota del alumno: " << endl;
		cin >> nota3;
		alumno[i].aca_alum.nota3 = validarNotas(nota3);
		cout << "Ingrese la cuarta nota del alumno: " << endl;
		cin >> nota4;
		alumno[i].aca_alum.nota4 = validarNotas(nota4);
		
		
		alumno[i].aca_alum.prom_alumno = (nota1 + nota2 + nota3 + nota4) / 4;
		promedioGeneral += (nota1 + nota2 + nota3 + nota4) / 4;
		contadorAlumnos++;

		
		if(registros == 1){
			break;
		}
		else{
			
			do{
				cout << "Desea continuar? [1] si    [2]No\n";
				cin >> continuar;
				if(continuar > 2 || continuar < 1){
					cout << "Ingreso no valido\n";
				}
			}while(continuar > 2 || continuar < 1);
			
			system("cls");
			if(continuar == 2){
				cout << "Has elegido terminar los registros " << endl;
				break;
			}
		}
	}
	
	if(contadorAlumnos > 1){
		cout << "\n El promedio general de los alumnos es: " << promedioGeneral / contadorAlumnos << endl;	
	}
	else{
		cout << "\n El promedio del alumno es: " << promedioGeneral << endl;
	}
	
	
	return 0;
}


int validarEdad(){
	int edad;
	do{
		cout << "\n Ingrese la edad del alumno: " << endl;
		cin >> edad;
		if(edad < 0){ //puede tener 0
			cout << "Edad no valida \n";
		}
	}while(edad < 0);
	return edad;
}


float validarNotas(float nota){
	if(nota >= 0 && nota <= 5){
		return nota;
	}
	do{
		if(nota > 5 || nota < 0){
			cout << "Nota no valida, Ingrese la nota nuevamente: \n";
		}
		cin >> nota;
	}while(nota > 5 || nota < 0);
	return nota;
}

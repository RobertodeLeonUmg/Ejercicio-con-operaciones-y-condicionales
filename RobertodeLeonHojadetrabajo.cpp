//Roberto Carlos de León Gramajo. 5090-23-1762.
//Ejercicio #2
#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string.h>

using namespace std;

void Numpar();
void anioBisiesto();
void Numiguales();
void Legal();
void notaSemestre();
int instrucciones();

int main() {
    int seleccion;

    do {//Utilizamos un do while, para que imprima en pantalla el mensaje "salida del programa", así entiende el usuario que ya salido, y no solo lo intulle
        system("cls");
        seleccion = instrucciones();
        switch (seleccion) {
            case 1:
                Numpar();
                break;
            case 2:
                anioBisiesto();
                break;
            case 3:
                Numiguales();
                break;
            case 4:
                Legal();
                break;
            case 5:
                notaSemestre();
                break;
            case 6:
                cout << "Salida del programa." << endl;
                break;
            default:
                cout << "Opcion no encontada. Intenta de nuevo." << endl;
        }

    } while (seleccion != 6);
    return 0;
}

int instrucciones() {
	//Realice un menú independiente al procedimiento base (int main), para que sea tomado como un procedimiento que se retornara siempre y cuando elección o el programa siga corriendo.
    int eleccion;
    cout <<"\t" << "//Hoja de trabajo\\" << endl;
    cout << "Seleccione una opcion para iniciar con el trabajo:" << endl;
    cout << " 1. Numeros Pares" << endl;
    cout << " 2. Ano bisiesto" << endl;
    cout << " 3. Igual entre numeros" << endl;
    cout << " 4. Edad<>" << endl;
    cout << " 5. Aprobado o no aprobado" << endl;
    cout << " 6. Salir del progama" << endl;
    cout << endl;
    cout << "Escoge una opcion: ";
    cin >> eleccion;
    return eleccion;
}

void Numpar() { //establecemos % como la división del número ingresado por 2, dependiendo de su residuo este cumplira con las condiciones de if
	system("cls");
	int num;
    cout <<"\t" << "//Se ingresara un numero, que sera verificado si es o no es par\\";
    cout <<"\n" << "Ingrese un numero: ";
    cin >> num;
    if (num % 2 == 0) {
        cout  << " El numero "<< num <<" es par." << endl;
    } else {
        cout << " El numero "<< num <<" es no par." << endl;
    }
    system("pause");
}

void anioBisiesto() {//volvemos a utilizar una división del lenguaje C, que todo numero ingresado si tiene un residuo 0 se cumplira la candición
    system("cls");
	int bisiesto;
	cout <<"\t" << "//Ingrese un ano para verificar si es bisiesto\\";
	cout <<"\n" << "Ingrese el ano : ";
    cin >> bisiesto;
    if(bisiesto%4==0){
        cout<<"el anio "<<bisiesto<<" es bisiesto"<< endl;
    }
    else{
        cout<<"el anio "<<bisiesto<<" no es bisiesto"<< endl;
    }
    system("pause");
}

void Numiguales(){//comparamos numero, y si cumplen con las condiciones del if, imprimira la respuesta que son iguales, mientras no, no se cumplira la division
	system("cls");
	 float n1, n2;
	cout <<"\t" << "//Comparacion de dos numeros\\";
    cout <<"\n" << "Ingrese el primer numero: ";
    cin >> n1;
    cout <<"\n" << "Ingrese el segundo numero: ";
    cin >> n2;
    if (n1 == n2) {
        cout << "Los numeros son iguales." << endl;
    } else {
        cout << "Los numeros no son iguales." << endl;
    }
	system ("pause");	
}

void Legal(){//utilizamos operadores logicos, donde establecemos que si el númeor ingresado es mayor a 18, se imprimira que si es mayor de edad
	system("cls");
	int edad18;
    cout <<"\t" << "//Eres mayor de edad??\\";
    cout <<"\n" << "Ingrese tu edad: ";
    cin >> edad18;
    if (edad18 >= 18) {
        cout << " Usted es mayor de edad." << endl;
    } else {
        cout << " Usted es menor de edad." << endl;
    }
    system("pause");	
}

void notaSemestre(){
	system("cls");
	int nota;
    cout <<"\t" << "//Pasaras de ano segun tu nota\\";
    cout <<"\n" << "Ingrese la nota del estudiante: ";
    cin >> nota;
    if (nota >= 60) {
        cout << "El estudiante paso el semestre" << endl;
    } else {
        cout << "El estudiante no paso el semestre" << endl;
    }
    system("pause");
}


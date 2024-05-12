#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

void tocarNota(float frecuencia, int duracion, const string& mensaje) {
	Beep(frecuencia, duracion);
	cout << mensaje << endl;
}

int main() {
	string cadena;
	bool continuar = true;
	
	while (continuar) { 
		cout << "Ingrese la cadena que desea reconocer (Escriba 'exit' para terminar): ";
		getline(cin, cadena);
		
	
	string cadenaDeseada = "DGaAGdcAGaAFGD";
	string cadenaDeseada2 = "CGFEDCGFEFD";          
	
	if (cadena == "exit"){
		continuar = false;
	}
	else if (cadena == cadenaDeseada) {
		tocarNota(293.66, 1000, "D - re"); // re-D
		tocarNota(392, 1000, "G - sol"); // sol-GD
		tocarNota(366, 900, "a - la sostenido"); // la#-a
		tocarNota(440, 900, "A - la"); // la-A
		tocarNota(392, 1000, "G - sol"); // sol-G
		tocarNota(587.33, 1000, "d - re mayor"); // re'-d
		tocarNota(523.25, 1000, "C - do"); // do-C
		tocarNota(440, 900, "A - la"); // la-A
		tocarNota(392, 1000, "G - sol"); // sol-G
		tocarNota(366, 900, "a - la sostenido"); // la#-a
		tocarNota(440, 900, "A - la"); // la-A
		tocarNota(349.26, 1000, "F - fa"); // fa-F
		tocarNota(392, 1000, "G - sol"); // sol-G
		tocarNota(293.66, 1000, "D - re"); // re-D
		
		
		cout<<"¡LA CADENA ES ACEPTADA!"<<endl;
	} else if(cadena == cadenaDeseada2) {
		
		tocarNota(523.25, 1000, "C - do"); // do-C
		tocarNota(392, 1000, "G - sol"); // sol-G
		tocarNota(349.26, 600, "F - fa"); // fa-F
		tocarNota(329.63, 600, "E - mi"); // mi-E
		tocarNota(293.66, 600, "D - re"); // re-D
		tocarNota(523.25, 1000, "C - do"); // do-C
		tocarNota(392, 1000, "G - sol"); // sol-G
		tocarNota(349.26, 600, "F - fa"); // fa-F
		tocarNota(329.63, 600, "E - mi"); // mi-E
		tocarNota(349.26, 600, "F - fa"); // fa-F
		tocarNota(293.66, 1500, "D - re"); // re-D
		
		cout<<"¡LA CADENA ES ACEPTADA!"<<endl;
	}
		else {
		cout << "La cadena ingresada no coincide con la cadena deseada. \a\a\a\a\a\a" << endl;
		
	}}
	
	return 0;
	}



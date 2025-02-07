#include<iostream>;
#include <string>;

using namespace std;

int main()
{
	string adjetivo_f1;
	string adjetivo_m1;
	string nombre_m1;
	string nombre_f1;
	string verbo_s1;



	cout << "escribe un adejtivo femenino" << endl;
	getline(cin, adjetivo_f1);/////
	cout << "ecsribe un adjetivo masculino" << endl;
	getline(cin, adjetivo_m1);///////
	cout << "escribe un nombre masculino" << endl;
	getline(cin, nombre_m1);//////
	cout << "escribe un nombre femenino" << endl;
	getline(cin, nombre_f1);//////
	cout << "escribe un verbo singular" << endl;
	getline(cin, verbo_s1);///////
	



	cout << "Erase una ves una " << adjetivo_f1 <<" mujer llamada "<<nombre_f1<<
		" que deseaba estar con un programador muy guapo porque ganada millones anuales." << endl;
	cout << "Pero el programador " << nombre_m1 << " no la deseaba realmente" << endl;
	cout << "el solo queria " << verbo_s1 << " por las noches" << endl;
	cout << "Entonces " << nombre_f1 << " no tuvo otra opccion mas que " << adjetivo_m1 << " con el" << endl;

	return 0;
}
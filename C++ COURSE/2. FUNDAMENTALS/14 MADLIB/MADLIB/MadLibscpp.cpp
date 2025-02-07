#include <iostream>;
#include<string>;

using namespace std;

int main()
{
	string adjective1, adjective2, adjective3;
	string girlsName;
	string occupation1, occupation2;
	string placeName;
	string clothing;
	string hobby;
	string boysName;
	string mansName;


	
	
	
		cout << "put an adjective" << endl;
			getline(cin, adjective1);
			cout << "put a second adjective" << endl;
			getline(cin, adjective2);
			cout << "put a third adjective" << endl;
			getline(cin, adjective3);
			cout << "put a girl's name" << endl;
			getline(cin, girlsName);
			cout << "put an occupation" << endl;
			getline(cin, occupation1);
			cout << "put a second occupation" << endl;
			getline(cin, occupation2);
			cout << "put a place's name" << endl; 
			getline(cin, placeName);
			cout << "put a name of some clothing " << endl;
			getline(cin,clothing);
			cout << "put a hobby" << endl;
			getline(cin, hobby);      
			cout << "put a boy's name" << endl;
			getline(cin, boysName);
			cout << "put a man's name" << endl;
			getline(cin, mansName);


		cout << "there once was a " << adjective1 << " girl named " << girlsName << endl;
		cout << "who was a " << adjective2<<"\n" << occupation1 << " in the kindom of" << endl;
		cout << placeName << "." << " She loved to wear " << clothing << " and" << hobby <<"."<< endl;
		cout << "She wanted to marry the " << adjective3<<"\n" << occupation2 << " named" << endl;
		cout << boysName << " but her father, King " << mansName << " forbid her from seeing him." << endl;
	
	
	
	
	
		/*
		
		       cout << "pon un adjetivo (femenino)" << endl;
			getline(cin, adjective1);
			cout << "pon un segundo adjetivo (femenino)" << endl;
			getline(cin, adjective2);
			cout << "pon un tercer adjetivo (masculino)" << endl;
			getline(cin, adjective3);
			cout << "escribe el nombre de una infante" << endl;
			getline(cin, girlsName);
			cout << "pon una profesion (femenino)" << endl;
			getline(cin, occupation1);
			cout << "pon una segunda profesion " << endl;
			getline(cin, occupation2);
			cout << "escribe el nombre de un lugar" << endl; 
			getline(cin, placeName);
			cout << "pon el nombre de una prenda  " << endl;
			getline(cin,clothing);
			cout << "pon un  hobby" << endl;
			getline(cin, hobby);      
			cout << "escribe el nombre de un infante" << endl;
			getline(cin, boysName);
			cout << "escribe el nombre de un hombre" << endl;
			getline(cin, mansName);


			cout << "habia una vez una nina "<<adjective1<<" llamada " << girlsName << endl;
			cout << "quien era una " << adjective2<<"\n" << occupation1 << " en el reino de(del) " << endl;
			cout << placeName << "." << "Le gustaba vestir  " << clothing << " y " << hobby <<"."<< endl;
 			cout << "Ella deseaba casarse con el  " << adjective3<<"\n" << occupation2 << " llamado" << endl;
			cout << boysName << " pero su padre, el Rey " << mansName << " le prohibia verlo." << endl;
		
		
		*/
	return 0;
}
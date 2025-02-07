#include<iostream>;
#include<string>;


using namespace std;
/*
   REPETITION CONTROL STATEMENTS

   * DO LOOP
   * DO-WHILE LOOP
   * FOR LOOP
*/

int main()
{
	// WILE LOOP
	
	string password = "Aa3137915@";
	string email = "vamprock19@gmail.com";
	int count1 = 0;

	while (count1 == 3)
	{
		cout << "[E-mail]" << endl;
		getline(cin, email);
		count1++;
	
		if (email == "vamprock19@gmail.com")
		{
			cout << "[password]" << endl;
			getline(cin, password);
			count1++;
			if (password == "Aa3137915@")
			{
				cout << "WELCOME" << endl;
				count1++;
			}
			else
			{
				cout << "wrong password, try again" << endl;
			}
			
		}
		else
		{
			cout << "wrong email, try again " << endl;
		}
		
	}

	//DO-WHILE LOOP

	string mail = "vamprock19@gmail.com";
	string passw = "1234";
	string name = "angel jacinto";
	int count2 = 0;

	
	
	do
	{
		cout << "welcome! Please sign in" << endl;
		cout << "NAME" << endl;
		getline(cin, name);
		
		if (name == "angel jacinto")
		{
			
			cout << "EMAIL" << endl;
				getline(cin, mail);
				
				if (mail == "vamprock19@gmail.com")
				{
					
					cout << "PASSWORD" << endl;
					getline(cin, passw);
					
					if (passw == "1234")
					{
						cout << "WELCOME" << endl;
						
					}
					else
					{
						cout << "wrong password" << endl;
						count2 = count2 + 1;
					}
				}
				else
				{
					cout << "wrong email" << endl;
					count2 = count2 + 1;
				}
				
		}
		else
		{
			cout << "wrong name" << endl; \
				count2 = count2 + 1;
		}

	} while (count2 <= 4);


	string usuario = "angel";
	string contra = "contra123";
		int cont = 0;

		do
		{
			cout << "ingresa tu usuario" << endl;
			cin >> usuario;
			cont = cont + 1;
			cont;
			if (usuario == "angel")
			{
				cout << "contra" << endl;
				cin >> contra;
				cont = cont + 1;
				cont;
				if (contra == "contra123")
				{
					cout << "BIENVENIDO" << endl;
					cont = cont + 1;
					cont;
					
				}
				else
				{
					cout << "contra incorrecto" << endl;
					cont = cont + 1;
				}
			}
			else
			{
				cout << "usuario incorrecto" << endl;
				cont = cont + 1;
			}


		} while (cont <= 3);

        
		for (int i = 0; i <= 4; i++)
		{
			cout << i << endl; 
			
		}
			return 0;
}
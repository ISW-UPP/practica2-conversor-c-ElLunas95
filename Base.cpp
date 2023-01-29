//Finalizado el 29 de enero de 2023.  01:11:12 
// ChristianZC

#include <iostream>
#include <locale.h>
#include <math.h>
#include <conio.h>

using namespace std;

int dedxd(int off1);
string title(string title2, int opselect);

int main()
{
	//Para acentos y la ñ.
	int programcum = 1, errselect = 0;
	setlocale(LC_CTYPE, "Spanish");
	
	while (programcum == 1)
	{
		//Inicia Programa...
		int op1, off2;
		string title2;
		system("cls");
		cout << "Práctica II: Conversor:\n";

		if (errselect == 1)
		{
			cout << "Selección no válida, reintente. \n";
		}

		errselect = 0;
		cout << "Opciones:\n1. Moneda, 2. Distancias, 3. Peso, 4. Salir\n";
		cout << "";
		cout << "Escribe la opción a realizar: ";
		cin >> op1;

		//Menú principal
		switch (op1)
		{

			//Moneda
		case 1:
		{
			system("cls");
			cout << title(title2, op1);

			//Inicia "Moneda"
			int opmoneda;
			float mxn;
			cout << "Cantidad a convertir (MXN):\n";
			cin >> mxn;
			cout << "\nConversión a...\n";
			cout << "1. Dólar estadounidense, 2. Euros, 3. Bolívar venezolano, 4. Rublo, 5. Libra\n\nOpción: ";
			cin >> opmoneda;

				switch (opmoneda)
				{
				case 1:
				{
					system("cls");
					cout << title(title2, op1);
					cout << "\nConversión: ";
					mxn = mxn / 18.78;
					cout << "$ " << mxn;
					cout << "\n";
					break;
				}
				case 2:
				{
					system("cls");
					cout << title(title2, op1);
					cout << "\nConversión: ";
					mxn = mxn / 20.40;
					cout << "$ " << mxn;
					cout << "\n";
					break;
				}
				case 3:
				{
					system("cls");
					cout << title(title2, op1);
					cout << "\nConversión: ";
					mxn = mxn / 0.87;
					cout << "$ " << mxn;
					cout << "\n";
					break;
				}
				case 4:
				{
					system("cls");
					cout << title(title2, op1);
					cout << "\nConversión: ";
					mxn = mxn / 0.27;
					cout << "$ " << mxn;
					cout << "\n";
					break;
				}
				defualt:
				{
					cout << "\nEntrada no válida, reintente...";
					break;
				}
				}

			


			//Finaliza programa
				cout << "\n¿Finalizar programa?\n\n0. Sí, 1. No.\n";
				cin >> programcum;
			dedxd(programcum);
			break;
		}

		//Distancia
		case 2:
		{
			system("cls");
			cout << title(title2, op1);

			//Inicia "Distancias"
			float distan; int optiondistan;
			cout << "Escribe la distancia (Kms.):\n";
			cin >> distan;
			cout << "\nConversión a...\n";
			cout << "1. Pulgadas, 2. Pies, 3. Centímetro, 4. Nanómetro, 5. Años Luz (Ly)\n\nOpción: ";
			cin >> optiondistan;

			switch (optiondistan)
			{
			case 1:
			{
				system("cls");
				cout << title(title2, op1);
				cout << "\nConversión: ";
				distan = distan * 39370.1;
				cout << "Pulgadas: " << distan;
				cout << "\n";
				break;
			}
			case 2:
			{
				system("cls");
				cout << title(title2, op1);
				cout << "\nConversión: ";
				distan = distan * 3280.84;
				cout << "Pies: " << distan;
				cout << "\n";
				break;
				
			}
			case 3:
			{
				system("cls");
				cout << title(title2, op1);
				cout << "\nConversión: ";
				distan = distan * 100000;
				cout << "Centímetro: " << distan;
				cout << "\n";
				break;
			}
			case 4:
			{
				system("cls");
				cout << title(title2, op1);
				cout << "\nConversión: ";
				distan = distan * 1e+12;
				cout << "Nanómetros: " << distan;
				cout << "\n";
				break;
			}
			case 5:
			{
				system("cls");
				cout << title(title2, op1);
				cout << "\nConversión: ";
				distan = distan * 1.056970721911E-13;
				cout << "Años Luz: " << distan;
				cout << "\n";
				break;
			}
			default:
			{
				cout << "\nEntrada no válida, reintente...";
				break;
			}
			}

			//Finaliza programa
			cout << "\n¿Finalizar programa?\n\n0. Sí, 1. No.\n";
			cin >> programcum;
			dedxd(programcum);
			break;
		}

		//Peso
		case 3:
		{
			system("cls");
			cout << title(title2, op1);

			//Inicia "Peso"
			int oppeso; float peso_;
			cout << "Escribe la distancia (Kms.):\n";
			cin >> peso_;
			cout << "\nConversión a...\n";
			cout << "1. Toneladas, 2. Onzas, 3. Libra, 4. Microgramo (µg), 5. Teragramo\n\nOpción: ";
			cin >> oppeso;

			switch (oppeso)
			{
			case 1:
			{
				system("cls");
				cout << title(title2, op1);
				cout << "\nConversión: ";
				peso_ = peso_ / 1000;
				cout << "Toneladas: " << peso_;
				cout << "\n";
				break;
			}
			case 2:
			{
				system("cls");
				cout << title(title2, op1);
				cout << "\nConversión: ";
				peso_ = peso_ * 35.274;
				cout << "Onzas: " << peso_;
				cout << "\n";
				break;
			}
			case 3:
			{
				system("cls");
				cout << title(title2, op1);
				cout << "\nConversión: ";
				peso_ = peso_ * 2.204625002841;
				cout << "Libra: " << peso_;
				cout << "\n";
				break;
			}
			case 4:
			{
				system("cls");
				cout << title(title2, op1);
				cout << "\nConversión: ";
				peso_ = peso_ * 1e+9;
				cout << "Microgramo: " << peso_;
				cout << "\n";
				break;
			}
			case 5:
			{
				system("cls");
				cout << title(title2, op1);
				cout << "\nConversión: ";
				peso_ = peso_ * 1e-9;
				cout << "Teragramo: " << peso_;
				cout << "\n";
				break;
			}
			default:
			{
				cout << "\nEntrada no válida, reintente...";
				break;
			}
			}


			//Finaliza programa
			cout << "\n¿Finalizar programa?\n0. Sí, 1. No.\n";
			cin >> programcum;
			dedxd(programcum);
			break;
		}

		case 4:
			{

			//Finaliza programa
			cout << "\n¿Finalizar programa?\n0. Sí, 1. No.\n";
			cin >> programcum;
			dedxd(programcum);
			break;
			}

		default:
		{
			//Muestra error.
			if (errselect == 0)
			{
				errselect = 1;
			}
			break;
		}
		}
	}
		
	return 0;
}

//Función de finalizar
int dedxd(int off1)
{
	int off;
	if (off1 == 0)
	{
		off = 0;
	}
	else
	{
		off = 1;
	}
	return off;
}

string title(string title2, int opselect)
{
	int option = opselect;
	string selectoption;

	switch (option)
	{
	case 1:
	{
		selectoption = "Moneda";
		break;
	}
	case 2:
	{
		selectoption = "Distancia";
		break;
	}
	case 3:
	{
		selectoption = "Peso";
		break;
	}
	}

	string titulo = "Práctica II: Conversor:\nSelección hecha: " + selectoption + "\n";
	return titulo;
}
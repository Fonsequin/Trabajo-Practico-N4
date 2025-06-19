#include <iostream> // Solicitar biblioteca
using namespace std;

int main()
{
	float saldo = 1000; // Variable del saldo
	int opcion; // Variable de la opcion elegida
	float dinero_ingresado; // Variable del dinero ingresado
	float cantidad_a_retirar; // Variable de la cantidad a retirar
	cout << "Cajero automatico"; // Presentacion
	cout << endl; // Separacion
	cout << "1- Consultar saldo" << endl; // Opcion 1
	cout << "2- Depositar dinero" << endl; // Opcion 2
	cout << "3- Retirar dinero" << endl; // Opcion 3
	cout << "4- Salir" << endl; // Opcion 4
	cout << "Opcion elegida: "; // Muestra de la opcion elegida
	cin >> opcion; // Dato guardado de la opcion elegida
	int salir = 1; // Variable para ver si el usuario quiso usar la opcion 4
	while(salir = 1) // Mientras el usuario no quiera salir 
	{
		switch(opcion)
		{
			case 1: // Caso 1
				cout << endl; // Separacion
				cout << "Tu cantidad de saldo total es de: " << saldo; // Saldo expresado en pantalla
				cout << endl  << endl;; // Separacion
				cout << "Que opcion quieres realizar ahora? "; // Pedirle al usuario que elija otra opcion
				cout << endl; // Separacion
				cout << "1- Consultar saldo" << endl; // Opcion 1
				cout << "2- Depositar dinero" << endl; // Opcion 2
				cout << "3- Retirar dinero" << endl; // Opcion 3
				cout << "4- Salir" << endl; // Opcion 4
				cout << "Opcion elegida: "; // Opcion elegida mostrada en pantalla
				cin >> opcion; // Dato guardado de la opcion en variable
				break; // Fin del caso 1
				
			case 2:
				cout << endl;
				cout << "Saldo a depositar: ";
				cin >> dinero_ingresado;
				cout << endl;
				saldo = saldo + dinero_ingresado;
				cout << "Su nuevo saldo es de: " << saldo << endl << endl;
				cout << "Que opcion quieres realizar ahora? ";
				cout << endl;
				cout << "1- Consultar saldo" << endl;
				cout << "2- Depositar dinero" << endl;
				cout << "3- Retirar dinero" << endl;
				cout << "4- Salir" << endl;
				cout << "Opcion elegida: ";
				cin >> opcion;
				break;
				
			case 3:
				cout << endl;
				cout << "Saldo a retirar: ";
				cin >> cantidad_a_retirar;
				cout << endl;
				if(saldo < cantidad_a_retirar)
				{
					cout << "No tienes saldo suficiente, tu saldo es de: " << saldo << endl;
				}
				else if(saldo > cantidad_a_retirar)
				{
					saldo = saldo - cantidad_a_retirar;
					cout << "Se ha retirado " << cantidad_a_retirar << " exitosamente" << endl;
					cout << "Su nuevo saldo es de: " << saldo << endl << endl;;
				}
				cout << "Que opcion quieres realizar ahora? ";
				cout << endl;
				cout << "1- Consultar saldo" << endl;
				cout << "2- Depositar dinero" << endl;
				cout << "3- Retirar dinero" << endl;
				cout << "4- Salir" << endl;
				cout << "Opcion elegida: ";
				cin >> opcion;
				break;
			
			case 4:
				cout << endl;
				cout << "Has salido exitosamente";
				salir = 0;
				return 0;
				break;
			
			default:
				cout << endl;
				cout << "Porfavor ingrese uno de las 4 posibilidades" << endl;
				cout << "1- Consultar saldo" << endl;
				cout << "2- Depositar dinero" << endl;
				cout << "3- Retirar dinero" << endl;
				cout << "4- Salir" << endl;
				cout << "Opcion elegida: ";
				cin >> opcion;
				break;
		}
	}
	return 0;
}

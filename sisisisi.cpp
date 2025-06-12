#include <iostream> // Solicitar biblioteca
using namespace std;

int main()
{
	float saldo = 1000;
	float salir = 1;
	float opcion;
	float dinero_ingresado;
	float cantidad_a_retirar;
	cout << "Cajero automatico";
	cout << endl;
	cout << "Porfavor ingrese la opcion que necesite:" << endl;
	cout << "1- Consultar saldo" << endl;
	cout << "2- Depositar dinero" << endl;
	cout << "3- Retirar dinero" << endl;
	cout << "4- Salir" << endl;
	cout << endl;
	cin >> opcion;
	while(salir = 1)
	{
		switch(opcion)
		{
			case 1:
			cout << endl;
			cout << "Su cantidad total de saldo es de: " << saldo << endl;
			cout << endl;
		
			case 2:
			cout << "Ingrese la cantidad de dinero que quiere ingresar: " << dinero_ingresado << endl;
			saldo = saldo + dinero_ingresado;
			cout << "Su nuevo saldo es de: " << saldo;
		
			case 3:
			cout << "Cuanta cantidad quiere retirar?" << endl;
			cin >> cantidad_a_retirar;
			if(cantidad_a_retirar < saldo)
			{
				saldo = saldo - cantidad_a_retirar;
				cout << "Se ha retirado: " << cantidad_a_retirar << " exitosamente";
				cout << "Su nuevo saldo es de: " << saldo << endl;
			}
			else if(cantidad_a_retirar > saldo)
			{
				cout << "Saldo insuficiente, su saldo es de " << saldo << " y usted quiere retirar " << cantidad_a_retirar;
			}
		}
	}
}


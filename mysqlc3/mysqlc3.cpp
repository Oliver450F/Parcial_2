

#include"Productos.h"
#include <iostream>
using namespace std;

int main()

{
	int opcion;
	cout << "--------------ingrese la opcion que desee: ----------------" << endl;
	cout << " 1. crear....." << endl;
	cout << " 2. leer....." << endl;
	cout << " 3. modificar..." << endl;
	cout << " 4. eliminar..." << endl;
	cin >> opcion;
	switch (opcion) {


	case 1: {
		string producto, id_Marca, Descripcion, precio_costo, Precio_venta, fecha_ingreso;
		int existencia;
		cout << " ingrese producto: ";
		getline(cin, producto);
		cout << " ingree id_Marca : ";
		getline(cin, id_Marca);
		cout << " ingree Descripcion : ";
		getline(cin, Descripcion);
		cout << " ingree precio_costo : ";
		getline(cin, precio_costo);
		cout << " ingree precio_venta : ";
		getline(cin, Precio_venta);
		cout << " ingresee existencia: ";
		cin >> existencia;
		cin.ignore();
		cout << " ingree fecha ingreso : ";
		cin >> fecha_ingreso;


		Productos c = Productos(producto, id_Marca, Descripcion, precio_costo, Precio_venta, existencia, fecha_ingreso);

		c.crear();
	}


	case 2: {

		Productos c = Productos();
		c.leer();
	}
	case 3: {

		string id_Productos, producto, id_Marca, Descripcion, precio_costo, Precio_venta, fecha_ingreso;
		int existencia;
		cout << " ingresa el producto a modificar :";
		cin >> id_Productos;
		cout << " ingrese producto: ";
		getline(cin, producto);
		cout << " ingree id_Marca : ";
		getline(cin, id_Marca);
		cout << " ingree Descripcion : ";
		getline(cin, Descripcion);
		cout << " ingree precio_costo : ";
		getline(cin, precio_costo);
		cout << " ingree precio_venta : ";
		getline(cin, Precio_venta);
		cout << " ingresee existencia: ";
		cin >> existencia;
		cin.ignore();
		cout << " ingree fecha ingreso : ";
		cin >> fecha_ingreso;


		Productos c = Productos(producto, id_Marca, Descripcion, precio_costo, Precio_venta, existencia, fecha_ingreso);

		c.modificar();


	}
	
	case 4: {

		Productos c = Productos();
		c.eliminar();
	}
	
	
	}
	system("pause");

	return 0;
}

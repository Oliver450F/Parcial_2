#pragma once
#include "Producto.h"
#include<mysql.h>
#include <iostream>
#include"conexiondb.h"
#include<string>
using namespace std;
class Productos :  Producto{
	// atributos
private: string nit;
	   // metodo constructor
public:
	Productos() {
	}

	Productos(string pro, string idm, string desc, string pc, string pv, int exis, string fn) : Producto(pro, idm, desc,pc,pv,exis,fn ) {
		
	}
	// metodos de modificar datos
	// set ( modificar)

	void setproducto(string pro) { producto = pro; }
	void setid_marca(string idm) { id_Marca = idm; }
	void setDescripcion(string desc) { Descripcion = desc; }
	void setprecio_costo(string pc) { precio_costo = pc; }
	void setPrecio_venta(string pv) { Precio_venta = pv; }
	void setexistencia(int exis) { existencia = exis; }
	void setfecha_ingreso(string fn) { fecha_ingreso = fn; }
	// get(mostrar)
	string getproducto() { return producto; }
	string getid_Marca() { return id_Marca; }
	string getDescripcion() { return Descripcion; }
	string getprecio_costo() { return precio_costo; }
	string getPrecio_venta() { return Precio_venta; }
	int getexistencia() { return existencia; }
	string getfecha_ingreso() { return fecha_ingreso; }
	void crear() {
		int q_estado;
		conexiondb cn = conexiondb();
		cn.abrir_concexion();
		if (cn.getconectar()) {
			string T = to_string(existencia);
			string insert = " insert into Productos(producto,id_Marca,Descripcion,precio_costo,Precio_venta,existencia, fecha_ingreso)values('" + producto + "',  '" + id_Marca + "','" + Descripcion + "', '" + precio_costo + "','" + Precio_venta + "', '" + T + "' '" + fecha_ingreso + "')";
			const char* i = insert.c_str();
			q_estado = mysql_query(cn.getconectar(), i);
			if (!q_estado) {
				cout << "ingreso Exitoso..." << endl;

			}
			else {

				cout << "xxxxx error de  ingreso xxxx" << endl;
			}





		}
		else {

			cout << " xxxxx error en la concexion xxxxx";
		}

		cn.cerrar_conexion();

	}

	void leer() {
		
		int q_estado;
		conexiondb cn = conexiondb();
		MYSQL_ROW fila;
		MYSQL_RES* resultado;
		cn.abrir_concexion();
		if (cn.getconectar()) {

			string consulta = " select * from Productos";
			const char* c = consulta.c_str();
			q_estado = mysql_query(cn.getconectar(), c);
			if (!q_estado) {
				resultado = mysql_store_result(cn.getconectar());
				cout << "----------------------------Productos------------------------" << endl;
				while (fila = mysql_fetch_row(resultado)) {
					cout << fila[0] << "  ,  " << fila[1] << "  ,  " << fila[2] << "  ,  " << fila[3] << "  ,  " << fila[4] << "  ,  " << fila[5] << "  ,  " << fila[6] << "  ,  " << fila[7] << endl;
				}

			}
			else {

				cout << "xxxxx error de  consulta xxxx" << endl;
			}



		}
		else {

			cout << " xxxxx error en la concexion xxxxx";
		}

		cn.cerrar_conexion();


	}

	void modificar() {

		int q_estado;
		conexiondb cn = conexiondb();
		cn.abrir_concexion();
		if (cn.getconectar()) {
			string id_Productos;
			cout << " ingrese producto a modificar :";
			cin >> id_Productos;
			string T = to_string(existencia);
			string update = " UPDATE Productos   SET producto='" + producto + "', id_Marca='" + id_Marca + "', Descripcion='" + Descripcion + "', precio_costo='" + precio_costo + "', Precio_venta='" + Precio_venta + "', existencia='" + T + "', fecha_ingreso= '" + fecha_ingreso + "' WHERE id_Productos= '" + id_Productos + "'";
			const char* o = update.c_str();
			q_estado = mysql_query(cn.getconectar(), o);
			if (!q_estado) {
				cout << " modificacion Exitosa..." << endl;

			}
			else {

				cout << "xxxxx error de  modificacion xxxx" << endl;
			}





		}
		else {

			cout << " xxxxx error en la concexion xxxxx";
		}

		cn.cerrar_conexion();



	}
	void eliminar() {

		int q_estado;
		conexiondb cn = conexiondb();
		cn.abrir_concexion();
		if (cn.getconectar()) {
			string id_Productos;
			cout << " ingrese producto a eliminar :";
			cin >> id_Productos;
			string sel = " DELETE FROM Productos   WHERE id_Productos= '" + id_Productos + "'";
			const char* u = sel.c_str();
			q_estado = mysql_query(cn.getconectar(), u);
			if (!q_estado) {
				cout << " eliminacion exitosa ..." << endl;

			}
			else {

				cout << "xxxxx error al eliminar xxxx" << endl;
			}





		}
		else {

			cout << " xxxxx error en la concexion xxxxx";
		}

		cn.cerrar_conexion();



	}






	};


	

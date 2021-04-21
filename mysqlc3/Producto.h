#pragma once
#include<iostream>
using namespace std;
class Producto{
	// atributos
protected: string producto,id_Marca,Descripcion,precio_costo,Precio_venta, fecha_ingreso;
		 int existencia = 0;
		 // constructor
protected:
	Producto() {
	}
	Producto(string pro, string idm, string desc,string pc,string pv, int exis, string fn) {
		producto = pro;
		id_Marca= idm;
		Descripcion= desc;
		precio_costo = pc;
		Precio_venta = pv;
		existencia =exis ;
		fecha_ingreso = fn;


	}


};


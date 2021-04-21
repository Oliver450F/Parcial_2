#pragma once
#include<mysql.h>
#include <iostream>
using namespace std;
class conexiondb{

private: MYSQL* conectar;
public:
	void abrir_concexion() {

		conectar = mysql_init(0);

		conectar = mysql_real_connect(conectar, "localhost", "usp_parcial", "parcial123$", "db_parcial", 3306, NULL, 0);


	}
	void cerrar_conexion() {
		mysql_close(conectar);
	}
	MYSQL* getconectar() {

		return conectar;
	}
};



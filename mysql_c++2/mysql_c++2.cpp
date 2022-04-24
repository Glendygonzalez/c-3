// mysql_c++2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <mysql.h>
using namespace std;
int q_estado;
int main()
{
    MYSQL* conectar;
    conectar = mysql_init(0);
    conectar = mysql_real_connect(conectar, "127.0.0.1", "root", "1234", "db_proveedor", 3306, NULL, 0);
    if (conectar) {
        cout << "Conexion Exitosa" << endl;
        string proveedor;
        cout << "Ingrese el proveedor:" << endl;
        cin >> proveedor;
        string insert = "insert into Proveedores(proveedor) values('" + proveedor + "')"; 
        const char* i = insert.c_str();
        q_estado = mysql_query(conectar, i);
        if (!q_estado) {
            cout << "ingreso exitoso" << endl;
        }
        else {
            cout << "error al ingresar" << endl;
        }
    }
    else {
        cout << "Error en la conexion" << endl;
    }
    system("pause");
    return 0;

}



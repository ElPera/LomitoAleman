#include <stdio.h>

#define MAXPROD 999;
#define MAXPROMO 50;

struct LomitoAleman{

	char *dueño;
	struct Sucursal *sucursales;

}

struct Sucursal{

	char *direccion;
	char *administrador;
	char *rutAdministrador;
	struct Promocion *promociones[MAXPROMO]
	struct NodoVentas *ventas;
	struct Producto *productos [MAXPROD];

}

struct Promocion{

	struct producto **consumo;
	struct producto **liquido;
	int codigo;
	int precio;

}

struct NodoVentas{

	struct Venta *datos;
	struct NodoVentas *sig,*ant;

}
struct Producto{

	int codigo;
	char *nombre;
	int precio; //pesos Chilenos

}

struct Venta{

	int dia;
	int mes;
	int ano;
	struct NodoBoletas *head;
	struct NodoBoletas *tail;

}

struct NodoBoleta{

	char *numeroBoleta;
	struct Producto **productos;
	struct NodoBoleta *sig;

}

main(){

	

}

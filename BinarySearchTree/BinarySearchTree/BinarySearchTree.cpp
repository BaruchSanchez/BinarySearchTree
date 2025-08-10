#include "BinarySearchTree.h"

double log_base_n(double x, double base)
{
	return std::log(x) / std::log(base);
}

int MinimaAlturaDeArbol(int numeroDeNodos, int maximoDeHijosPorNodo)
{
	int maximoDeHijosMenos1PorNumeroDeNodosMasUno = ((maximoDeHijosPorNodo - 1) * numeroDeNodos + 1);
	int altura = ceil(log_base_n(maximoDeHijosMenos1PorNumeroDeNodosMasUno, maximoDeHijosPorNodo)) - 1;
	return altura;
}

int main()
{
	BinarySearchTree<int> arbol;

	// Prueba punto 1: Add corregido
	arbol.Add(10);
	arbol.Add(5);
	arbol.Add(15);
	arbol.Add(10);

	// Prueba punto 2: Search iterativo
	bool encontrado5 = arbol.Search(5);
	bool encontrado7 = arbol.Search(7);
	cout << "Buscar 5: " << (encontrado5 ? "Encontrado" : "No encontrado") << endl;
	cout << "Buscar 7: " << (encontrado7 ? "Encontrado" : "No encontrado") << endl;

	// Prueba punto 3: Eliminar nodo recursivo
	// arbol.PuntoTresEliminarNodo(arbol.root); // lo dejo en un comentario por que sino me borraba todo esto si ya no lo probe xd

	// Prueba punto 4: Recorrido post-order iterativo
	arbol.PostOrderIterative();

	return 0;
}

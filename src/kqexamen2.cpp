#include <iostream>
#include <fstream>
#include <cstdlib>
#include  "../lib/kqlibrery.h"
//@Nombre:Kevin Asdrubal Quishpe Yanchaliquin.
//@Fecha:6 de marzo del 2022.
//@Details: Examen 2 de programación.
string kqCedula= "1503867723";
string kqCorreo= "kevin.quishpe04@epn.edu.ec";
string kqNombreCompleto="Kevin Asdrubal Quishpe Yanchaliquin ";
using namespace std;

int main()
{
   ABB arbol = NULL;   // creado Arbol

   int n;  // numero de nodos del arbol
   int x; // elemento a insertar en cada nodo
   
   cout<<"Helow world"<<endl;
   leerArchivo("include\\ciudades.txt");
   

    cout << "\n\t\t  ..[ ARBOL BINARIO DE BUSQUEDA ]..  \n\n";

    cout << " Numero de nodos del arbol:  ";
    cin >> n;
    cout << endl;

    for(int i=0; i<n; i++)
    {
        cout << " Numero del nodo " << i+1 << ": ";
        cin >> x;
        insertar( arbol, x);
    }

    cout << "\n Mostrando ABB \n\n";  verArbol( arbol, 0);
    cout << "\n Recorridos del ABB";
    cout << "\n\n En orden   :  ";   enOrden(arbol);
    cout << "\n\n Pre Orden  :  ";   preOrden(arbol);
    cout << "\n\n Post Orden :  ";   postOrden(arbol);
    cout << endl << endl;
    return 0;

}

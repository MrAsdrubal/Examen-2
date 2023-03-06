#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <sstream>
#include <fstream>
#include <cstdlib>

using namespace std;

struct nodo{                 // La estructura posee dos datos: un entero y dos punteros a nodos.

  int nro;                     // valor que poseera cada estructura nodo.
  struct nodo *izq, *der;       // punteros que apuntan a structuras tipos nodos, se defines dos punteros, uno a derecha y otro a izquierda
};
typedef struct nodo *ABB;
/* es un puntero de tipo nodo que hemos llamado ABB, que ulitizaremos
   para mayor facilidad de creacion de variables */

ABB crearNodo(int x)
{
     ABB nuevoNodo = new(struct nodo);
     nuevoNodo->nro = x;
     nuevoNodo->izq = NULL;
     nuevoNodo->der = NULL;

     return nuevoNodo;
}
void insertar(ABB &arbol, int x)
{
     if(arbol==NULL)
     {
           arbol = crearNodo(x);
     }
     else if(x < arbol->nro)
          insertar(arbol->izq, x);
     else if(x > arbol->nro)
          insertar(arbol->der, x);
}

void preOrden(ABB arbol)
{
     if(arbol!=NULL)
     {
          cout << arbol->nro <<" ";
          preOrden(arbol->izq);
          preOrden(arbol->der);
     }
}

void enOrden(ABB arbol)
{
     if(arbol!=NULL)
     {
          enOrden(arbol->izq);
          cout << arbol->nro << " ";
          enOrden(arbol->der);
     }
}

void postOrden(ABB arbol)
{
     if(arbol!=NULL)
     {
          postOrden(arbol->izq);
          postOrden(arbol->der);
          cout << arbol->nro << " ";
     }
}
void verArbol(ABB arbol, int n)
{
     if(arbol==NULL)
          return;
     verArbol(arbol->der, n+1);

     for(int i=0; i<n; i++)
         cout<<"   ";

     cout<< arbol->nro <<endl;

     verArbol(arbol->izq, n+1);
}
void leerArchivo(string Entradarch)
{
    int pag=1;
    string s;
    ifstream f(Entradarch);
    if (!f.is_open())// si el archivo se abre is_open es una funcion discreta que significa abrir el archivo.
    cout<<"Error en la apertura del archivo."<<endl;
    else
    do
    {
        getline(f,s);
        cout<<s<<endl;
    } while (!f.eof());
    f.close();
}
void escribirArchivo(string Suasofon)
{
    ofstream f;
    f.open(Suasofon, ios_base::app);//app es para modificar el archivo y el "out", va a crear un nuevo archivo y si tienes algo en la dirección del archivo te lo va a borrar.

    f<<"Americana Source\n";//En esta parte se escribe los archivos que se desean llenar.
    f<<"Clementina Angosto\n";//En esta parte se escribe los archivos que se desean llenar.
    f<<"Oscar Tapia\n";//En esta parte se escribe los archivos que se desean llenar.
    f<<"Magaly Shunta\n";//En esta parte se escribe los archivos que se desean llenar.
    f.close();
}
void archivoEstructura(string pathfile)// Lee un archivo .txt y lo organiza dentro de una estrcutura con elementos ciudad y población.
{
int pag=1;
string s;
struct ciudad{
    string nombre;
    int población;

};
    ifstream f(pathfile);
    if (!f.is_open())// si el archivo se abre is_open es una funcion discreta que significa abrir el archivo.
    cout<<"Error en la apertura del archivo."<<endl;
    else
    do
    {
        getline(f,s);
        cout<<s<<endl;
    } while (!f.eof());
    f.close();

}
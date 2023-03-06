#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <sstream>
#include <fstream>

using namespace std;

struct nodo{                 // La estructura posee dos datos: un entero y dos punteros a nodos.

  int nro;                     // valor que poseera cada estructura nodo.
  struct nodo *izq, *der;       // punteros que apuntan a structuras tipos nodos, se defines dos punteros, uno a derecha y otro a izquierda
};
typedef struct nodo *ABB;


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
void archivoArbolB(string pathfile)
{
  
  int cont=0;
  string arch;
  struct artilleria{
    int aviones;
    int tanques;
    int submarinos;
  };
  struct ciudades{
    char nombre[50];
    char coordenadas[25];
    artilleria refuerzos;
  };
  
  ifstream m(pathfile);
  if(!m.is_open())
    cout<<"Error en la apertura del archivo"<<endl;
  else
  do
  {
    getline(m,arch);
    cout<<m<<endl;
    fflush(stdin);

  } while (!m.eof());
  m.close();
  
}
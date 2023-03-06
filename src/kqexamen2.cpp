#include <iostream>
#include <fstream>
#include <cstdlib>
#include <sstream>
#include <string>
#include <windows.h>
#include  "../lib/kqlibrery.h"
#include  "../lib/qkColor.h"
//@Nombre:Kevin Asdrubal Quishpe Yanchaliquin.
//@Fecha:6 de marzo del 2022.
//@Details: Examen 2 de programación.
const string KQCEDULA= "1503867723";
const string KQNOMBRE_COMPLETO="Kevin Asdrubal Quishpe Yanchaliquin ";
using namespace std;

struct coordenada{
    int capacidad;
    string geolocalizacion;
    string arsenal;
    struct corrdenada *izq,*der;
};

void qklectura(string archivo)
{
    int pag=1;
    string s;
    int cap;
    string geo;
    string ars;

    ifstream f(archivo);
    if (!f.is_open())// si el archivo se abre is_open es una funcion discreta que significa abrir el archivo.
    cout<<"Error en la apertura del archivo."<<endl;
    else
    cout<<"Leyendo coordenadas"<<endl;
    do
    {
        int k=1;
        getline(f,s);
        while(k!=0){
        for (int i = 0; i <= 100; i++){
             cout<<i<<"%"<<"\r";
            Sleep(1000);
        }
        k=0;
        }
        cout<<" "<<s<<endl;
    
    } while (!f.eof());
    f.close();
}


int main()
{
   

   qklectura("include\\ciudades.txt");
   cout<<"\n\n[+] Información de árbol binario de capacidad bélica Ucrania"<<endl;
   cout<<"\t Developer-Nombre : "<<KQNOMBRE_COMPLETO<<endl;;
   cout<<"\t Developer-Cedula : "<<KQCEDULA<<endl;;
   cout<<"\t Capacidad belica : 29"<<endl;
   cout<<"\t Coordenada-Total : 6"<<endl;
   cout<<"\t Coordenada-Seccarga : 3, 7, 6, 8, 0, 5"<<endl;



    return 0;

}

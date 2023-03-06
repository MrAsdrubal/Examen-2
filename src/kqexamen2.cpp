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
const string KQCEDULA= "0503867723";
const string KQNOMBRE_COMPLETO="Kevin Asdrubal Quishpe Yanchaliquin ";
using namespace std;

struct kqcoordenada{
    int capacidad;
    string geolocalizacion;
    string arsenal;
    struct corrdenada *izq,*der;
};

// void kqlectura(string archivo)
// {
//     string s;
//     ifstream f(archivo);
//     if (!f.is_open())// si el archivo se abre is_open es una funcion discreta que significa abrir el archivo.
//     cout<<"Error en la apertura del archivo."<<endl;
//     else
//     cout<<"Leyendo coordenadas"<<endl;
//     do
//     {
//         int k=1; //Dato de tipo booleano validar el bucle while del porcentaje de carga.
//         bool first=false;
//         getline(f,s);
//         while(k!=0)
//         {
//         for (int i = 0; i <= 100; i++){
//             cout<<"\r"<<i<<WHITE<<"%";
//             Sleep(25);
//         }
//         k=0;
//         }
//         cout<<" "<<GREEN<<s<<endl;
    
//     } while (!f.eof());
//     f.close();
// }
void kqlectura(string archivo) //Lee el archivo y carga los datos del archivo excepto la primera linea.
{
    string s;
    ifstream f(archivo);
    if (!f.is_open())
        cout << "Error en la apertura del archivo." << endl;
    else {
        bool first = true;
        cout << "Leyendo coordenadas" << endl;
        do {
            int k = 1;
            getline(f, s);
            while (k != 0) {
                if (!first) {
                    for (int i = 0; i <= 100; i++) {
                        cout << "\r" << i << WHITE << "%";
                        Sleep(25);
                    }
                }
                k = 0;
            }
            cout << " " << GREEN << s << endl;
            first = false;
        } while (!f.eof());
    }
    f.close();
}

int main()
{
   kqlectura("include\\ciudades.txt");
   cout<<CYAN<<"\n\n[+] Informacion de arbol binario de capacidad belica Ucrania"<<LBLUE<<endl;
   cout<<" Developer-Nombre : "<<WHITE<<KQNOMBRE_COMPLETO<<LBLUE<<endl;;
   cout<<" Developer-Cedula : "<<WHITE<<KQCEDULA<<LBLUE<<endl;;
   cout<<" Capacidad belica : "<<WHITE<<"29"<<LBLUE<<endl;
   cout<<" Coordenada-Total :"<<WHITE<<"6"<<LBLUE<<endl;
   cout<<" Coordenada-Seccarga :"<<WHITE<<" 3, 7, 6, 8, 0, 5"<<LBLUE<<endl;



    return 0;

}

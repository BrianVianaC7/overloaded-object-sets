#include <iostream>
#include <set>
#include <clocale>
#include <cstdlib>
#include "Jugadores.h"


using namespace std;

int main()
{
    setlocale(LC_CTYPE,"spanish");
    set<Jugadores> jug;
    int opcion;
    int num, edad;
    string nom, pos;
    set<Jugadores>::iterator r;

    do{
    cout<<"\nCONJUNTO\n1.AGREGAR ELEMENTO\n2.ELIMINAR ELEMENTO\n3.MOSTRAR ELEMENTO\n4.SALIR\nOPCIÓN: ";
    cin>>opcion;
    switch(opcion){
        case 1:
            {
            cout<<"\nAGREGAR\n\n";
                for(r=jug.begin();r!=jug.end();r++){
                  cout<<"CONJUNTO \n{\n   NOMBRE: "<<(*r).getNombre()<<"\n   EDAD: "<<(*r).getEdad()<<"\n   NUMERO: "<<(*r).getNumero()<<"\n   POSICIÓN: "<<(*r).getPosicion()<<"\n}\n\n"; //mostrar conjunto
                }
            cout<<"Nombre: ";
            cin>>nom;
            cout<<"Edad: ";
            cin>>edad;
            cout<<"Numero: ";
            cin>>num;
            cout<<"posición: ";
            cin>>pos;
            Jugadores brian(nom,edad,num,pos);
            jug.insert(brian);
            cout<<"ELEMENTO AGREGADO.\n\n";
            }
        break;
        case 2:
            {
             cout<<"\nELIMINAR\n\n";
                for(r=jug.begin();r!=jug.end();r++){
                    cout<<"CONJUNTO \n{\n   NOMBRE: "<<(*r).getNombre()<<"\n   EDAD: "<<(*r).getEdad()<<"\n   NUMERO: "<<(*r).getNumero()<<"\n   POSICIÓN: "<<(*r).getPosicion()<<"\n}\n\n";
                }
            cout<<"Nombre: ";
            cin>>nom;
            cout<<"Numero: ";
            cin>>num;
            for(r=jug.begin();r!=jug.end();r++){
                    if((*r).getNombre()==nom&&(*r).getNumero()==num){
                        jug.erase(*r);
                        break;
                    }
                }
            cout<<"ELEMENTO ELIMINADO.\n\n";
            }
        break;
        case 3:
            {
            cout<<"\nMOSTRAR CONJUNTO\n\n";
                for(r=jug.begin();r!=jug.end();r++){
                   cout<<"CONJUNTO\n{\n   NOMBRE: "<<(*r).getNombre()<<"\n   EDAD: "<<(*r).getEdad()<<"\n   NUMERO: "<<(*r).getNumero()<<"\n   POSICIÓN: "<<(*r).getPosicion()<<"\n}\n\n";
                }
            }
        break;
        case 4:
            {
             cout<<"SALIR\n";
            }
        break;
        default:
        cout<<"INVALIDO\n";
    }
}while(opcion!=4);
    return 0;
}

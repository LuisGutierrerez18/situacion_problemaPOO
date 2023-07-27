
#include<iostream> // prints
#include <string>

using namespace std;
//#include "Aerolinea.h"

class Itinerario{
    private:
        string hora;
        string fecha;
        string destino;
        string gate;
        //Aerolinea aerolinea;

    public:
        //Constructor de Itinerario
        Itinerario(string _hora, string _fecha, string _destino, string _gate){
            hora = _hora;
            fecha = _fecha;
            destino = _destino;
            gate = _gate;
        }

        // Getter que encuentra la hora que tiene el vuelo
        string getHora(){
            return hora;
        }
        // Setter que inicializa el valor de hora del vuelo
        void setHora(string _hora){
            hora = _hora;
        }
        // Getter que encuentra la fecha del vuelo
        string getFecha(){
            return fecha;
        }
        // Setter que inicializa el valor de fecha  del vuelo
        void setLocalidad(string _fecha){
            fecha = _fecha;
        }

        // Getter que encuentra el destino 
        string getDestino(){
            return destino;
        }
        // Setter que inicializa el valor del destino 
        void setDestino(string _destino){
            destino= _destino;
        }

         // Getter que encuentra el numero de gate que tiene el vuelo
        string getGate(){
            return gate;
        }
        // Setter que inicializa el valor del gate del vuelo
        void setGate(string _gate){
            gate = _gate;
        }

        void buscarVuelo(){
            cout<<"Ingresa la Hora: ";
            cin>> hora;

            cout<<"\n Ingresa la fecha: ";
            cin>>fecha;

            cout<<"\n Ingresa el destino: ";
            cin>>destino;

            //cout<<"\n Gate Numero: A2";
        }

        string Itinerario_toString(){
            string info = "Hora: " + getHora() + "\n";
            info += "Fecha: " + getFecha() + "\n";
            info += "Destino: " + getDestino()+"\n";
            info += "Gate: A2";
            return info;  
        }
};
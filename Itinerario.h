
#include<iostream> // prints
#include <string>

using namespace std;
#include "Pasajero.h"

class Itinerario{
    private:
        string hora;
        string fecha;
        string destino;
        string gate;
        float precio;
        Pasajero asiento;

    public:
        //Constructor de Itinerario
        Itinerario(string _hora, string _fecha, string _destino, string _gate, float _precio, Pasajero _asiento){
            hora = _hora;
            fecha = _fecha;
            destino = _destino;
            gate = _gate;
            precio = 102.55;
            asiento = _asiento;
        }

        // Constructor por default
        Itinerario(){
            hora = "12:00 AM";
            fecha = "20/07/23";
            destino = "Madrid";
            gate = "A2";
           // asiento = "";
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

        float getPrecio(){
            return precio;
        }
        void setPrecio(float _precio){
            precio = _precio;
        }

        Pasajero getAsiento(){
            return asiento;
        }

        void buscarVuelo(){
            cout<<"\nIngresa la Hora: ";
            cin>> hora;

            cout<<"\nIngresa la fecha: ";
            cin>>fecha;

            cout<<"\nIngresa el destino: ";
            cin>>destino;

            //cout<<"\n Gate Numero: A2";
        }

        string Itinerario_toString(){
            string info = "\nHora: " + getHora() + "AM\n";
            info += "Fecha: " + getFecha() + "\n";
            info += "Destino: " + getDestino()+"\n";
            info += "Gate: A2\n";
            info += "Precio Boleto: " + to_string(getPrecio());
            info += "Informacion Personal:\n" + asiento.Pasajero_toString();
            info+= "\nRecuerde estar al menos tres horas antes en la terminal\n";
            info += "Buen Viaje!\n";
            cout<<"";
            return info;  
        }
};
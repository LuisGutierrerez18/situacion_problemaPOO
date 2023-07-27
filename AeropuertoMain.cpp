
#include<iostream> // prints
#include <string>
using namespace std;

#include "Aeropuerto.h"
#include "Itinerario.h"

int main(){
    Aeropuerto cdmx("Benito Juarez", "Ciudad de Mexio", 2, 20);
    Itinerario vuelo("","","","");
    cout<<"\nBienvenido al Aeropuerto Internacional de la Ciudad de Mexico\n";
    //! Dos opciones pasajero o aerolinea
    int ingresar;
    
    cout<<"Si eres aerolinea nueva ingresa 1 para ingresar al sistema y agendar tu horario \n";
    cout<<"Si eres pasajero ingresa 2 para ingresar al sistema y agendar tu vuelo \n";
    cin>>ingresar;
    
    if(ingresar == 1){
        cout<<cdmx.aeropuerto_toString() + "\n"; 
        cdmx.escogerHorario();
    }
    else if(ingresar ==2) {
        vuelo.buscarVuelo();
        cout<<"Su vuelo esta agendado y este es el resumen: \n";
        cout<< vuelo.Itinerario_toString();
    }
   
    

    return 0;
}

#include<iostream> // prints
#include <string>
using namespace std;

#include "Aeropuerto.h"
int main(){
    Aeropuerto cdmx("Benito Juarez", "Ciudad de Mexio",20);
    
    cout<<"\nBienvenido al Aeropuerto Internacional de la Ciudad de Mexico\n";
    
    int ingresar;
    
    cout<<"Como eres aerolinea nueva ingresa 1 para ingresar al sistema y agendar tu horario \n";
    cin>>ingresar;
    
    if(ingresar == 1){
        cout<<cdmx.aeropuerto_toString(); 
    }
    else{
        cout<<"Regresa Pronto";
    }
   

    return 0;
}
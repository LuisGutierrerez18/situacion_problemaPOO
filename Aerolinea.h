#include<iostream> // prints
#include <string>

using namespace std;

class Aerolinea{
private:
    string nombre;
    string origen;
    float ingresos;
    float comision;
    //flota Avion;
    //vuelo Itinerario;
public:
    
    Aerolinea(string _nombre,string _origen,float _ingresos,float _comision){
        nombre=_nombre;
        origen=_origen;
        ingresos=_ingresos;
        comision=_comision;
    }
    //getVuelo()
    void calcula_comision(){
        comision = comision*0.10;
    }
    void setIngresos(float _ingresos){
        ingresos = _ingresos;
    }
    
    void muestraAerolinea(){
        cout<<endl<<"Informacion de la aerolinea"<<endl;
        cout<<"Nombre: "<<nombre<<endl;
        cout<<"Origen: "<<origen<<endl;
        cout<<"Ingresos: "<<ingresos<<endl;
        cout<<"Comision: "<<comision<<endl;
        cout<<"Ingresos: "<<ingresos+comision;
    }

};




#include<iostream> // prints
#include <string>

using namespace std;
//#include "Itinerario.h"

class Pasajero{
    private:
        string nombre;
        int edad;
        string nacionalidad;
        int numMaletas;
        int cel;
        string asiento;

    public:
        //Constructor
        Pasajero(string _nombre, int _edad, string _nacionalidad, int _numMaletas,int _cel,string _asiento /*Itinerario vuelo*/){
            nombre = _nombre;
            edad = _edad;
            nacionalidad = _nacionalidad;
            numMaletas = _numMaletas;
            cel=_cel;
            asiento=_asiento;
            //vuelo("","","","");
        }
       
        //Definir metodos
        void setName(string _nombre){
            nombre = _nombre;
        }
        string getNombre(){
            return nombre;
        }


        void setEdad(int _edad){
            edad = _edad;
        }
        int getEdad(){
            return edad;
        }


        void setNacionalidad(string _nacionladidad){
            nacionalidad = _nacionladidad;
        }
        string getNacionalidad(){
            return nacionalidad;
        }


        void setMaletas(int _numMaletas){
            numMaletas = _numMaletas;
        }
        int getNumMaletas(){
            return numMaletas;
        }


        void setCel(int _cel){
            cel=_cel;
        }
        int getCel(){
            return cel;
        }
        
        void setAsiento(){
            asiento=_asiento
        }
        string getAsiento(){
            return asiento;
        }
        
        //Recibir informacion del pasajero
        void PasajeroInformacion(){
            cout<<endl<<"Ingrese nombre del pasajero: ";
            cin>>nombre;

            cout<<endl<<"Ingrese edad del pasajero: ";
            cin>>edad;

            cout<<endl<<"Ingrese nacionalidad del pasajero: ";
            cin>>nacionalidad;

            cout<<endl<<"Ingrese el numero de maletas a documentar: ";
            cin>>numMaletas;

            cout<<endl<<"Ingrese su numero telefonico: ";
            cin>>cel;
        }

        // Display informacion sobre el pasajero
        void muestraPasajero(){
        cout<<endl<<"Informacion del pasajero"<<endl;
        cout<<"Nombre: "<<nombre<<endl;
        cout<<"Edad: "<<edad<<endl;
        cout<<"Nacionalidad: "<<nacionalidad<<endl;
        cout<<"No. maletas: "<<numMaletas<<endl;
        cout<<"Asiento: "<<asiento<<endl;
        }

        string celular_toString(){
            string info = "Llamando a " + getNombre()+" "+getCel()+"...";
            return info;

        //Llama al pasajero
        void llamaPasajero(){
            int llamar;

            cout<<"¿Desea llamar al pasajero?";
            cout<<" Si (1)";
            cout<<" No (0)";
            cin>>llamar;

            if(llamar == 1){
                celular_toString();
            }
            else{
                break;
            }
        }
};

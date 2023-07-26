
#include<iostream> // prints
#include <string>

using namespace std;

class Aeropuerto{
    private:
        int numeroHorarios; //Cantidad de horarios disponibles
        string disponibilidad[7]; 
        int num_gates;
        string lugar; // Lugar Aeropuerto
        string nombre; // Nombre Aeropuerto
        int numPistas;
    
    public:
        // Constructor que toma el numero de gates y horario 
        Aeropuerto(string _nombre,string _lugar, int _pistas, int numGates){
            lugar = _lugar;
            nombre = _nombre;
            num_gates = numGates;
            numPistas = _pistas;
            disponibilidad[0] = "(1). 12:00-1:00 AM";
            disponibilidad[1] = "(2). 1:00-2:00 AM";
            disponibilidad[2] = "(3). 2:00-3:00 AM";
            disponibilidad[3] = "(4). 3:00-4:00 AM";
            disponibilidad[4] = "(5). 4:00-5:00 AM";
            disponibilidad[5] = "(6). 5:00-6:00 AM";
            disponibilidad[6] = "(7). 6:00-7:00 AM";
        }
        // Getter que encuentra el nombre que tiene el aeropuerto
        string getNombre(){
            return nombre;
        }
        // Setter que inicializa el valor del nombre del aeropuerto
        void setNombre(string _nombre){
            nombre = _nombre;
        }
        // Getter que encuentra lo localizacion del aeopuerto
        string getLocalidad(){
            return lugar;
        }
        // Setter que inicializa el valor de localidad  del aeropuerto
        void setLocalidad(string _lugar){
            lugar = _lugar;
        }

        // Getter que encuentra el numero de gates que tiene el aeropuerto
        int getNumGate(){
            return num_gates;
        }
        // Setter que inicializa el valor del numero de gates
        void setNumGates(int _numGates){
            num_gates= _numGates;
        }

         // Getter que encuentra el nombre que tiene el aeropuerto
        int getPistas(){
            return numPistas;
        }
        // Setter que inicializa el valor del nombre del aeropuerto
        void setNombre(int _pistas){
            numPistas = _pistas;
        }

        // Hace display la informacion del aeropuerto con su numero de gates y horarios disponibles
        string aeropuerto_toString(){
            numeroHorarios = 7;
            string info = "Nombre Aeropuerto: " + getNombre() + "\n";
            info += "Localizacion: " + getLocalidad() + "\n";
            info += "Numero de Gates: " + to_string(getNumGate()) + "\n";
            info += "Numero de pistas: " + to_string(getPistas()) + "\n";
            info += "Horarios Disponibles:\n";
            for (int i = 0; i < numeroHorarios; ++i){
                info += disponibilidad[i] + "\n";
            }
        return info;
    }

        // Funcion pregunta al aerolinea que horario quiere ocupar 
        void escogerHorario(){
            int horario;
            cout<<"Escoger el numero del horario que desea utilizar: ";
            cin>>horario;

            // Serie de ifs para comparar la seleccion del usurio con el horario dispnible
            if(horario==1){
                cout<<"Su horario es: ";
                cout<<disponibilidad[0] + "\n";
            }
            else if(horario==2){
                cout<<"Su horario es: ";
                cout<<disponibilidad[1] + "\n";
            }
            else if(horario==3){
                cout<<"Su horario es: ";
                cout<<disponibilidad[2] + "\n";
            }
            else if(horario==4){
                cout<<"Su horario es: ";
                cout<<disponibilidad[3] + "\n";
            }
            else if(horario==5){
                cout<<"Su horario es: ";
                cout<<disponibilidad[4] + "\n";
            }
            else if(horario==6){
                cout<<"Su horario es: ";
                cout<<disponibilidad[5] + "\n";
            }
            else if(horario==7){
                cout<<"Su horario es: ";
                cout<<disponibilidad[6] + "\n";
            }
            // Imprime el horario seleccionado
        }

};

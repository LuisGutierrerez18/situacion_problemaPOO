
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
    
    public:
        // Constructor que toma el numero de gates y horario 
        Aeropuerto(string _nombre,string _lugar, int numGates){
            lugar = _lugar;
            nombre = _nombre;
            num_gates = numGates;
            disponibilidad[0] = "(1). 12:00-1:00";
            disponibilidad[1] = "(2). 1:00-2:00";
            disponibilidad[2] = "(3). 2:00-3:00";
            disponibilidad[3] = "(4). 3:00-4:00";
            disponibilidad[4] = "(5). 4:00-5:00";
            disponibilidad[5] = "(6). 5:00-6:00";
            disponibilidad[6] = "(7). 6:00-7:00";
        }
        // Getter que encuentra el numero de gates que tiene el aeropuerto
        int getNumGate(){
            return num_gates;
        }
        // Setter que inicializa el valor del numero de gates
        void setNumGates(int _numGates){
            num_gates= _numGates;
        }

        // Hace display la informacion del aeropuerto con su numero de gates y horarios disponibles
        string aeropuerto_toString(){
            numeroHorarios = 7;
            string info = "Numero de Gates: " + to_string(getNumGate()) + "\n";
            info += "Horarios Disponibles:\n";
            for (int i = 0; i < numeroHorarios; ++i){
                info += disponibilidad[i] + "\n";
            }
        return info;
    }

    //? Metodo para escoger horario //

};


#include<iostream> // prints
#include <string>

using namespace std;

class Aeropuerto{
    private:
        int numeroHorarios; //Cantidad de horarios disponibles
        string disponibilidad[7]; //!Possible Error
        int num_gates;
    
    public:

        Aeropuerto(int numGates){
            num_gates = numGates;
            disponibilidad[0] = "12:00-1:00";
            disponibilidad[1] = "1:00-2:00";
            disponibilidad[2] = "2:00-3:00";
            disponibilidad[3] = "3:00-4:00";
            disponibilidad[4] = "4:00-5:00";
            disponibilidad[5] = "5:00-6:00";
            disponibilidad[6] = "6:00-7:00";
        }

        int getNumGate(){
            return num_gates;
        }
        void setNumGates(int _numGates){
            num_gates= _numGates;
        }

        string aeropuerto_toString(){
            numeroHorarios = 7;
            string info = "Number of Gates: " + to_string(getNumGate()) + "\n";
            info += "Available Slots:\n";
            for (int i = 0; i < numeroHorarios; ++i){
                info += disponibilidad[i] + "\n";
            }
        return info;
    }

};

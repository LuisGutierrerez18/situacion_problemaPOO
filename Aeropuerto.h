
#include<iostream> // prints
#include <string>

using namespace std;

class Aeropuerto{
    private:
        //static string disponibilidad[7] = {"12:00-1:00","1:00-2:00", "2:00-3:00", "3:00-4:00", "4:00-5:00", "5:00-6:00", "6:00-7:00"}; //!Possible Error
        int num_gates;
    
    public:

        Aeropuerto(int numGates){
            num_gates = numGates;
        }

        int getNumGate(){
            return num_gates;
        }
        void setNumGates(int _numGates){
            num_gates= _numGates;
        }

        string aeropuerto_toString(){
            
            string info = "";
            info+= getNumGate();
           // cout<<disponibilidad[1];

            return info;

        }

};
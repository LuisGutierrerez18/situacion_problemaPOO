class Aerolinea{
private:
    string nombre;
    string origen;
    float ingresos;
    float comision;
    //flota Avion;
    //vuelo Itinerario;
public:
    Aerolinea();
    Aerolinea(string,string,float,float);
    //getVuelo()
    void calcula_comision();
    void setIngresos();
    void muestraAerolinea();
};

Aerolinea::Aerolinea(){
    //Avion _avion;
    //Itinerario _vuelo;

    nombre="Aeromexico";
    origen="Mexicano";
    ingresos=0.00;
    comision=10000.00;
    //flota=_avion;
    //vuelo=_vuelo;
}

Aerolinea::Aerolinea(string _nombre,string _origen,float _ingresos,float _comision){
    nombre=_nombre;
    origen=_origen;
    ingresos=_ingresos;
    comision=_comision;
    //flota=_flota;
    //vuelo=_vuelo;
}

void Aerolinea::muestraAerolinea(){
    cout<<endl<<"Informacion de la aerolinea"<<endl;
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Origen: "<<origen<<endl;
    cout<<"Ingresos: "<<ingresos<<endl;
    cout<<"Comision: "<<comision<<endl;
    //cout<<"Flota: "<<endl;
    //propietario.muestraAvion();
    //cout<<"Vuelo: "<<endl;
    //propietario.muestraItinerario();
}

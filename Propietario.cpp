#include "persona.cpp"
#include<iostream>

using namespace std;

    class Propietario : Persona {
        
        private : string nit;
                double cui;

        public: Propietario(string nom,string ape,string dir, string fn, int tel, string n, double cu): Persona(nom,ape,dir,fn,tel){
                string n=nit;
                double cu=cui;
                }

        void setNit(string n){nit = n;}
	    void setNombre(string nom){nombres = nom;}
        void setApellido(string ape){apellidos = ape;}
        void setDireccion(string dir){direccion = dir;}
        void setFN(string fn){fecha_nacimiento = fn;}
        void setTelefono(int tel){telefono = tel;}
        void setTelefono(double cu){cui = cu;}




        string getNit(){return nit;}
        string getNombres(){return nombres;}
        string getApellidos(){return apellidos;}
        string getDireccion(){return direccion;}
        string getFN(){return fecha_nacimiento;}	
        int getTelefono(){return telefono;}
        double getcui(){return cui;}

        void mostrar(){
		cout<<"_______________"<<endl;
		cout<<"Nit:"<<nit<<endl;
		cout<<"Nombres:"<<nombres<<endl;
		cout<<"Apellidos:"<<apellidos<<endl;
		cout<<"Direccion:"<<direccion<<endl;
		cout<<"Nacimiento:"<<fecha_nacimiento<<endl;
		cout<<"Telefono:"<<telefono<<endl;
        cout<<"CUI: "<<cui<<endl;
	}



    };
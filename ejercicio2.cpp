#include <bits/stdc++.h>
using namespace std;

class Persona{
    int edad;
    float estatura;
    float peso;

    public:
    string nombre;
    string telefono;

    Persona();
    Persona(int ed, float est, float pes, string nom, string tel);

    int getEdad();
    void setEdad(int ed);
    float getEstatura();
    void setEstatura(float est);
    float getPeso();
    void setPeso(float p);
    void cumplirAnios();
    void presentarse();
};

int main(){

Persona p1;
p1.nombre = "nombre1";
p1.telefono = "1234567892";
p1.setEdad(19);
p1.setEstatura(1.6);
p1.setPeso(62.5);

Persona p2(32,1.78, 70.4, "nombre2", "3312345678");

vector<Persona> personas = {p1,p2};

for(int i=0; i<personas.size(); i++){
    personas[i].presentarse();
    personas[i].cumplirAnios();
}

for(int i=0; i<personas.size(); i++){
    personas[i].presentarse();
}

}

Persona::Persona(){
};

Persona::Persona(int ed, float est, float pes, string nom, string tel){

edad = ed;
estatura = est;
peso = pes;
nombre = nom;
telefono = tel;

};

int Persona::getEdad(){
    return edad;
};

void Persona::setEdad(int ed){
    edad = ed;
};

float Persona::getEstatura(){
    return estatura;
};

void Persona::setEstatura(float est){
    estatura = est;
};

float Persona::getPeso(){
    return peso;
};

void Persona::setPeso(float p){
    peso = p;
};

void Persona::cumplirAnios(){
    edad+=1;
    if(edad<21){
        estatura = estatura + (estatura*0.03);
    }

    if(edad>30){
        peso = peso + (peso*0.03);
    }
};

void Persona::presentarse(){
    cout << "nombre: " << nombre << ", edad: " << edad;
    cout << ", estatura: " << estatura << ", peso: " << peso;
    cout << ", telefono: " << telefono << endl;
};
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

}

Persona::Persona(){
};

Persona::Persona(int ed, float est, float pes, string nom, string tel){

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

void Persona::presentarse(){};
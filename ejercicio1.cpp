#include <bits/stdc++.h>
using namespace std;

class Animal{
    string especie;

    public:
    int edad;
    string nombre;
    string sonido;

    Animal();
    Animal(string esp, int ed, string nom, string son);

    string getEspecie();
    void setEspecie(string esp);
    void presentarse();
};

int main(){

    Animal animal1;
    animal1.setEspecie("perro");
    animal1.edad = 10;
    animal1.nombre = "nombre1";
    animal1.sonido = "guau";

    Animal animal2("gato",5,"nombre2","miau");

    vector<Animal> animales = {animal1, animal2};

    for(int i=0; i<animales.size(); i++){
        animales[i].presentarse();
    }

    return 0;
}

Animal::Animal(){
    setEspecie("desconocido");
    edad = 0;
    nombre = "desconocido";
    sonido = "desconocido";
}

Animal::Animal(string esp, int ed, string nom, string son){
    setEspecie(esp);
    edad = ed;
    nombre = nom;
    sonido = son;
}

string Animal::getEspecie(){
    return especie;
};

void Animal::setEspecie(string esp){
    especie = esp;
};

void Animal::presentarse(){
    cout << "Hola, soy un " << getEspecie() << " de " << edad << " años y me llamo " << nombre << ". Hago " << sonido << endl;
};
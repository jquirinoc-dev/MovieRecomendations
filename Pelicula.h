#ifndef PELICULA_H
#define PELICULA_H

#include <iostream>
#include <string>

using namespace std;

class Pelicula{
    public:
        Pelicula();
        Pelicula(string, int);

        string getName() const;
        int getSeen() const;

        void setName(string);
        void setSeen(int);
    

    private:
        string name;
        int seen;
};

Pelicula::Pelicula(){
    name = "Pelicula";
    seen = 0;
}

Pelicula::Pelicula(string n, int s){
    name = n;
    seen = s;
}

string Pelicula::getName() const{
    return name;
}

int Pelicula::getSeen() const{
    return seen;
}

void Pelicula::setName(string n){
    name = n;
}

void Pelicula::setSeen(int s){
    seen = s;
}


#endif
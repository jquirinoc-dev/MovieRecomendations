#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;

#include <string>
#include <vector>
#include <ctime>
#include "Pelicula.h"



void cargarPeliculas(vector<Pelicula> &listaPelis, int &pelis){
    
    pelis = 0;

    string name = "";
    int seen = 0;

    ifstream file;

    file.open("pelis.txt");

    while (file >> name >> seen){
        Pelicula movie(name, seen);
        listaPelis.push_back(movie);
        pelis++;
    }

    cout  << "Actualmente existen "<< pelis << " en la base de datos" << endl;

}

void recomendacion(vector<Pelicula> listaPelis, int pelis){

    srand(time(0));
    int randNum = rand() % pelis;
    
    while (listaPelis[randNum].getSeen() == 1){
        
        randNum = rand() % pelis;
    }
    
    cout << "Deberian ver la pelicula numero " << randNum + 1 << ", ";
    cout << listaPelis[randNum].getName() << endl;
    cout << "Diviertanse y besense mucho :)" << endl;

}

int main(){

    int numPelis = 0;

    vector<Pelicula> peliculas;
    

    cargarPeliculas(peliculas, numPelis);
    recomendacion(peliculas, numPelis);

    system("pause");

    return 0;
}
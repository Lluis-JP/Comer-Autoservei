/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Empleat.h
 * Author: lluis_000
 *
 * Created on 18 de enero de 2018, 19:55
 */

#ifndef EMPLEAT_H
#define EMPLEAT_H
#include <string>

using namespace std;
class Empleat {
public:
    Empleat();
    Empleat(const Empleat& orig);
    virtual ~Empleat();
    void afegirFranjaHoraria(Data a, Data b);
    void eliminarFranjaHoraria();
private:
    int codiEmpleat;
    string nomComplet;
    Horari horari;
};

#endif /* EMPLEAT_H */


/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Producte.h
 * Author: lluis_000
 *
 * Created on 18 de enero de 2018, 19:56
 */

#ifndef PRODUCTE_H
#define PRODUCTE_H
#include "string"
#include <vector>

using namespace std;
class Producte {
public:
    Producte();
    Producte(int codi, string nom, float preu);
    Producte(const Producte& orig);
    virtual ~Producte();
    void afegirEstoc(int n);
    void eliminarEstoc(int n);
    float obtenirPreu()const;
private:
    int producteId;
    float preu;
    string nom;
    int estocBotiga;//hauriem de considerar tambe el magetzem
    //vector<Ofertes> ofertes

};

#endif /* PRODUCTE_H */


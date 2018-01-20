/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Empleat.cpp
 * Author: lluis_000
 * 
 * Created on 18 de enero de 2018, 19:55
 */

#include "Empleat.h"
#include "Horari.h"

Empleat::Empleat() {
}
Empleat::Empleat(int codi, string nom) {
    this->codiEmpleat=codi;
    this->nomComplet=nom;
}
Empleat::Empleat(const Empleat& orig) {
}

Empleat::~Empleat() {
}

void Empleat::afegirFranjaHoraria(Data a, Data b){
    horari.inserirFranja(a,b);
}

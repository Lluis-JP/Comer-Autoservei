/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Magatzem.cpp
 * Author: lluis_000
 * 
 * Created on 20 de enero de 2018, 1:07
 */

#include "Magatzem.h"

Magatzem::Magatzem() {
}

Magatzem::Magatzem(const Magatzem& orig) {
}

Magatzem::~Magatzem() {
}

void Magatzem::afegirEstoc(int prodId, int n){
    estocProductes[prodId]+=n;
}
int Magatzem::consultarEstoc(int prodId)const{
    return estocProductes[prodId];
}
int Magatzem::restarEstoc(int prodId, int n){
    
    if(estocProductes[prodId]>=n){
        estocProductes[prodId]-=n;
    }
    else{
        return -1;
    }
    return 1;
}
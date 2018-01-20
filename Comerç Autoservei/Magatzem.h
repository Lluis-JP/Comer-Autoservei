/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Magatzem.h
 * Author: lluis_000
 *
 * Created on 20 de enero de 2018, 1:07
 */
#ifndef MAGATZEM_H
#define MAGATZEM_H
#include <map>

using namespace std;
class Magatzem {
public:
    Magatzem();
    Magatzem(const Magatzem& orig);
    virtual ~Magatzem();
    void afegirEstoc(int prodId, int n);
    int consultarEstoc(int prodId);
    int restarEstoc(int prodId, int n);//-1 si no l'estoc actual es inferior a n 
private:
    map<int, int> estocProductes;//el primer int es el codi i el segon la quantitat
};

#endif /* MAGATZEM_H */


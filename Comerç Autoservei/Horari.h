/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Horari.h
 * Author: lluis_000
 *
 * Created on 18 de enero de 2018, 19:56
 */

#ifndef HORARI_H
#define HORARI_H
#include <vector>
#include "Data.h"
#include <iostream>
#include <vector>
using namespace std;
class Horari {
public:
    Horari();
    Horari(const Horari& orig);
    virtual ~Horari();
    //pre:a<b
    void inserirFranja(Data a ,Data b);

private:
        vector <pair <Data, Data> > franjaesHoraries;

        

};

#endif /* HORARI_H */


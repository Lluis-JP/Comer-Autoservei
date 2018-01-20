/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Horari.cpp
 * Author: lluis_000
 * 
 * Created on 18 de enero de 2018, 19:56
 */

#include "Horari.h"

Horari::Horari() {
}

Horari::Horari(const Horari& orig) {
}

Horari::~Horari() {
}
//pre:a<b
void Horari::inserirFranja(Data a ,Data b){
    pair<Data, Data> data =pair(a, b);
    int i=0;
    while(i<franjaesHoraries.size() && franjaesHoraries[i].first()<a){
        i++;
    }
    franjaesHoraries.insert(data,i);
}

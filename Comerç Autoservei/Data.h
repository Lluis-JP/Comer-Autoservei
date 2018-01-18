/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Data.h
 * Author: lluis_000
 *
 * Created on 18 de enero de 2018, 19:56
 */

#ifndef DATA_H
#define DATA_H

class Data {
public:
    Data();
    Data(const Data& orig);
    Data(int any, int mes, int dia, int hora, int minuts, int segons);
    void restar(Data d);
    void sumar(Data d);
    virtual ~Data();
private:
    int any;
    int mes;
    int dia;
    int hora;
    int minuts;
    int segons;

};

#endif /* DATA_H */


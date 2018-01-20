/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Client.h
 * Author: lluis_000
 *
 * Created on 18 de enero de 2018, 20:08
 */

#ifndef CLIENT_H
#define CLIENT_H
#include "string"
#include <vector>

using namespace std;
class Client {
public:
    Client();
    Client(const Client& orig);
    virtual ~Client();
private:
    int codiClient;
    string nomComplet;
    vector<CompraClient> compra;
};

#endif /* CLIENT_H */


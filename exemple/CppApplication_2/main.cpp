/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ameni
 *
 * Created on 6 octobre 2018, 09:27
 */
#include <cstdlib>

#include <iostream>
#include "EComplex.hpp"
using namespace std;

int main(int argc, char**argv) {

    EComplex y(3, 3);
    EComplex* c = new EComplex(2, 6);
    y.Afficher();
    c->Afficher();
    EComplex s("2+2*i");
    s.AfficherString();
    
   delete c;
    return 0;
}

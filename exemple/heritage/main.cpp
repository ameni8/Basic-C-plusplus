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

    EComplex* c = new EComplexDouble(1,3);
    EComplex* d = new EComplexDouble(2,3);
    EComplex* f = new EComplexDouble(0,0);
   
    
   
    
    f=c->Add(d);
    f->Afficher();
    delete c;
    delete d;
    return 0;
}

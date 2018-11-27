/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ameni
 *
 * Created on 20 octobre 2018, 10:19
 */

#include <cstdlib>
#include <iostream>
#include "ESComplex.hpp"
#include"DivisionExp.hpp"
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    ESComplex* c = new ESComplex(1, 4);
    ESComplex* d = new ESComplex(4, 7);
    DivisionExp* exp = new DivisionExp();
    ESComplex* f = new ESComplex(0, 0);

    try {

        f = c->division(d);
        cout << f;
        cout << "Surcharge de l'operateur / :" << endl;
        f = c->operator/(d);
        cout << f;
    } 
    catch (DivisionExp *e) {
        std::cout << e->what() << std::endl;
    }





    try {


    } catch (DivisionExp *e) {
        std::cout << e->what() << std::endl;
    }


    return 0;
}


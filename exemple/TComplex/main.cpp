/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ameni
 *
 * Created on 19 octobre 2018, 13:48
 */

#include <cstdlib>

#include <iostream>
#include "TComplex.hpp"
#include"TComplex.cpp"
using namespace std;

int main(int argc, char** argv) {
    
     TComplex <int> TempObj;
     TempObj.SetValueImg(4);
     TempObj.SetValueReal(2);
     int im=TempObj.GetValueImg();
     int re=TempObj.GetValueReal();
     
     
     cout<<re<<"+"<<im<<"*i"<<endl;
    return 0;
    
}


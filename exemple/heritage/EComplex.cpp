/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "EComplex.hpp"

#include <iostream> 

EComplexDouble::EComplexDouble(double r, double i) : m_real(r), m_imag(i) {
}
using namespace std;


void EComplexDouble::Afficher() {
   
    cout << this-> m_real<<"+"<<this->m_imag<<"*i" << endl;
}

double EComplexDouble::getterImg() {
    return m_imag;
}

double EComplexDouble::getterReal() {
    return m_real;
}

void EComplexDouble::setterImg(double m_imag) {
    this->m_imag=m_imag;
}
void EComplexDouble::setterReal(double m_real) {
    this->m_real=m_real;
}


EComplex* EComplexDouble::Add(EComplex* c) {

      cout << "houlala" << endl;
      
      EComplexDouble* result=new EComplexDouble(this->m_imag+c->getterImg(),this->m_real+c->getterReal());
      
      
      return result;
}

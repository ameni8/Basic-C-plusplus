/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ESComplex.hpp
 * Author: ameni
 *
 * Created on 20 octobre 2018, 10:20
 */

#ifndef ESCOMPLEX_HPP
#define ESCOMPLEX_HPP
#include <iostream>
class ESComplex {
private:
    double m_real;
    double m_imag;

public:

    ESComplex(double r, double i);
    virtual~ESComplex();
    double getterImg();
    double getterReal();
    void setterImg(double m_imag);
    void setterReal(double m_real);
    void Afficher();
    ESComplex* division(ESComplex * c);
    friend std::ostream& operator<< (std::ostream& out,const ESComplex* c );

    ESComplex*  operator/(ESComplex* c);

};


#endif /* ESCOMPLEX_HPP */


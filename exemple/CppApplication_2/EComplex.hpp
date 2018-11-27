/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   EComplex.hpp
 * Author: ameni
 *
 * Created on 6 octobre 2018, 11:09
 */

#ifndef ECOMPLEX_HPP
#define ECOMPLEX_HPP

class EComplex {
private:
    double m_real;
    double m_imag;
    char * m_ch;

public:
    void Afficher();
    void AfficherString();
    EComplex(double r, double i);
    EComplex(char * ch);
    virtual~EComplex();
};



#endif /* ECOMPLEX_HPP */


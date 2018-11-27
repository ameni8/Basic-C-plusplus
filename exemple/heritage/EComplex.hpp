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
public:
    virtual double getterImg()=0;
    virtual double getterReal()=0;
    virtual void setterImg(double m_imag)=0;
    virtual void setterReal(double m_real)=0;
    virtual EComplex * Add(EComplex * c) = 0;
    virtual void Afficher() = 0;

};

class EComplexDouble : public EComplex {
public:
    EComplexDouble(double r, double i);
private:
    double m_real;
    double m_imag;
    EComplex* Add(EComplex* c);

public:
    void Afficher();
    double getterImg();
    double getterReal();
    void setterImg(double m_imag);
    void setterReal(double m_real);
};


#endif /* ECOMPLEX_HPP */


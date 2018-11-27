/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   TComplex.hpp
 * Author: ameni
 *
 * Created on 19 octobre 2018, 13:49
 */

#ifndef TCOMPLEX_HPP
#define TCOMPLEX_HPP

template <class T>
class TComplex {
public:
    TComplex();
    void SetValueReal( T m_real);
    void SetValueImg( T m_imag);
    T GetValueReal();
    T GetValueImg();
    private:
        T m_real;
        T m_imag;
};



#endif /* TCOMPLEX_HPP */


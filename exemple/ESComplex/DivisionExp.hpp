/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   DivisionExp.hpp
 * Author: ameni
 *
 * Created on 20 octobre 2018, 11:27
 * heritage de exception 
 */

#ifndef DIVISIONEXP_HPP
#define DIVISIONEXP_HPP
#include <exception>
using namespace std; 
class DivisionExp:public exception
{
    public: DivisionExp();
    virtual ~DivisionExp() {
}
   
    
    const char* what() const throw();
    

};


#endif /* DIVISIONEXP_HPP */


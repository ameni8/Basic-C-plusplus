/* 
 * File:   DivisionExp.cpp
 * Author: ameni
 *
 * Created on 20 octobre 2018, 11:27
 * redifinition de la methode what de la classe exception 
 */

#include <iostream>
#include "DivisionExp.hpp"  
using namespace std;

DivisionExp::DivisionExp() {

}

const char* DivisionExp::what() const throw(){
    return "This is my own exception : Sorry i can't divide  by zero o_^ ";
}

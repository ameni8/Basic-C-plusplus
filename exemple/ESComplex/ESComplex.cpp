#include "ESComplex.hpp"
#include "DivisionExp.hpp"
#include <iostream> 
using namespace std;
ESComplex::ESComplex(double r, double i) : m_real(r), m_imag(i) {
}
ESComplex::~ESComplex() {
}

ESComplex* ESComplex::division(ESComplex* c) {
    ESComplex* result =new ESComplex(0,0);
     DivisionExp* exp= new DivisionExp();
    
    
         if((c->m_real*c->m_real)+(c->m_imag*c->m_imag)==0){ throw exp;}
         else{
        result->m_imag=(this->m_imag*c->m_real)-(this->m_real*c->m_imag)/((c->m_imag)*(c->m_imag)+(c->m_real)*(c->m_real));
        result->m_real=(this->m_imag*c->m_imag)+(this->m_real*c->m_real)/((c->m_imag)*(c->m_imag)+(c->m_real)*(c->m_real));
    }
    
    
    return result;
}

void ESComplex::Afficher() {
   
    cout << this-> m_real<<"+"<<this->m_imag<<"*i" << endl;
}

std::ostream& operator<<(std::ostream& out, const ESComplex* c) {
    out<<"My Complex:"<<c->m_real<<"+"<<c->m_imag<<"*i"<<endl;
    return out;
}

ESComplex* ESComplex::operator/(ESComplex* c) {
     ESComplex* result =new ESComplex(0,0);
     DivisionExp* exp= new DivisionExp();
    
    
         if((c->m_real*c->m_real)+(c->m_imag*c->m_imag)==0){ throw exp;}
         else{
        result->m_imag=(this->m_imag*c->m_real)-(this->m_real*c->m_imag)/((c->m_imag)*(c->m_imag)+(c->m_real)*(c->m_real));
        result->m_real=(this->m_imag*c->m_imag)+(this->m_real*c->m_real)/((c->m_imag)*(c->m_imag)+(c->m_real)*(c->m_real));
         }
  return result;
}






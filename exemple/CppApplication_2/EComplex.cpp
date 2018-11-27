/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "EComplex.hpp"

#include <iostream> 

EComplex::EComplex(double r, double i) : m_real(r), m_imag(i) {
}

EComplex::EComplex(char * ch) : m_ch(ch) {
}
// 

EComplex::~EComplex() {
}
using namespace std;

void EComplex::Afficher() {
    cout << "complex with :real and imag" << endl;
    cout << m_real << "+" << m_imag << "*i" << endl;
    cout << "and" << endl;
}

void EComplex::AfficherString() {
    cout << "complex with string" << endl;
    cout << m_ch << endl;
}

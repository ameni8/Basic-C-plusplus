#include"TComplex.hpp"
#include <iostream> 

using namespace std;
template <class T>
TComplex<T>::TComplex(){

}
template<class T>
T TComplex<T>::GetValueImg() {
    return m_imag;

}

template<class T>
T TComplex<T>::GetValueReal() {
    return m_real;
}

template<class T>
void TComplex<T>::SetValueImg(T m_imag) {
    this->m_imag=m_imag;
}

template<class T>
void TComplex<T>::SetValueReal(T m_real) {
    this->m_real=m_real;
}

//template class TComplex<int>;








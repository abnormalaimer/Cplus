//
// Created by 25149 on 24-8-17.

#include <iostream>
#include "fraction.h"

int Fraction::s_assigns=0;
int Fraction::s_copies=0;
int Fraction::s_ctors=0;

Fraction::Fraction(const Fraction& other)
:m_Number(other.m_Number),m_Demon(other.m_Demon) {
    ++s_copies;
}
Fraction &Fraction::operator=(const Fraction& other) {
    if (this!=&other) {
        m_Number=other.m_Number;
        m_Demon=other.m_Demon;
        ++s_assigns;
    }
    return *this;
}

QString Fraction::report() {
    std::cout<< "/" << std::endl;
}

Fraction Fraction::multiply(Fraction f2) {
    return Fraction(0, 0);
}





//
// Created by 25149 on 24-8-17.
//

#ifndef FRACTION_H
#define FRACTION_H
#include <qstring.h>


class Fraction {
public:
    Fraction(int n,int d);
    Fraction(const Fraction& other);
    Fraction& operator=(const Fraction& other);
    Fraction multiply(Fraction f2);
    static QString report();
private:
    int m_Number,m_Demon;
    static int s_assigns;
    static int s_copies;
    static int s_ctors;

};



#endif //FRACTION_H

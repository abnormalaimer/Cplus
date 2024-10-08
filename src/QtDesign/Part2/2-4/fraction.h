//
// Created by 25149 on 24-8-13.
//

#ifndef FRACTION_H
#define FRACTION_H
#include <qstring.h>


class fraction {
public:
    void set(int numerator,int denominator);
    double toDouble() const;
    QString toString() const;
private:
    int m_Numberator;
    int m_Denominator;
};



#endif //FRACTION_H

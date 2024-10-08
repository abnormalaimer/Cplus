//
// Created by 25149 on 24-8-13.
//

#include "fraction.h"

void fraction::set(int nn, int nd) {
    m_Numberator=nn;
    m_Denominator=nd;

}

double fraction::toDouble() const {
    return 1.0*m_Numberator/m_Denominator;
}

QString fraction::toString() const {
    return QString("%1/%2").arg(m_Numberator).arg(m_Denominator);
}


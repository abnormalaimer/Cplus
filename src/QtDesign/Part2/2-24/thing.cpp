//
// Created by 25149 on 2024/8/25.
//

#include "thing.h"
#include <QTextStream>
void Thing::set(int num, char c) {
    m_Number=num;
    m_Character=c;
}

void Thing::increment() {
    ++m_Number;
    ++m_Character;
}

void Thing::show() {
    QTextStream cout(stdout);
    cout<<m_Number<<'\t'<<m_Character<<Qt::endl;

}

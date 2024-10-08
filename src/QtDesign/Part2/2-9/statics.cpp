//
// Created by 25149 on 24-8-15.
//

#include "statics.h"

#include <iostream>
#include <ostream>

int Thing::s_Count=0;
Thing::Thing(int a, int b)
    :m_First(a),m_Second(b) {
        ++s_Count;
    ++s_Count;
    }
Thing::~Thing() {
    --s_Count;
}
void Thing::display() const {
    using namespace std;
    cout <<m_First<<"$$"<<m_Second;
}

void Thing::showCount() {
    using namespace std;
    cout << "count = "<<s_Count<<endl;
}





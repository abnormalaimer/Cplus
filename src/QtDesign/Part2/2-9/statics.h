//
// Created by 25149 on 24-8-15.
//

#ifndef STATIC_H
#define STATIC_H



class statics {

};
class Thing {
public:
    Thing(int a,int b);
    ~Thing();
    void display() const;
    static void showCount();
private:
    int m_First,m_Second;
    static int s_Count;
};



#endif //STATIC_H

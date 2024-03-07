#include <iostream>

class A {
    int x;
public:
    A(int x) : x(x) {}
    int getX() { return x; }
    void setX(int x) { this->x = x; }
};

int main(){
    A a(5);
    const A& b = a;
    b.setX(10);
    return 0;
}
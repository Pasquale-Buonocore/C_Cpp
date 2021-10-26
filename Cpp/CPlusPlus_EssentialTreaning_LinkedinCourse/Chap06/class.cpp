// class.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

// a very simple class
class C1 {
    int a = 0;
    int b = 0;
    int c = 0;
public:
    C1();
    C1(int a, int b , int c);
    void getvalue();

};

void C1::getvalue() { 
    printf("The values are a: %d, b: %d, c: %d \n", a,b,c);
}

C1::C1(int d, int e, int f): a(d), b(e), c(f){
    puts("Initialized");
}

C1::C1(){
    puts("Default constructor");
}


int main() {
    C1 o1;
    C1 o2(1,2,3);

    o1.getvalue();
    o2.getvalue();
    return 0;
}

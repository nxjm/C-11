#include "Derived.h"
using namespace std;

Derived::Derived(){
    cout << "Derived::Derived()" << endl;
}

Derived::~Derived(){
    cout << "Derived::~Derived()" << endl;
}

void Derived::func1(){
    cout << "Derived::func1()" << endl;
}

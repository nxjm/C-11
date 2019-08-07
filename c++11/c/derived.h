#ifndef DERIVED_H_
#define DERIVED_H_
#include <iostream>
#include "Base.h"

class Derived{
public:
    Derived();
    virtual ~Derived();
    void func1();

    Base *pb;
};

#endif // DERIVED_H_

#include "Base.h"
#include "Derived.h"

using namespace std;

int main()
{
    Derived pd;
    pd.func1();
    pd.pb->func1();
    return 0;
}

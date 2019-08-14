#include "Base.h"
#include "Derived.h"
#include <iostream>
#include <cstring>
using namespace std;

void avelue(string words)
{
    int num = 0;
    int len = words.length();
    for (int i = 0; i < len; i++){
        if (words[i] == ' '){
            num++;
        }
    }
    cout << "len is " << len << ", num is " << num << endl;
    cout.flags(ios::fixed);
    cout.precision(2);
    cout << ((float)(len - num) / (float)(num + 1)) << endl;
}

int main()
{
    string words = "who love bear";
    avelue(words);

    Derived pd;
    pd.func1();
    pd.pb->func1();
    return 0;
}

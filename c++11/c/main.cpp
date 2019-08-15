#include "Base.h"
#include "Derived.h"
#include <iostream>
#include <cstring>
using namespace std;

//计算句子的平均值
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

//判断正整数是否是连续正整数数字之和
bool judge(int n){
    int x = 0;
    int k = 2;
    int result = 0;
    while(true){
        x = (n - k * (k - 1) / 2) / k;
        result = (n - k * (k - 1) / 2) % k;
        if (x <= 0) break;
        if (!result) return true;
        k++;
    }
    return false;
}

int main()
{
    string words;
    cout << "please input a sentence\n";
    getline(cin, words);
    avelue(words);

    int n = 0;
    cout << "please input a num\n";
    cin >> n;
    bool ret = judge(n);
    cout << (ret ? "YES" : "NO") << endl;

    Derived pd;
    pd.func1();
    pd.pb->func1();
    return 0;
}

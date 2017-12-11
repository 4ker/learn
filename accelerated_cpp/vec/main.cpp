#include <iostream>
#include <memory>
#include <vector>
#include "str.h"
#include "vec.h"

using namespace std;

int main()
{
    Str s = "hello";
    Vec<int> a;
    
    for(int i = 0; i < 10; ++i)
        a.push_back(i);

    for(int i = 0; i < a.size(); ++i)
        cout << a[i] << " ";
    cout << endl;

    Str a1 = "good day";
    Str b1 = "bood day";
    cout << "test input:";
    cin >> s;
    cout << "test output:" << s << endl;
    cout << "compare:" << (a1 == b1) << endl;
    return 0;
}

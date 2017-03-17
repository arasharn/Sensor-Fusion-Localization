#include <iostream>
#include <string>
#include "PrintString.h"

// it's also worth noting that `string` and `cout` live in namespace std, eg. `std::string`.
// with the declaration on the next line, you can just use `string` and `cout`.
using namespace std;

void PrintString(string str, int n)
{
    for (int i = 0; i < n; i++) {
        cout << str << endl;
    }
}

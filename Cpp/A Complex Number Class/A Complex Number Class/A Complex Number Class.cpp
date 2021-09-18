#include <iostream>
#include "complex.h"

using namespace std;
using namespace lamvan;

int main()
{
    
    Complex c1(3,4);
    Complex c2(2, 3);
    Complex c3 = c1 + c2;
    cout << c3+2.5 << endl;
    cout << *c1 << endl;

    return 0;
}

#include <iostream>

using namespace std;

void test()
{
    cout << "Hello World! -- no parameters" << endl;
}

void test2()
{
    cout << "Hello -- no parameters" << endl;
}

void test1(int value)
{
    cout << "Hello -- have parameters " << value << endl;
}


int main()
{
    test();

    cout << endl;

    //function pointer 
    void (*pTest)();//can = test;
    pTest = &test; // can = test >> name of function is also address of its;

    //call function pointer >> not *pTest();
    (*pTest)();

    cout << endl;

    //change function

    pTest = test2;
    pTest();

    cout << endl;

    //function takes parameters
    test1(10);
    void (*pTest1)(int);
    pTest1 = test1;
    pTest1(9);


    cout << endl;

    //but not with
    // 
    //void* pTest1();
    //  pTest1 = &test;
    // 
    // void* pTest2;
    //  pTest2 = &test;
   
    

    




    return 0;
}

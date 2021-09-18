#include <iostream>
#include <exception>
#include <typeinfo>       

using namespace std;


struct Test 
{
    virtual bool operator()(string const& text) = 0;
    virtual ~Test() {}

};

struct TestString : public Test
{
     bool operator() (string const& text)
     {
        return text == "lion";
     } 
};

void check(string const& inputTexts, Test& testCase)
{
    if (testCase(inputTexts))
    {
        cout << "test correct!" << endl;
    }
    else
    {
       // cout << "test faile!!!" << endl;
        throw(bad_exception);
    }

}


int main()
{
    string texts = "Hello";
    TestString test1;
    cout << test1(texts);

    cout << endl;
    TestString checkcase1;
    string texts2 = "lion";
   // check(texts2, checkcase1);

    cout << endl;

    //check(texts, checkcase1);

    try
    {
        check(texts2, checkcase1);
          // throws a bad_typeid exception
    }
    catch (exception& e)
    {
        cout << e.what();
    }
    return 0;
}

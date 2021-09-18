#include <iostream>

using namespace std;

//template class
template<class T>//template type; class or typename
class Test {
private:
	T obj;

public:
	Test(T obj) {
		this->obj = obj;
	}
	void print()
	{
		cout << obj << endl;
	}
};

//template function
template<typename T>
void print(T n) 
{
	cout <<"Template ver: " << n << endl;
}

void print(char* pChar)
{
	cout << "Non-Template ver: " << pChar << endl;
}

void print(int num)
{
	cout << "Non-Template ver: " << num << endl;
}

//hmmmm
template<class T>
void show()
{
	cout <<"show T's construction: " << T() << endl;
}


int main()
{
	Test<string> test1("hello world!");
	test1.print();

	cout << endl;

	//function
	print<string>("Hello");
	print<int>(123);
	print("Hi there");

	cout << endl;

	//ver
	print(10);
	print<>(10);

	cout << endl;

	print("H");
	print<>("H");
	print("hello");

	cout << endl;

	//hmm
	// canot show(); or show<>();
	//but....
	show<int>();

}
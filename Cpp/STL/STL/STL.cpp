#include <iostream>
#include <map>
using namespace std;

class Person
{
private:
    
    int age;

public:
    string name;
    Person() : name(""), age(0)
    {
    }

    Person(Person const& other) :name(other.name), age(other.age)
    {
    }

    Person(string name, int age) :name(name), age(age)
    {
    }

    void print() const
    {
        cout << name << " and " << age << flush;
    }
    bool operator<(const Person& other) const
    {
        if (name == other.name)
        {
            return age < other.age;
        }
        else 
        {
            return name < other.name;
        }
    }

};

int main()
{
    map<Person,int> person;

    person.insert(make_pair(Person("hecker", 12),0));
    person.insert(make_pair(Person("heker", 122), 1));
    person.insert(make_pair(Person("he1ker", 132), 2));

    for (auto it : person)
    {
        cout << it.second << " : " << flush;
        (it.first).print();
        cout << endl;
    }
}

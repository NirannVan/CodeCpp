#include<iostream>
#include<map>
using namespace std;

class Person
{
private:
    string name;
    int age;

public:
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
        else {
            return name < other.name;
        }
    }

    const Person& operator=(const Person& other)
    {
        name = other.name;
        age = other.age;
        return *this;
    }

    friend ostream& operator<<(ostream& out, const Person &person)
    {
        out << person.name << " : " << person.age;
        return out;
    }
};



int main()
{
    map<Person,int> people;

    people[Person("Hecker", 13)] = 123;
    people[Person("0hecker", 23)] = 1;
    people[Person("hecker", 30)] = 3;
    people[Person("heyy", 40)] = 29;
    people.insert(make_pair(Person("hecker", 12), 0));
    people.insert(make_pair(Person("heker", 122), 1));
    people.insert(make_pair(Person("he1ker", 132), 2));

    for (auto it : people)
    {
        cout << it.first <<endl;
    }
    

    return 0;
}
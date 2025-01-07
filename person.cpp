#include <iostream>
using namespace std;

class Person
{
    private:
        string name;
        int age;
    public:
        //set functions
        void set_name(string new_name)
        {
            name = new_name;
        }
        void set_age(int new_age)
        {
            if (new_age > 0)
                age = new_age;
            else
                cout << "Invalid age!!" << endl;
        }
        //get functions
        string get_name()
        {
            return name;
        }
        int get_age()
        {
            return age;
        }
};

int main()
{
    Person person;

    person.set_name("Ahmet");
    person.set_age(28);

    cout << "Name: " << person.get_name() << endl;
    cout << "Age: " << person.get_age() << endl;
    return 0;
}
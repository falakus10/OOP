#include <iostream>
using namespace std;

class human
{
	private:
		string name;
		int age;
	public:
		human(string name_, int age_)
		{
			name = name_;
			age = age_;
		}

		void get_human()
		{
			cout << "Name: " << name << endl;
			cout <<"Age: " << age << endl;
		}

		void set_age(int age_)
		{
			age = age_;
		}

		~human()
		{
			cout << "Object has been destroyed"<< endl;
		}
};

int main()
{
	human *ahmet = new human("Ahmet", 27);
	ahmet -> get_human();
	ahmet -> set_age(57);
	ahmet -> get_human();
	delete ahmet;
	return 0;
}
#include <iostream>
using namespace std;

class Hayvan 
{
	public:
		virtual void ses_cikar()
		{
			cout << "Hayvan bir ses cikariyor" << endl;
		}
};

class Kopek : public Hayvan 
{
	void ses_cikar() override
	{
		cout << "kopek havliyor" << endl;
	}
};

class Kedi : public Hayvan 
{
	void ses_cikar() override
	{
		cout << "Kedi miyavliyor" << endl;
	}
};


int main()
{
	Hayvan *ptr;
	Kedi kedi;
	Kopek kopek;

	ptr = &kedi;
	ptr -> ses_cikar();

	ptr = &kopek;
	ptr -> ses_cikar();

	return 0; 
}
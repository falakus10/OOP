#include <iostream>
using namespace std;

class Temel
{
	public:
		virtual void yazdir()
		{
			cout << "Temel sinif fonksiyonu" << endl;
		}
};

class Turetilmis : public Temel
{
	public :
		void yazdir() override
		{
			cout << "turetilmis sinif fonskiyonu " << endl;
		}
};


int main()
{
	Temel *ptr;
	Turetilmis obj;
	ptr = &obj;

	ptr -> yazdir();
	return 0;
}
#include <iostream>
using namespace std;

class tarih
{
	private:
		int gun;
		int ay;
		int yil;
	public:
		tarih(int gun_, int ay_, int yil_)
		{
			gun = gun_;
			ay = ay_;
			yil = yil_;
		}
		void get_tarih()
		{
			cout << "Tarih: " << gun << "." << ay << "." << yil <<endl;
		}
		void set_tarih(int gun_, int ay_, int yil_)
		{
			gun = gun_;
			ay = ay_;
			yil = yil_;
		}
		~tarih()
		{
			cout << "Nesne kaldirildi" <<endl;
		}
};

int main()
{
	tarih *bugun = new tarih(26, 11, 2024);
	bugun -> get_tarih();
	bugun -> set_tarih(27, 11, 2004);
	bugun -> get_tarih();
	cout << sizeof(tarih)<< endl;

	delete bugun;
	return 0;
}
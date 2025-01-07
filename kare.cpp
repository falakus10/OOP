#include <iostream>
using namespace std;

class Kare 
{
	friend class Dikdortgen;
	private:
		int kenar;
	public:
		Kare(int a) : kenar(0) 
		{
			kenar = a;
		}
};

class Dikdortgen
{
	private:
		int genislik;
		int yukseklik;
	public:
		void setKenarlar(int genis, int yuksek);
		int hesapAlan();
		void cevirKare(Kare &kare);
};

void Dikdortgen :: setKenarlar(int genis, int yuksek)    
	{
		genislik = genis;
		yukseklik = yuksek;
	}

int Dikdortgen :: hesapAlan()
{
	return genislik * yukseklik;
}

void Dikdortgen :: cevirKare(Kare &kare)
{
	genislik = kare.kenar;
	yukseklik = kare.kenar;
}

int main()
{
	Dikdortgen dikdortgen1;
	dikdortgen1.setKenarlar(4, 3);
	cout << dikdortgen1.hesapAlan() << endl;

	Kare kare1(10);
	dikdortgen1.cevirKare(kare1);
	cout << dikdortgen1.hesapAlan() << endl;
	return 0;
}
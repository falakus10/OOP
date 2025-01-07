#include <iostream>
using namespace std;

class Sekil
{
    private:
    protected:
        int genislik, yukseklik;
    public:
        Sekil(int gen, int yuk):genislik(gen), yukseklik(yuk) {}
        void setYaz(int gen, int yuk)
        {
            genislik = gen;
            yukseklik = yuk;
        }
        void getOku()
        {
            cout << "Nesnenin genisligi: "<< genislik <<endl;
            cout << "Nesnenin yuksekligi: "<< yukseklik <<endl;
        }
};

class Dikdortgen : public Sekil
{
    private:
    protected:
    public:
        Dikdortgen(int gen, int yuk): Sekil(gen, yuk) {}
        int getAlan()
        {
            return (genislik * yukseklik);
        }
};

int main()
{
    Sekil s1(5, 5);
    Dikdortgen *d1 = new Dikdortgen(3, 4);
    d1 -> getOku();
    cout << "Dikdortgenin Alani: "<<d1 ->getAlan() << endl;
    d1 -> setYaz(10, 20);
    d1 -> getOku();
    cout << "Dikdortgenin Alani: "<<d1 ->getAlan() << endl;
    s1.getOku();
    return 0;
}
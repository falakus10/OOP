#include <iostream>
using namespace std;

class Kutu
{
    private:
        double uzunluk;
        double genislik;
        double yukseklik;
        double hacim;
    public:
        Kutu() : uzunluk(0), genislik(0), yukseklik(0), hacim(0) {}
        Kutu(double u, double g, double y, double h) : uzunluk(u), genislik(g), yukseklik(y), hacim(h) {}
        void setOzellikler(double u, double g, double y)
        {
            uzunluk = u;
            genislik = g;
            yukseklik = y;
            hacim = uzunluk * yukseklik * genislik;
        }

        void yaz()
        {
            cout << "Hacim = " << hacim << endl;
        }
        Kutu operator+(const Kutu &obje)
        {
            return Kutu(0, 0, 0, hacim + obje.hacim);
        }

};

int main()
{
    Kutu *k1 = new Kutu();
    Kutu *k2 = new Kutu();
    Kutu *k3 = new Kutu();
    Kutu k4;

    k1->setOzellikler(2.3, 5.6, 7.9);
    k2->setOzellikler(4.5, 7.5, 2.3);
    k3->setOzellikler(5.4, 3.4, 4.8);

    k4 = *k1 + *k2 + *k3;
    k1 -> yaz();
    k2 -> yaz();
    k3 -> yaz();
    k4.yaz();

    delete k1;
    delete k2;
    delete k3;
    return 0;
}
#include <iostream>
using namespace std;

class Sekil 
{
    private:
    protected:
        int genislik;
        int yukseklik;
    public:
    Sekil(int g, int y): genislik(g), yukseklik(y) {}
    void setGenislik(int g)
    {
        genislik = g;
    }
        void setYukseklik(int y)
    {
        yukseklik = y;
    }
    int getGenislik()
    {
        return (genislik);
    }
    int getYukseklik()
    {
        return (yukseklik);
    }
};

class Deger
{
    private:
    protected:
        int birimDeger;
    public:
    void setBirimDeger(int deger)
    {
        birimDeger = deger;
    }

    int getBirimDeger()
    {
        return (birimDeger);
    }

    int hesaplaDeger(int alan)
    {
        return (birimDeger * alan);
    }
};

class Dikdortgen : public Sekil, public Deger
{
    private:
    protected:
    public:
        Dikdortgen(int gen, int yuk, int deger): Sekil(gen, yuk) 
        {
            setBirimDeger(deger);
        }
        int getAlan()
        {
            return (genislik * yukseklik);
        }
};

int main()
{
    Dikdortgen *d1;
    d1 = new Dikdortgen(3, 5, 10);
    d1 -> setBirimDeger(5);
    cout << "Alan: " << d1 -> getAlan() << endl;
    cout << "Hesaplanan değer: " << d1 -> hesaplaDeger(d1->getAlan()) << endl;
    delete d1;
    return 0;
}
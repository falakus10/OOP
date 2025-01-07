#include <iostream>
using namespace std;

class SinifA
{
    private:
        int genislik;
        int yukseklik;
    public:
        SinifA(int g = 1, int y = 1): genislik(g), yukseklik(y) {}

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

class SinifB : public SinifA
{
    private:
    public:
        int getAlanB()
        {
            return (g * y);
        }
};

class SinifC : protected SinifA
{
    private:
    public:
        int getAlanC()
        {
            return (genislik * yukseklik);
        }
};

class SinifD : private SinifA
{
    private:
    public:
        SinifD(int g, int y): genislik(g), yukseklik(y) {}
        int getAlanD()
        {
            return (genislik * yukseklik;)
        }
};

int main()
{
    SinifB *b;
    SinifC *c;
    SinifD *d;

    b = new SinifB();
    c = new SinifC();
    d = new SinifD();

    cout << "Alan B:" << b -> getAlanB() << endl;
    cout << "Alan C:" << c -> getAlanC() << endl;
    cout << "Alan D:" << d -> getAlanD() << endl;
    return 0;
} ÇALIŞMIYOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
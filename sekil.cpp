#include <iostream>
using namespace std;

class Sekil
{
    public:
        virtual void ciz()
        {
            cout << "Sekil ciziliyor..." << endl;
        }
};

class Dikdortgen : public Sekil
{
    public:
        void ciz() override
        {
            cout << "Dikdortgen ciziliyor..." << endl;
        }
};

class Cember : public Sekil
{
    public:
        void ciz() override
        {
            cout << "Cember ciziliyor..." << endl;
        }
};

int main()
{
    Sekil *sekil1 = new Dikdortgen();
    Sekil *sekil2 = new Cember();

    sekil1 -> ciz();
    sekil2 -> ciz();

    delete sekil1;
    delete sekil2;
    return 0;
}
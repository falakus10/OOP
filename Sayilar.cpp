#include <iostream>
using namespace std;

class Sayilar
{
        int deger;
    public:
        Sayilar(int d) : deger(d){}
        Sayilar operator + (Sayilar obj)
        {
            return (Sayilar (deger + obj.deger));
        }
        void yazdir()
        {
            cout << "Deger: "<< deger <<endl;
        }
};

int main()
{
    Sayilar s1(10), s2(20);
    Sayilar s3 = s1 + s2;
    s3.yazdir();
    return 0;
}
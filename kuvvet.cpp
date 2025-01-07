#include <iostream>
using namespace std;

class Kuvvet
{
    private:
        double x;
        double y;
        double z;
    public:
        Kuvvet(double x = 0, double y = 0, double z = 0) : x(x), y(y), z(z) {}
        Kuvvet operator+(const Kuvvet &other) const
        {
            return Kuvvet(x + other.x, y + other.y, z + other.z);
        }
        void yazdir()
        {
            cout << "Kuvvet: (" << x << ", " << y << ", " << z << ")" << endl;
        }
};

int main()
{
    Kuvvet f1 (3, 5, 7);
    Kuvvet f2 (8, 4, 7);

    Kuvvet toplam = f1 + f2;
    cout << "Birinci Kuvvet: ";
    f1.yazdir();

    cout << "Ikinci Kuvvet: ";
    f2.yazdir();

    cout << "Toplam Kuvvet: ";
    toplam.yazdir();

}
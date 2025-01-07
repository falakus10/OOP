#include <iostream>
using namespace std;

class Vektor3D
{
    private:
        double x;
        double y;
        double z;
    public:
        Vektor3D (double x = 0, double y = 0, double z = 0) : x(x), y(y), z(z) {}

        Vektor3D operator + (const Vektor3D &other) const
        {
            return Vektor3D(x + other.x, y + other.y, z + other.z);
        }

        Vektor3D operator - (const Vektor3D &other) const
        {
            return Vektor3D(x - other.x, y - other.y, z - other.z);
        }

        friend  ostream& operator << (ostream& os, const Vektor3D vektor)
        {
            os << "(" << vektor.x << ", " << vektor.y << ", " << vektor.z << ")" << endl;
            return os;
        }
};

int main()
{
    Vektor3D baslangic(18.4, 26.0, 16.3);
    Vektor3D hedef(5.7, 14.0, 12.7);

    Vektor3D hareket = hedef - baslangic;
    Vektor3D yeniPozisyon = baslangic + hareket;

    cout << "Baslangic pozisyonu: " << baslangic << endl;
    cout << "Hedef pozisyonu: " << hedef << endl;
    cout << "Hareket vektoru "<< hareket << endl;
    cout << "Yeni pozisyon " << yeniPozisyon << endl;
    return 0;
}
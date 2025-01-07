#include <iostream>
using namespace std;

class banka_hesabi
{
    private:
        string hesap_sahibi;
        double bakiye;
    public:
        banka_hesabi (string isim, double ilk_bakiye)
        {
        hesap_sahibi = isim;
        bakiye = ilk_bakiye;
        }
        void bakiye_goster()
        {
            cout << "Hesabinizda "<< bakiye << " TL vardir."<< endl;
        }

        void para_ekle(int miktar)
        {
            bakiye += miktar;
            cout << "Para yatirma işlemi tamamlandi."<< endl;
        }

        void para_cek(int miktar)
        {
            if (bakiye > miktar)
            {
                bakiye -= miktar;
                cout << "Para cekme islemi tamamlandi."<< endl; 
            }
            else
                cout << "Yetersiz bakiye."<< endl;
        }

        ~banka_hesabi()
        {
            cout << "Nesne Kaldilirdi."<<endl;
        }
};

int main()
{
    banka_hesabi *garanti = new banka_hesabi("Ferhat", 2000);
    garanti -> bakiye_goster();
    garanti -> para_ekle(2500);
    garanti -> para_cek(1754);
    garanti -> bakiye_goster();
    delete garanti;
}
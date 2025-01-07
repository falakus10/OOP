#include <iostream>
using namespace std;

class Sensor
{
    public:
        virtual void readData() = 0;
        virtual void calibrate() = 0;
        virtual ~Sensor() {}
};

class Basinc : public Sensor
{
    public:
        void readData() override
        {
            cout << "Basinc verisi okunuyor" << endl;
        }
        void calibrate() override
        {
            cout << "Basinc sensoru kalibre ediliyor"<< endl;
        } 
};

class Sicaklik : public Sensor
{
    public:
        void readData() override
        {
            cout << "Sicaklik verisi okunuyor" << endl;
        }
        void calibrate() override
        {
            cout << "Sicaklik sensoru kalibre ediliyor"<< endl;
        } 
};

class UltraSonik : public Sensor
{
    public:
        void readData() override
        {
            cout << "Ultrasonik verisi okunuyor" << endl;
        }
        void calibrate() override
        {
            cout << "Ultrasonik Sensor kalibre ediliyor"<< endl;
        } 
};

int main()
{
    Sensor *basinc = new Basinc();
    Sensor *sicaklik = new Sicaklik();
    Sensor *ultrasonik = new UltraSonik();

    basinc -> readData();
    basinc -> calibrate();

    sicaklik -> readData();
    sicaklik -> calibrate();

    ultrasonik -> readData();
    ultrasonik -> calibrate();

    delete basinc;
    delete sicaklik;
    delete ultrasonik;

    return 0;
}
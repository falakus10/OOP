#include <iostream>
#include <string>
using namespace std;

class Motor
{
    public:
        virtual void start() = 0;
        virtual void stop() = 0;
        virtual void setSpeed(int speed) = 0;

        virtual ~Motor() {}
};


class DCMotor : public Motor
{
    public:
        void start() override 
        {
            cout << "DC motor started" << endl;
        }
        void stop() override
        {
            cout << "DC motor stoped" << endl;
        }
        void setSpeed(int speed)
        {
            cout <<"DC motor speed set to " << speed << " m/s" << endl;
        }
};

class ServoMotor : public Motor
{
    public:
        void start() override 
        {
            cout << "Servo motor started" << endl;
        }
        void stop() override
        {
            cout << "Servo motor stoped" << endl;
        }
        void setSpeed(int speed)
        {
            cout <<"Servo motor speed set to " << speed << " m/s" << endl;
        }
};

class StepMotor : public Motor
{
    public:
        void start() override 
        {
            cout << "Step motor started" << endl;
        }
        void stop() override
        {
            cout << "Step motor stoped" << endl;
        }
        void setSpeed(int speed)
        {
            cout <<"Step motor speed set to " << speed << " m/s" << endl;
        }
};

int main()
{
    Motor *motor[] = {new DCMotor(), new ServoMotor(), new StepMotor()};

    motor[0] -> start();
    motor[0] -> stop();
    motor[0] -> setSpeed(120);

    motor[1] -> start();
    motor[1] -> stop();
    motor[1] -> setSpeed(130);

    motor[2] -> start();
    motor[2] -> stop();
    motor[2] -> setSpeed(60);

    delete *motor;
    return 0;
}
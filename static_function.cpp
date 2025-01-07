#include <iostream>
using namespace std;

class example
{
    private:
        static int count;

    public:
        example()
        {
            count++;
        }

    static void show()
    {
        cout << "Number of objects: " << count <<endl;
    }
};

int example :: count = 0;

int main()
{
    example e1, e2, e3;
    example :: show();

    return 0;
}
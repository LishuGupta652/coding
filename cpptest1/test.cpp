#include <iostream>
using namespace std;

class Lishu
{
public:
    void cool()
    {
        cout << "cool" << endl;
    }
};

int main()
{
    Lishu gupta;
    gupta.cool();
    cout << "hello world";
    const int i = 9;
    return 0;
}
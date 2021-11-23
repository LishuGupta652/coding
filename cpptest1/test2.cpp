#include <iostream>
#include <string>
#include "Lishu.h"

using namespace std;

class Lishu
{

public:
    Lishu()
    {
        cout << "Lishu is created";
    }
    Lishu(string a)
    {
        name = a;
    }
    void setName(string x)
    {
        name = x;
    }
    string getName()
    {
        return name;
    }

private:
    string name;
};

int main()
{
    Lishu gupta;
    LishuGupta gupta3;
    Lishu gupta2("lishu");
    cout << gupta2.getName();

    cout << endl;
    return 0;
}
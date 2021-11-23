#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    cout << "Random No generator" << endl;
    srand(time(0));

    cout << rand() % 10;

    cout << endl;
    return 0;
}
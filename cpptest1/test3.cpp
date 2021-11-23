#include <iostream>
using namespace std;

int main()
{
    cout << "test" << endl;
    double lishu[10];

    cout << sizeof(lishu) / sizeof(lishu[0]) << endl;

    int lishu1[10];
    int *bp0= &lishu1[0];

    cout << "ilshu-0 is at " << bp0 << endl;
    cout
        << endl;
    return 0;
} 
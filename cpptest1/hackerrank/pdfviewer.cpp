#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string name;
    vector<int> h(26);
    for (int i = 0; i < 26; i++)
    {
        scanf("%d", &h[i]);
    }
    cin >> name;

    int ans = 0;
    for (char c : h)
    {
        ans = max(ans, h[c - 'a']);
    }
    ans = ans * h.size();
    cout << ans << endl;
    return 0;
}
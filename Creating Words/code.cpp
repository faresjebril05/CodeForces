#include <iostream>
#include <string>
using namespace std;

void fswap(string &a, string &b)
{
    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;
}

int main()
{
    int n;

    cin >> n;
    string *one = new string[n];
    string *two = new string[n];
    for (int i = 0; i < n; i++)
    {
        cin >> one[i] >> two [i];
        fswap(one[i], two[i]);
    }
    for (int i = 0; i < 0; i++)
        cout << one[i] << " " << two[i];
    return (0);
}
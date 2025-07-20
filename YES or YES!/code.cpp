#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string  toLowerCase(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] + 32;
    }
    return s;
}

int main()
{
    int n;

    cin >> n;
    string *array = new string[n];
    for (int i = 0; i < n; i++)
        cin >> array[i];
    for (int i = 0; i < n; i++)
    {
        if (toLowerCase(array[i]) == "yes")
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
    return (0);
}
#include <iostream>
#include <string>
using namespace std;

int is_readable(string s, string s2)
{
    int i = 0;
    int j = s.length() - 1;

    if ((s2.length() - 1) != j)
        return (-1);
    
    while (s[i] != '\0' && s2[i] != '\0')
    {
        if (s[i] != s2[j])
            return (s[i] - s2[j]);
        i++;
        j--;
    }
    return (0);
}

int main()
{
    string s;
    string t;

    cin >> s >> t;
    if (is_readable(s, t) == 0)
        cout << "YES";
    else
        cout << "NO";
    return (0);
}
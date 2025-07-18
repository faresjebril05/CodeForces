#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    int upper,lower;

    upper = 0;
    lower = 0;
    cin>>s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            lower++;
        if (s[i] >= 'A' && s[i] <= 'Z')
            upper++;
    }
    for (int i = 0; i < s.length(); i++)
    {
        if (upper > lower)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
                s[i] = s[i] - 32;
        }
        else
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
                s[i] = s[i] + 32;
        }
    }
    cout<<s;
}
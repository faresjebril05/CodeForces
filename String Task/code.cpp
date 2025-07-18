#include <iostream>
#include <string>
using namespace std;

int main()
{
    string x;
    string result = "";
    cin>>x;
    for (int i = 0; i < x.length(); i++)
    {
        if (x[i] >= 'A' && x[i] <= 'Z')
        {
            if (x[i] == 'A' || x[i] == 'O' || x[i] == 'E' || x[i] == 'Y' || x[i] == 'U' || x[i] == 'I')
                continue;
            else
            {
                result += '.';
                result += (x[i] + 32);
            }
        }
        if (x[i] >= 'a' && x[i] <= 'z')
        {
            if (x[i] == 'a' || x[i] == 'o' || x[i] == 'e' || x[i] == 'y' || x[i] == 'u' || x[i] == 'i')
                continue;
            else
            {
                result += ".";
                result += x[i];
            }
        }
    }
    cout<<result;
}
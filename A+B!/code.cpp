#include <iostream>
#include <string>
using namespace std;

int getResult(string s)
{
    int i;
    int result;

    i = 0;
    result = 0;
    while (s[i] != '\0')
    {
        if (s[i] >= '0' && s[i] <= '9')
            result = result + (s[i] - '0');
        i++;
    }
    return (result);
}

int main()
{
    int c;

    cin >> c;
    string *array = new string[c];
    for (int i = 0; i < c; i++)
        cin >> array[i];
    for (int i = 0; i < c; i++)
        cout << getResult(array[i]) << endl;
}
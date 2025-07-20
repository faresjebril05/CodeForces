#include <iostream>
#include <string>
using namespace std;

int customatoi(string s)
{
    int result;
    int i;
    
    i = 0;
    result = 0;
    while (s[i] != '\0')
    {
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
        cin>>array[i];
    for (int i = 0; i < c; i++)
    {
        cout << customatoi(array[i]) << endl;
    }
}
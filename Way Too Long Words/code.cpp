#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;

    n = 0;
    cin>>n;
    string *array = new string[n];
    for (int i = 0; i < n; i++)
        cin>>array[i];
    for (int i = 0; i < n; i++)
    {
        if (array[i].length() > 10)
        {
            cout<<array[i][0]<<(array[i].length() - 2)<<array[i][array[i].length() - 1];
        }
        else
            cout<<array[i];
        cout<<endl;
    }
}
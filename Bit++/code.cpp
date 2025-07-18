#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    int x;
    x = 0;
    cin>>n;
    string *array = new string[n];
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
        for (int j = 0; j < array[i].length(); j++)
        {
            if (array[i][j] == '+')
            {
                x++;
                break ;
            }
            if (array[i][j] == '-')
            {
                x--;
                break ;
            }
        }
    }
    cout<<x;
    delete[] array;
    return (0);
}
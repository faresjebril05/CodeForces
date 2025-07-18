#include <iostream>
using namespace std;

int main()
{
    int n;
    int odd;
    int even;

    odd = 0;
    even = 0;
    cin>>n;
    int *array = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
        if (array[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    for (int i = 0; i < n; i++)
    {
        if (even > odd)
        {
            if (array[i] % 2 != 0)
            {
                cout<<(i + 1);
                break;
            }
        }
        else
        {
            if (array[i] % 2 == 0)
            {
                cout<<(i + 1);
                break;
            }
        }
    }
}
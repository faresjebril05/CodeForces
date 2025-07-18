#include <iostream>
using namespace std;

int main()
{
    int n;

    cin >> n;
    int *array = new int[n];
    for (int i = 0; i < n; i++)
        cin >> array[i];
    for (int i = 0; i < n; i++)
    {
        if (array[i] >= 1900)
            cout << "Division 1" << endl;
        else if (array[i] >= 1600 && array[i] <= 1899)
            cout << "Division 2" << endl;
        else if (array[i] >= 1400 && array[i] <= 1599)
            cout << "Division 3" << endl;
        else
            cout << "Division 4" << endl;
    }
    delete[] array;
}
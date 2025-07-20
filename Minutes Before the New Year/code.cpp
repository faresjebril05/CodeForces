#include <iostream>
using namespace std;

int main()
{
    int n;
    int h, m, minutesResult;

    cin >> n;
    int *result = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> h >> m;
        minutesResult = ((24 - h) * 60) - m;
        result[i] = minutesResult;
    }
    for (int i = 0; i < n; i++)
        cout << result[i] << endl;
    return (0);
}
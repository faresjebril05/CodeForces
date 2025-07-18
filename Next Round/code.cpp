#include <iostream>
using namespace std;

int main()
{
    int n,k;
    int qualified;

    qualified = 0;
    cin >> n >> k;
    int *scores = new int[n];
    for (int i = 0; i < n; i++)
        cin >> scores[i];
    for (int i = 0; i < n; i++)
    {
        if (scores[i] >= scores[k - 1] && scores[i] > 0)
            qualified++;
    }
    cout << qualified;
}
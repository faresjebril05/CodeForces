#include <iostream>
#include <string>
using namespace std;

int main()
{
    string equation;

    cin >> equation;
    if (equation.length() < 3)
    {
        cout << equation;
        return (0);
    }
    for (int i = 0; i < equation.length(); i += 2)
    {
        for (int j = 0; j < equation.length() - 2; j += 2)
        {
            if (equation[j] > equation[j + 2])
            {
                char temp = equation[j];
                equation[j] = equation[j + 2];
                equation[j + 2] = temp;
            }
        }
    }
    cout << equation;
    return (0);
}
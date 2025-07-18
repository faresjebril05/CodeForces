#include <iostream>
#include <string>
#include <set>
using namespace std;

int main()
{
    string s;

    set<char> letters;
    cin >> s;
    for (char letter : s)
        letters.insert(letter);
    if (letters.size() % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
}
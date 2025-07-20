#include <iostream>
#include <string>
#include <set>
#include <cctype>
using namespace std;

int main()
{
    int n;
    string s;

    set<char> chars;
    cin >> n >> s;

    for (char letter : s)
        chars.insert(tolower(letter));
    if (chars.size() == 26)
        cout << "YES";
    else
        cout << "NO";
    return (0);
}
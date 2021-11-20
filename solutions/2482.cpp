#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    map<string, string> messages;
    string name, message, language, y_u_do_this_cpp;
    
    cin >> n;
    getline(cin, y_u_do_this_cpp);
    while (n--)
    {
        getline(cin, language);
        getline(cin, message);
        messages[language] = message;
    }
    cin >> m;
    getline(cin, y_u_do_this_cpp);
    while (m--)
    {
        getline(cin, name);
        getline(cin, language);
        cout << name << endl
             << messages[language] << endl
             << endl;
    }
    return 0;
}

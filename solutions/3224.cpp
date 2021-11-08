#include <iostream>
using namespace std;
 
int main() {
 
    string mine, doc;
    cin >> mine >> doc;
    if(mine.size() < doc.size()) cout << "no" << endl;
    else cout << "go" << endl;
 
    return 0;
}

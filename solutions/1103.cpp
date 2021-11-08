#include <bits/stdc++.h>
using namespace std;

int main(){

    int h1, h2, m1, m2;
    while(cin >> h1 >> m1 >> h2 >> m2 && h1 || m1 || h2 || m2){
        int minutes = 0;
        // h1 < h2
        if(h1 < h2 && m1 < m2){
            minutes += (h2-h1)*60 + m2-m1;
        }
        else if(h1 < h2 && m1 == m2){
            minutes += (h2-h1)*60 + m2-m1;
        }
        else if(h1 < h2 && m1 > m2){
            minutes += (h2-h1-1)*60 + 60-m1+m2;
        }
        //h1 == h2
        else if(h1 == h2 && m1 < m2){
            minutes += (m2-m1);
        }
        else if(h1 == h2 && m1 == m2){
            minutes += 24*60;
        }
        else if(h1 == h2 && m1 > m2){
            minutes += 24*60 - (m1 - m2);
        }
        // h1 > h2
        else if(h1 > h2 && m1 > m2){
            minutes += 24*60-((h1-h2)*60+m1-m2);
        }
        else if(h1 > h2 && m1 == m2){
            minutes += 24*60-((h1-h2)*60);
        }
        else if(h1 > h2 && m1 < m2){
            minutes += 24*60-(h1-h2)*60+m2-m1;
        }
        cout << minutes << endl;
    }
    return 0;
}
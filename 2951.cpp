#include <bits/stdc++.h>
// #include <iostream>
// #include <math.h>
// #include <time.h>
// #include <stdlib.h>
// #include <string.h>
 
// Tipos primitivos
#define I int
#define UI unsigned int
#define L long int
#define LL long long int 
#define ULL unsigned long long int
#define F float
#define D double
#define LD long double
#define S string
#define C char
#define UC unsigned char

// Estruturas de dados
#define VI vector<int>
#define PB push_back
#define MP make_pair
#define II pair<int,int>
#define SI pair<string,int>
#define MAP map<string,int>

#define P 1000009
#define M 1000007
#define dec greater<LL>() // arr decres
#define ALL(x) (x).begin(), (x).end()
#define FOR(i,value,n) for(LL i=value; i<n; i++)
#define FLOAT(x,n) fixed << setprecision(n) << (x)
#define W(x) cerr << "\033[31m" << #x << " = " << x << "\033[0m" << "\n";
#define OwO return 
#define WhatsThat 0
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, g, val;
    string l;
    MAP mapa;

    cin >> n >> g;
    while(n--){
        cin >> l >> val;
        mapa[l] = val;
    }

    int soma = 0, num;
    cin >> num;
    while(num--){
        cin >> l;
        soma += mapa[l];
    }
    cout << soma << endl;
    if(soma >= g){
        cout << "You shall pass!" << endl;
    } else {
        cout << "My precioooous" << endl;
    }
    return 0;
}

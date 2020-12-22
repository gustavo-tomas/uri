#include <bits/stdc++.h>
// #include <iostream>
// #include <math.h>
// #include <time.h>
// #include <stdlib.h>
// #include <string.h>
 
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
 
// --------------------------------------------------------
 
// Notas
// - W(x) imprime em vermelho
// - ALL(x) define começo e fim
// - dec serve para arr decrescente
 
// Comandos Úteis
// - time ./a.out (exibe o tempo de execução)
// - ./a.out < input.txt > output.txt
 
// --------------------------------------------------------
 
// Funções Úteis
// - str.size() (não funciona com char[])
// - sort(str.begin(),str.end()) sort(ALL(str))
// - sort(arr,arr+size)
// - sort(arr,arr+n,dec) (array decrescente)
// - s.resize(size) (ajusta o tam da string)
// - getline(cin, str, delimiter) (ler str com delimitador)
// - min ou max({a,b,c,d,...});
 
// --------------------------------------------------------
 
// Pendente
// int ehPrimo(int x){
//     FOR(i,2,x) if(x%i == 0) return 0;
//     return 1;
// }
 
// int gcd(int x, int y){
//     for(int i=max(x,y); i>1; i--){
//         if(!(x%i) && !(y%i)) return i;
//     } return 1;
// }
 
// --------------------------------------------------------
 
// InfoDump
// - INT -10e9 -> 10e9
// - LL -10e18 -> 10e18
// - 10e8 op ~ 1 seg
// - '\n' é mais rápido que endl
 
// OwO - OwO - OwO -- OwO --- OwO ----- OwO -------- OwO //
 
int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, s, b, a, tot_s=0, tot_b=0, tot_a=0, ok_s=0, ok_b=0, ok_a=0;
    cin >> n;

    while(n--){
        string nome;
        cin >> nome;
        cin >> s >> b >> a;
        tot_s += s;
        tot_b += b; 
        tot_a += a;
        cin >> s >> b >> a;
        ok_s += s;
        ok_b += b;
        ok_a += a;
    }
    printf("Pontos de Saque: %.2lf %c.\n", 100.0 * (D)ok_s/tot_s, 37);
    printf("Pontos de Bloqueio: %.2lf %c.\n", 100.0 * (D)ok_b/tot_b, 37);
    printf("Pontos de Ataque: %.2lf %c.\n", 100.0 * (D)ok_a/tot_a, 37);

    return 0;
}
#include <bits/stdc++.h>
// #include <iostream>
// #include <math.h>
// #include <time.h>
// #include <stdlib.h>
// #include <string.h>

using namespace std;

// Mudar os tipos aqui
typedef int type_t;
typedef string type_s;

// Tipos primitivos
#define UI unsigned int
#define LL long long int 
#define ULL unsigned long long int
#define LD long double
#define UC unsigned char

// Estruturas de dados
#define VEC vector<type_t>
#define SET set<type_t>
#define MAP map<type_s,type_t>
#define array_type vector<int> // busca binaria

// Outros
#define P 1000009
#define M 1000007
#define dec greater<LL>() // array decrescente
#define ALL(x) (x).begin(), (x).end()
#define FLOAT(x,n) fixed << setprecision(n) << (x)
#define W(x) cerr << "\033[31m" << #x << " = " << x << "\033[0m" << "\n";
#define OwO return 
#define WhatsThat 0
 
// ----------------------------------------------------------------------
 
// Notas
// - W(x) imprime em vermelho
// - ALL(x) define começo e fim
// - dec serve para arr decrescente
// - MAP mapa;
// - mapa[chave] = valor; no caso chave = string valor = int
 
// Comandos Úteis
// - time ./a.out (exibe o tempo de execução)
// - ./a.out < input.txt > output.txt
 
// ----------------------------------------------------------------------
 
// Funções Úteis
// - str.size() (não funciona com char[])
// - sort(str.begin(),str.end()) sort(ALL(str))
// - sort(arr,arr+size)
// - sort(arr,arr+n,dec) (array decrescente)
// - s.resize(size) (ajusta o tam da string)
// - getline(cin, str, delimiter) (ler str com delimitador)
// - min ou max({a,b,c,d,...});
// - tolower(string) (decapitaliza uma string)
// - cout << setiosflags(ios::uppercase) (letra maiscula)
 
// ----------------------------------------------------------------------
 
// primo - deve ta certo 
// int prime(int x){
//     if(x == 1) return 0;
//     if(x % 2 == 0) return (x == 2) ? 1 : 0;   
//     for(int i=3; i<=sqrt(x); i++){
//         if(x % i == 0) return 0;
//     }
//     return 1;
// }
 
// MDC - utiliza algoritmo de euclides - funcional
// int gcd(int a, int b){ 
//     return (!a) ? b : gcd(b % a, a);
// }

// MMC - (a * b) / gcd(a,b)
// int lcm(int a, int b){
//     return (a*b)/gcd(a,b);
// }

// fatorial clássico - não eficiente (recursão bem daora tho)
// ULL fat(ULL n){
//     if(n == 0 || n == 1) return 1;
//     return n * fat(n-1);
// }

// busca binaria - mudar array type para conveniencia
// int bin_search(vector<int> v, int val){
//     int l = 0, r = v.size()-1, mid=0, flag=0, res = -1;
//     while(l <= r){
//         mid = (r + l)/2;
//         if(val < v[mid]) r = mid-1;
//         else if(val > v[mid]) l = mid+1;
//         else{
//             res = mid;
//             r = mid - 1;
//         }
//     }
//     return res;
// }

// https://www.geeksforgeeks.org/counting-sort/
// counting sort - nao eh melhor que sort em arrays muito grandes
// void count_sort(vector<int>& arr){
//     int max = *max_element(arr.begin(), arr.end());
//     int min = *min_element(arr.begin(), arr.end());
//     int r = max - min + 1;
//     vector<int> count(r), output(arr.size());
//     for (int i = 0; i < arr.size(); i++) count[arr[i] - min]++; 
//     for (int i = 1; i < count.size(); i++) count[i] += count[i - 1]; 
//     for (int i = arr.size() - 1; i >= 0; i--) { 
//         output[count[arr[i] - min] - 1] = arr[i]; 
//         count[arr[i] - min]--; 
//     } 
//     for (int i = 0; i < arr.size(); i++) arr[i] = output[i];
// }
 
// https://stackoverflow.com/questions/22746429/c-decimal-to-binary-converting/22746526
// conversao de decimal pra binario
// string toBinary(int n){
//     string r;
//     while(n != 0){ r = (n % 2 == 0 ? "0" : "1") + r; n /= 2;}
//     return r;
// }

// ----------------------------------------------------------------------
 
// InfoDump
// - INT [-10e9 ; 10e9]
// - LL [-10e18 ; 10e18]
// - 10e8 op ~ 1 seg
// - '\n' é mais rápido que endl
 
// OwO - OwO - OwO -- OwO --- OwO ----- OwO -------- OwO ------------- OwO //

// Sobre sync_with_stdio
// http://www.cplusplus.com/reference/ios/ios_base/sync_with_stdio/
// https://stackoverflow.com/questions/896654/cout-or-printf-which-
// of-the-two-has-a-faster-execution-speed-c#:~:text=In%20practical%20terms%20I%20have,fair%20to%20compare%20execution%20times.

int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);

    /* CODE HERE */
 
    return 0;
}

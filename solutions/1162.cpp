#include <bits/stdc++.h>
// #include <iostream>
// #include <math.h>
// #include <time.h>
// #include <stdlib.h>
// #include <string.h>

// type_t não utilizado **************** USAR TYPE_T NAS MACROS

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
#define MP make_pair<int, int> /// erro aqui
#define II pair<int,int>
#define SI pair<string,int>
#define MAP map<string,int>

#define P 1000009
#define M 1000007
#define dec greater<LL>() // array decrescente
#define ALL(x) (x).begin(), (x).end()
#define FOR(i,value,n) for(LL i=value; i<n; i++)
#define FLOAT(x,n) fixed << setprecision(n) << (x)
#define W(x) cerr << "\033[31m" << #x << " = " << x << "\033[0m" << "\n";
#define OwO return 
#define WhatsThat 0
using namespace std;
 
// ----------------------------------------------------------------------
 
// Notas
// - W(x) imprime em vermelho
// - ALL(x) define começo e fim
// - dec serve para arr decrescente
// - vector<II> v; declaracao de um vetor de pares
// - v.PB(MP(1,0)); criacao de um par 
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
 
// ----------------------------------------------------------------------
 
// Pendente
// int prime(int x){
//     FOR(i,2,x) if(x%i == 0) return 0;
//     return 1;
// }
 
// MDC - utiliza algoritmo de euclides - funcional
// int gcd(int a, int b){ 
//     return (!a) ? b : gcd(b % a, a);
// }

// fatorial clássico - não eficiente (recursão bem daora tho)
// ULL fat(ULL n){
//     if(n == 0 || n == 1) return 1;
//     return n * fat(n-1);
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
// https://stackoverflow.com/questions/896654/cout-or-printf-which-of-the-two-has-a-faster-execution-speed-c#:~:text=In%20practical%20terms%20I%20have,fair%20to%20compare%20execution%20times.

// 1 = marcelo 2 = carlos
int swipey = 0;
void bubbleSort(int array[], int n, int* swaps){
    
    int flag = 0;
    for(int i=0; i<n && !flag; i++){
        flag = 1;
        for(int j=0; j<n-i-1; j++){
            if(array[j] > array[j+1]){
                int temp = array[j];
                array[j] =  array[j+1];
                array[j+1] = temp;
                flag = 0;
                *swaps++;
                swipey++;
            }
        }
    }
}

int main(){
 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);

    int t, n, array[100005];
    cin >> t;
    while(t--){
        cin >> n;
        for(int i=0; i<n; i++) cin >> array[i];
        // for(int i=0; i<n; i++) cout << array[i] << " ";
        int swaps=0;
        swipey = 0;
        bubbleSort(array, n, &swaps);
        // for(int i=0; i<n; i++) cout << array[i] << " ";
        cout << "Optimal train swapping takes " << swipey << " swaps." << endl;
    }
    
    return 0;
}

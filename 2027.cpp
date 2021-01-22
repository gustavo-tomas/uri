#include <bits/stdc++.h>
using namespace std;

int GCDsimp (int a, int b) {
    return (!a) ? b : GCDsimp(b % a, a);
}

int main() {
	int num, den, apostas [100], cont=-1;
	while (cin >> num >> den) {
        apostas[++cont] = GCDsimp (num,den);
        if  (apostas[cont] > 5)
			cout << "Noel" << endl;
        else
			cout << "Gnomos" << endl;
	}
	for (int i=cont; i>=0; i--) {
		cout << apostas[i] << " ";
	}
	cout << endl;

	return 0;
}

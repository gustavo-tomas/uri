package main

import (
	"fmt"
)

func main() {

	var nota100, nota50, nota20 int64 = 0, 0, 0
	var nota10, nota5, nota2, nota1 int64 = 0, 0, 0, 0
	var valor, final int64

	fmt.Scanf("%d", &valor)
	final = valor

	if valor>=100{
		for ;  valor>=100; {
			valor-=100
			nota100++
		}
	}

	if (valor>=50){ 
		for ; valor>=50; {
			valor-=50;
			nota50++;
		}
	}

	if (valor<50){
		for ; (valor>=20); {
			valor-=20;
			nota20++;
		}

	}

	if (valor<20){
		for ;(valor>=10); {
			valor-=10;
			nota10++;
		}
	}

	if (valor<10){
		for ;(valor>=5); {
			valor-=5;
			nota5++;
		}
	}
	
	if (valor<5){
		for ;(valor>=2); {
			valor-=2;
			nota2++;
		}
	}

	if (valor<2){
		for ;(valor>=1); {
			valor-=1;
			nota1++;
		}
	}            

	fmt.Printf("%d\n", final);
	fmt.Printf("%d nota(s) de R$ 100,00\n", nota100);
	fmt.Printf("%d nota(s) de R$ 50,00\n", nota50);
	fmt.Printf("%d nota(s) de R$ 20,00\n", nota20);
	fmt.Printf("%d nota(s) de R$ 10,00\n", nota10);
	fmt.Printf("%d nota(s) de R$ 5,00\n", nota5);
	fmt.Printf("%d nota(s) de R$ 2,00\n", nota2);
	fmt.Printf("%d nota(s) de R$ 1,00\n", nota1);
}
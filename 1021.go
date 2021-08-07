package main
import "fmt"

func main() {

    var nota100, nota50, nota20 int64 = 0,0,0
    var nota10,nota5, nota2 int64 = 0,0,0
    var moeda1, moeda50, moeda25, moeda10, moeda05, moeda01 int64 = 0,0,0,0,0,0
    var valor float64

    fmt.Scanf("%f", &valor)

    for ; valor>=100.00; {
        valor-=100.00
        nota100++
    }

    for ; valor>=50.00; {
        valor-=50.00
        nota50++
    }

    for ; valor>=20.00; {
        valor-=20.00
        nota20++
    }

    for ; valor>=10.00; {
        valor-=10.00
        nota10++
    }

    for ; valor>=5.00; {
        valor-=5.00
        nota5++
    }
    
    for ; valor>=2.00; {
        valor-=2.00
        nota2++
    }

    for ; valor>=1.00; {
        valor-=1.00
        moeda1++
    }

    for ; valor>=0.50; {
        valor-=0.50
        moeda50++
    }

    for ; valor>=0.25; {
        valor-=0.25
        moeda25++
    }

    for ; valor>=0.10; {
        valor-=0.10
        moeda10++
    }

    for ; valor>=0.05; {
        valor-=0.05
        moeda05++
    }

    for ; valor>=0.01; {
        valor-=0.01
        moeda01++
    }

    if valor >= 0.009 {
        valor -= 0.01
        moeda01++
    }

    fmt.Printf("NOTAS:\n")
    fmt.Printf("%d nota(s) de R$ 100.00\n", nota100)
    fmt.Printf("%d nota(s) de R$ 50.00\n", nota50)
    fmt.Printf("%d nota(s) de R$ 20.00\n", nota20)
    fmt.Printf("%d nota(s) de R$ 10.00\n", nota10)
    fmt.Printf("%d nota(s) de R$ 5.00\n", nota5)
    fmt.Printf("%d nota(s) de R$ 2.00\n", nota2)
    fmt.Printf("MOEDAS:\n")
    fmt.Printf("%d moeda(s) de R$ 1.00\n", moeda1)
    fmt.Printf("%d moeda(s) de R$ 0.50\n", moeda50)
    fmt.Printf("%d moeda(s) de R$ 0.25\n", moeda25)
    fmt.Printf("%d moeda(s) de R$ 0.10\n", moeda10)
    fmt.Printf("%d moeda(s) de R$ 0.05\n", moeda05)
    fmt.Printf("%d moeda(s) de R$ 0.01\n", moeda01)
}

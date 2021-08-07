package main
import "fmt"
 
func main() {
    var dias, anos, meses, qnt_dias int64
    fmt.Scanf("%d", &qnt_dias);

    anos = qnt_dias/365;
    meses = (qnt_dias%365)/30;
    dias = (qnt_dias%365)%30;

    fmt.Printf("%d ano(s)\n", anos);
    fmt.Printf("%d mes(es)\n", meses);
    fmt.Printf("%d dia(s)\n", dias);
}

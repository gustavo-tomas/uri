package main
import "fmt"
 
func main() {
    var tempo, horas, minutos, segundos int64
    fmt.Scanf("%d", &tempo)
    horas = tempo/3600
    minutos = (tempo%3600)/60
    segundos = (tempo%3600)%60
    fmt.Printf("%d:%d:%d\n", horas, minutos, segundos)
}
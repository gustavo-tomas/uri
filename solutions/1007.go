package main

import "fmt"
 
func main() {  
   var a, b, c, d int64
   fmt.Scanf("%d\n%d\n%d\n%d", &a, &b, &c, &d)
   fmt.Printf("DIFERENCA = %d\n", (a*b - c*d))
}

package main

import "fmt"
 
func main() {  
   var n int64 ; var sal, h float64
   fmt.Scanf("%d\n%f\n%f", &n, &h, &sal)
   fmt.Printf("NUMBER = %d\nSALARY = U$ %.2f\n", n, h*sal)
}

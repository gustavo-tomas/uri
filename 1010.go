package main

import "fmt"
 
func main() {  
	var code, n, val, sum float64 = 0,0,0,0
   	fmt.Scanf("%f %f %f\n", &code, &n, &val)
	sum += n * val
   	fmt.Scanf("%f %f %f\n", &code, &n, &val)
	sum += n * val
   	fmt.Printf("VALOR A PAGAR: R$ %.2f\n", sum)
}

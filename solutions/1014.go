package main

import (
	"fmt"
)
 
func main() {  
	var km, l float64
   	fmt.Scanf("%f\n%f", &km, &l)
	fmt.Printf("%.3f km/l\n", km/l)
}

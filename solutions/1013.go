package main

import (
	"fmt"
	"math"
)
 
func main() {  
	var a, b, c float64
   	fmt.Scanf("%f %f %f", &a, &b, &c)
   	var max_ab = (a + b + math.Abs(a-b))/2
	if max_ab < c {
		fmt.Printf("%.0f eh o maior\n", c)
	} else if max_ab == a {
		fmt.Printf("%.0f eh o maior\n", a)
	} else {
		fmt.Printf("%.0f eh o maior\n", b)
	}
}

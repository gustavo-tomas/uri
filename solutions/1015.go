package main

import (
	"fmt"
	"math"
)
 
func main() {  
	var x1, y1, x2, y2 float64
   	fmt.Scanf("%f %f\n%f %f", &x1, &y1, &x2, &y2)
	fmt.Printf("%.4f\n", math.Sqrt(math.Pow(x1-x2, 2) + math.Pow(y1-y2, 2)))
}

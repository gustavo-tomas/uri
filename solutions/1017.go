package main

import (
	"fmt"
)

func main() {  
	var time, speed float64
   	fmt.Scanf("%f\n%f", &time, &speed)
	fmt.Printf("%.3f\n", (time*speed) / 12)
}

package main

import "fmt"
 
func main() {  
   var fix, sales float64
   var name string
   fmt.Scanf("%s\n%f\n%f", &name, &fix, &sales)
   fmt.Printf("TOTAL = R$ %.2f\n", fix + sales*0.15)
}

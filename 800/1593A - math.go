//package main
import( 
    "fmt"
)
func main(){	
	var t int
	fmt.Scan(&t)
	for i:=0;i<t;i++{
		var a,b,c,largest int
		fmt.Scan(&a,&b,&c)
		if a >= b {
			largest= a
		} else {
			largest= b
		}
		if c >= a && c>= b {
			largest= c
		}
		if a > b && a > c {
			fmt.Printf("%v ",0)
			b= (largest-b)+1
			fmt.Printf("%v ",b)
			c= (largest-c)+1
			fmt.Printf("%v",c)
		} else if b > a && b > c {
			a= (largest-a)+1
			fmt.Printf("%v ",a)
			fmt.Printf("%v ",0)
			c= (largest-c)+1
			fmt.Printf("%v",c)
		} else if c > a && c > b {
			a= (largest-a)+1
			fmt.Printf("%v ",a)
			b= (largest-b)+1
			fmt.Printf("%v ",b)
			fmt.Printf("%v",0)
		} else {
			a= (largest-a)+1
			b= (largest-b)+1
			c= (largest-c)+1
			fmt.Printf("%v %v %v",a,b,c)
		}
		fmt.Println()
	}
}
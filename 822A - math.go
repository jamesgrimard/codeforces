//package main
import( 
    "fmt"
)
func main() {
	var x,y int
	fmt.Scan(&x,&y)
	x_f:=x
	y_f:=y
	if x > y {
		for i:=y-1;i>0;i--{
			y_f*=i
		}
		fmt.Println(y_f)
	} else {
		for i:=x-1;i>0;i--{
			x_f*=i
		}
		fmt.Println(x_f)
	}
}

//package main
import( 
    "fmt"
)
func main() {
	var t int
	fmt.Scan(&t)
	for i:=0;i<t;i++{
		var n int
		fmt.Scan(&n)
		var odds,evens int
		for j:=0;j<n;j++{
			var x,y int
			fmt.Scan(&x,&y)
			if x%2==0{
				evens++
			} else {
				odds++
			}
			if y%2==0{
				evens++
			} else {
				odds++
			}
		}
		if odds == evens {
			fmt.Println("YES")
		}else{
			fmt.Println("NO")
		}
	}
}

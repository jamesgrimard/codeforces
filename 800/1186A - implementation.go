//package main
import( 
    "fmt"
)
func main(){	
	var n,a,b int
	fmt.Scan(&n,&a,&b)
	if n > a || n > b {
		fmt.Println("NO")
	}else {
		fmt.Println("YES")
	}
}
//package main
import( 
    "fmt"
)
func main() {
	var n int
	fmt.Scan(&n)
	if n%2 != 0 {
		fmt.Println(-1)
	}else{
		for i:=1;i<=n;i+=2{
			fmt.Printf("%d %d ",i+1,i)
		}
	}	
}

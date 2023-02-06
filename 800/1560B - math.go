//package main
import( 
    "fmt"
)
func main(){	
	var t int
	fmt.Scan(&t)
	for i:=0;i<t;i++{
		var a,b,c int
		fmt.Scan(&a,&b,&c)
		if (abs(a-b)*2) < c || (abs(a-b)*2) < b || (abs(a-b)*2) < a {
			fmt.Println(-1)
		}else{
			if abs(a-b)*2 < c+abs(a-b) {
				fmt.Println(abs((abs(a-b)*2)-(c+abs(a-b))))
			} else {
				fmt.Println(c+abs(a-b))
			}
		}
	}
}

func abs(x int) int {
	var result int
	if x > 0 {
		result = x
	} else {
		if x < 0 {
			result = x*-1
		}
	}
	return result
}
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
		if b >= c {
			if a-1 > b-1 {
				fmt.Println(2)
			} else if a-1 == b-1 {
				fmt.Println(3)
			} else {
				fmt.Println(1)
			}
		} else {
			if a-1 > ((c-b)*2)+ (b-1) {
				fmt.Println(2)
			} else if a-1 == ((c-b)*2)+ (b-1) {
				fmt.Println(3)
			} else {
				fmt.Println(1)
			}
		}
	}
}


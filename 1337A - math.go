//package main
import( 
    "fmt"
)
func main() {
	var t int
	fmt.Scan(&t)
	for i:=0;i<t;i++{
		var a,b,c,d int
		fmt.Scan(&a,&b,&c,&d)
		if b == c {
			fmt.Println(b,c,c)
		} else {
			if a <= c {
				fmt.Println(a,c,c)
			} else {
				if b <= c {
					fmt.Println(b,c,c)
				} else {
					fmt.Println(b,b,c)
				}
			}
		}
	}
}

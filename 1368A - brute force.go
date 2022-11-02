//package main
import( 
    "fmt"
)
func main(){	
	var t int
	fmt.Scan(&t)
	for i:=0;i<t;i++{
		var a,b,c,count int
		fmt.Scan(&a,&b,&c)
		for {
			if a > c || b > c {
				fmt.Println(count)
				break
			}else{
				if a <= b {
					a+=b
				} else {
					b+=a
				}
			}
			count++
		}
	}
}
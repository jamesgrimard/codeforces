//package main
import (
	"fmt"
)
func main() {
	var t int
	fmt.Scan(&t)
	for i:=0;i<t;i++{
		var h,m int
		fmt.Scan(&h,&m)
		fmt.Println(1440-(h*60+m))
	}
}


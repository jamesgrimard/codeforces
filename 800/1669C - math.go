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
		recent_odd:=0
		recent_even:=0
		counter:=0
		for j:=0;j<n;j++{
			var x int
			fmt.Scan(&x)
			if j%2 != 0 { 
				if j == 1 {
					recent_odd= x 
				} else {
					if even_check(recent_odd) != even_check(x) {
						counter++
					}
				}
			} else {
				if j == 0 {
					recent_even= x
				} else {
					if even_check(recent_even) != even_check(x) {
						counter++
					}
				}
			}
		}
		if counter == 0 {
			fmt.Println("YES")
		} else {
			fmt.Println("NO")
		}
	}
}

func even_check(x int) bool {
	if x % 2 == 0 {
		return true
	}
	return false
}
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
		list:= make([]int,n)
		var small int = 999999999999
		var big,small_key,big_key int
		for j:=0;j<n;j++{
			fmt.Scan(&list[j])
			if list[j] > big {
				big=list[j]
				big_key=j+1
			}
			if list[j] < small {
				small=list[j]
				small_key=j+1 
			}
		}
		a:= min(small_key,big_key)+min(n-(small_key-1),n-(big_key-1))
		//b:= 
		c:= max(small_key,big_key)
		d:= max(n-(small_key-1),n-(big_key-1))

		fmt.Println(smallest_of_three(a,c,d))
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
func max (x,y int) int {
	if x>y{
		return x
	} else {
		return y
	}
}
func min (x,y int) int {
	if x>y{
		return y
	} else {
		return x
	}
}
func smallest_of_three(x,y,z int) int {
	if x <= y {
		if x <= z {
			return x
		}
	} else {
		if y <= z {
			return y
		} 
	}
	return z
}
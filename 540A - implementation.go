//package main
import( 
    "fmt"
    "strconv"
)
func main() {
	var n,count int
	fmt.Scan(&n)
	var list1 []int = make([]int,n)
	var list2 []int = make([]int,n)
	var a,b string
	fmt.Scan(&a,&b)
	for i:=0;i<n;i++{
		list1[i],_= strconv.Atoi(string(a[i]))	
		list2[i],_= strconv.Atoi(string(b[i]))
	}
	for i:=0;i<n;i++{
		if abs(list1[i]-list2[i]) > 5 {
			count+=(10-abs(list1[i]-list2[i]))
		} else {
			count+=abs(list1[i]-list2[i])
		}
	}
	fmt.Println(count)
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
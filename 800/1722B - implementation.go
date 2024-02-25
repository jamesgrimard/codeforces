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
		var a,b string
		fmt.Scan(&a,&b)
		for j:=0;j<n;j++{
			if string(a[j]) == "R" {
				if string(b[j]) != "R" {
					fmt.Println("NO")
					goto out
				}
			} else {
				if string(b[j]) == "R" {
					fmt.Println("NO")
					goto out
				}
			}
		}
		fmt.Println("YES")
		out:
	}
}


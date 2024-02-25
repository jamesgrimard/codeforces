//package main
import( 
    "fmt"
    "strconv"
)
func main() {
	var t int
	fmt.Scan(&t)
	for i:=0;i<t;i++{
		var x string
		fmt.Scan(&x)
		x_int,_ := strconv.Atoi(x)
		if x_int%2 == 0 {
			fmt.Println(0)
			goto out
		} else {
			for j:=0;j<len(x);j++{
				current,_ := strconv.Atoi(string(x[j]))
				if current%2 == 0 {
					if j == 0 {
						fmt.Println(1)
						goto out
					} else {
						fmt.Println(2)
						goto out

					}
				}
			}
		}
		fmt.Println(-1)
		out:
	}
}

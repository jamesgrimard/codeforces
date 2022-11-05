//package main
import( 
    "fmt"
    "os"
)
func main() {
	var n,m int
	fmt.Scan(&n,&m)
	tally:=0
	for i:=0;i<=1001;i++ {
		for j:=0;j<=1001;j++{
			if i*i+j == n {
				if i + j*j == m {
					tally ++
					break
				}
			}
			if j != 0 && (i*i+j) == 0 {
				break
			} else if i>n && i>m && j>n && j>m {
				fmt.Println(tally)
				os.Exit(0)
			}
		}
	}
}
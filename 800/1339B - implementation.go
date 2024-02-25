//package main
import (
	"fmt"
	"bufio"
	"os"
)
func main() {
	var n,x,small_a,small_b int
	var in = bufio.NewReader(os.Stdin)
	fmt.Scan(&n)
	for i:=0;i<n;i++{
		fmt.Fscan(in,&x)
		var a,b []int = make([]int,x),make([]int,x)
		for j:=0;j<x;j++{
			fmt.Fscan(in,&a[j])
			if j == 0 {
				small_a= a[j]
			} else {
				if a[j] < small_a {
				small_a= a[j]
				}			
			}
		}
		for j:=0;j<x;j++{
			fmt.Fscan(in,&b[j])
			if j == 0 {
				small_b= b[j]
			} else {
				if b[j] < small_b {
				small_b= b[j]
				}
			}
		}
		for j:=0;j<x;j++{
			a[j]= a[j] - small_a
		}
		for j:=0;j<x;j++{
			b[j]= b[j] - small_b
		}
		tally:=0
		for j:=0;j<x;j++{
			if a[j] > b[j] {
				tally+=a[j]
			} else {
				tally+=b[j]
			}
		}
		fmt.Println(tally)
	}
}

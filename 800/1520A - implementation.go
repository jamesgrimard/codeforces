//package main
import (
	"fmt"
	"strings"
	//"os"
)
var n int
func main() {
	fmt.Scan(&n)
	for i:=0;i<n;i++{
		var len int
		fmt.Scan(&len)
		var list []string = make([]string,0,len)
		var str string
		fmt.Scan(&str)
		for k:=0;k<len;k++{
			list = append(list,strings.ToLower(string(str[k])))
		}
		no:=0
		for k:=1;k<len;k++{
			if list[k] == list[k-1]{
				continue
			} else {
				for l:=0;l<k;l++{
					if list[k] == list[l] {
						no++
						break
					}
				}
			}
		}
		if no == 0 {
			fmt.Println("YES")
		} else {
			fmt.Println("NO")
		}
	}
}
     
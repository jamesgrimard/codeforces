//package main
import (
	"fmt"
	//"strings"
	//"os"
)
var str string
var list []string
var output []int
func main() {
	fmt.Scan(&str)
	for i:=0;i<len(str);i++{
		list = append(list,string(str[i]))
	}
	for i:=1;i<=len(list);i++{
		if i == len(list) {
			output = append(output,0)
			break
		}
		if list[i] == "-" && list[i-1] == "-" {
			output = append(output,2)
			i++
		} else if list[i] == "." && list[i-1] == "-" {
			output = append(output, 1)
			i++
		} else {
			if list[i-1] == "." {
				output = append(output,0)
			}
		}
		if i > len(list) {
			output = append(output,0)
		}
	}
	for i:=0;i<len(output);i++{
		fmt.Printf("%v",output[i])
	}
}
     
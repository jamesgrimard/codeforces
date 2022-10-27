//package main
import (
	"fmt"
	"strconv"
)
func main() {
	m:= make(map[int]int)
	for i:=1;i<=4;i++{
		var a int
		fmt.Scan(&a)
		m[i]= a
	}
	var str string
	fmt.Scan(&str)
	var list []int
	for i:=0;i<len(str);i++{
		StoI, _ := strconv.Atoi(string(str[i]))
		list= append(list,StoI)
	}
	tally:=0
	for i:=0;i<len(list);i++{
		tally+=m[list[i]]
	}
	fmt.Println(tally)
}

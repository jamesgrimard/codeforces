//package main

import(
	"fmt"
	"strings"
	"os"
	"sort"
)

var a string

var b []int

var c []string

func main() {

	fmt.Scan(&a)

	if len(a) == 1 {
		fmt.Println(a)
		os.Exit(0)
	} else {
		for i:=0;i<len(a);i+=2 {
			b = append(b, int(a[i]))
		}
	}

	sort.Ints(b)

	for i:=0;i<len(b);i++ {
		c = append(c, string(b[i]))
		if i != len(b)-1 {
			c = append(c, "+")
		}
	}

	c := strings.Join(c, "")

	fmt.Println(c)
	

}

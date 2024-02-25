//package main

import (
	"fmt"
	//"os"
	//"sort"
	//"strconv"
	//"math"
)

var n int

var list []int

var s,d []int

func main() {


	fmt.Scan(&n)

	for i:=0;i<n;i++{
		var holder int
		fmt.Scan(&holder)
		list = append(list, holder)
	}

	for i:=0;i<n;i++ { 
		if i%2==0 { 

			if list[0] > list[len(list)-1] { 
				s = append(s, list[0])
				delete_element(0, list) 
				list = list[:len(list)-1] 
			} else { 
				s = append(s, list[len(list)-1])
				delete_element(len(list)-1, list) 
				list = list[:len(list)-1] 
			}	

		} else { 

			if list[0] > list[len(list)-1] { 
				d = append(d, list[0])
				delete_element(0, list) 
				list = list[:len(list)-1] 
			} else { 
				d = append(d, list[len(list)-1])
				delete_element(len(list)-1, list) 
				list = list[:len(list)-1] 
			}
		}
	}

	if len(list) == 2 {
		if list[0] > list[1] {
			d = append(d, list[0])
			s = append(s, list[1])
		} else {
			s = append(s, list[0])
			d = append(d, list[1])
		}
	} else {
		if len(list) == 1 {
			d = append(d, list[0])
		} 	
	}


	s_sum:=0
	for i:=0;i<len(s);i++{
		s_sum+=s[i]
	}
	d_sum:=0
	for i:=0;i<len(d);i++{
		d_sum+=d[i]
	}

	fmt.Println(s_sum,d_sum)


}

func delete_element(location int, list []int) []int {
    return append(list[:location], list[location+1:]...) 
}

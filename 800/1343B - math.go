//package main

import (
	"fmt"
	//"sort"
)

var list []int
var n int

var yes_no_list []string

func main() {

	fmt.Scan(&n)

	for i:=0;i<n;i++{
		var holder int
		fmt.Scan(&holder)
		list = append(list, holder)
	}

	for i:=0;i<len(list);i++{

		if list[i] <= 2 {
			fmt.Println("NO")

		} else if list[i] % 4 != 0 {
			fmt.Println("NO")

		} else if list[i] % 20 == 0 {

			fmt.Println("YES")

			for j:=2;j<=list[i];j+=2{
				fmt.Printf("%v ",j)
			}
			for j:=1;j<=list[i];j+=2{
				if j == list[i]-1 {
					j+=(j/2)+1
				}
				fmt.Printf("%v ",j)
			}
			fmt.Println()
		
		} else {
			var a []int = make([]int,0,list[i]/2)
			var b []int = make([]int,0,list[i]/2)

			for j:=2;j<=list[i];j+=2{
				a = append(a, j)
			}
			for j:=1;j<list[i];j+=2{
				b = append(b, j)
			}
			
			a_counter,b_counter:=0,0
			for j:=0;j<list[i]/2;j++{
				a_counter+=a[j]
				b_counter+=b[j]
			}
			
			if a_counter == b_counter {
				a = append(a, b...)
				fmt.Println("YES")
				for j:=0;j<len(a);j++{
					fmt.Printf("%v ",a[j])
				}
			} else {
				for j:=2;j<1000000;j+=2{
					b[len(b)-1]+= 2
					counter_odds := 0
					for k:=0;k<list[i]/2;k++{
						counter_odds+=b[k]
					}
					if a_counter == counter_odds {
						a = append(a, b...)
						fmt.Println("YES")
						for j:=0;j<len(a);j++{
							fmt.Printf("%v ",a[j])
						}
						fmt.Println()
						break
					} else {
						if a_counter < counter_odds {
							fmt.Println("NO")
							break
						}
					}
				}
			}
		}
	}

	

}
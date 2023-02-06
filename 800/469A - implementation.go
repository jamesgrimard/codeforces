//package main
import(
	"fmt"
	//"math"
	//"strings"
	"os"
)


var levels int

var inputs_1,inputs_2 int

var player_1,player_2 []int

var list []int

func main() {
	
	fmt.Scan(&levels)
	fmt.Scan(&inputs_1)
	for i:=0;i<inputs_1;i++{
		var x int
		fmt.Scan(&x)
		player_1 = append(player_1, x)
	}
	fmt.Scan(&inputs_2)
	for i:=0;i<inputs_2;i++{
		var x int
		fmt.Scan(&x)
		player_2 = append(player_2, x)
	}


	for i:=1;i<=levels;i++{
		tally:=0
		if inputs_1 == 0 {
			for k:=0;k<inputs_2;k++{ 
				if player_2[k] == i {
					list = append(list, i)
					tally++
					break
				}
			}
		}
		for j:=0;j<inputs_1;j++{ 
			if player_1[j] == i {
				list = append(list, i)
				tally++
				break
			} else {
				for k:=0;k<inputs_2;k++{ 
					if player_2[k] == i {
						list = append(list, i)
						tally++
						break
					}
				}
			}
			if tally != 0 {
				break
			}
		}
	}

	if len(list) < levels {
		fmt.Println("Oh, my keyboard!")
		os.Exit(0)
	}

	for i,j := range list {
		if i+1 != j {
			fmt.Println("Oh, my keyboard!")
			os.Exit(0)
		}
	}  
	fmt.Println("I become the guy.")
}


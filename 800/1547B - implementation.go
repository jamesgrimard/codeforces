//package main
import( 
    "fmt"
    "bufio"
    "os"
)
var letters = map[string]int{
	"a": 1,
	"b": 2,
	"c": 3,
	"d": 4,
	"e": 5,
	"f": 6,
	"g": 7,
	"h": 8, 
	"i": 9, 
	"j": 10,  
	"k": 11,
	"l": 12,
	"m": 13,
	"n": 14,
	"o": 15,
	"p": 16,
	"q": 17,
	"r": 18,
	"s": 19,  
	"t": 20,  
	"u": 21,  
	"v": 22,   
	"w": 23,
	"x": 24,
	"y": 25,
	"z": 26,
}

func main() {
	in:= bufio.NewReader(os.Stdin)
	out:= bufio.NewWriter(os.Stdout)
	defer out.Flush()
	var t int
	fmt.Fscan(in,&t)
	for i:=0;i<t;i++{
		var word string
		fmt.Fscan(in,&word)
		list:= make([]int,len(word))
		for j:=0;j<len(word);j++{
			list[j]= letters[string(word[j])]
		}
		indice:=0
		for j:=1;j<=len(list);j++{
			counter:=0
			for k:=1;k<=len(list);k++{
				if list[k-1] == j {
					counter++
				}
			}
			if counter == 0 || counter >= 2 {
				fmt.Fprintln(out,"NO")
				goto out
			}
		}
		for j:=0;j<len(list);j++{
			if list[j] == 1 {
				indice= j
				break
			} else {
				if j == len(list)-1 {
					fmt.Fprintln(out,"NO")
					goto out
				} else {
					if list[j] <= list[j+1] {
						fmt.Fprintln(out,"NO")
						goto out
					}
				}
			}
		}
		for j:=indice;j<len(list)-1;j++{
			if list[j] >= list[j+1] {
				fmt.Fprintln(out,"NO")
				goto out
			}
		}
		fmt.Fprintln(out,"YES")
		out:
	}
}
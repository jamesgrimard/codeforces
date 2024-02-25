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
		var n,m int
		fmt.Fscan(in,&n,&m)
		list:= make([]string,n)
		for j:=0;j<n;j++{
			fmt.Fscan(in,&list[j])
		}
		smallest:=999
		for j:=0;j<n-1;j++{
			for l:=j+1;l<n;l++{
				tally:=0
				for k:=0;k<m;k++{
					tally+=abs(letters[string(list[j][k])]-letters[string(list[l][k])])
				}
				if tally <= smallest {
					smallest= tally
				}
			}
		}
		fmt.Fprintln(out,smallest)
	}
}
func abs(x int) int {
	var result int
	if x > 0 {
		result = x
	} else {
		if x < 0 {
			result = x*-1
		}
	}
	return result
}
//package main
// github.com/jamesgrimard/codeforces
import( 
    "fmt"
    "bufio"
    "os"
)
func main() {
	in:= bufio.NewReader(os.Stdin)
	out:= bufio.NewWriter(os.Stdout)
	defer out.Flush()
	var t int
	fmt.Fscan(in,&t)
	for i:=0;i<t;i++{
		var s string
		fmt.Fscan(in,&s)
		word:= []rune(s)
		var sum,b int = 0,0
		for j:=0;j<len(word);j++{
			sum += (int(word[j]) - 96)
		}
		if len(word) & 1 == 1 {
			if int(word[len(word)-1]) > int(word[0]) {
				b = int(word[0]) - 96
			} else {
				b = int(word[len(word)-1]) - 96
			}
			sum -= b
		}
		if sum < b {
			fmt.Fprintln(out,"Bob",b-sum)
		} else {
			fmt.Fprintln(out,"Alice",sum-b)
		}	
	}
}

// this problem requires that alice goes first, though can only sum an even amount of numbers
// given this constaint, if the len(word) is odd (meaning that alice can't just sum the whole string),
// alice will need to see whether the head or tail value is largest and choose n-1 sums from that point,
// ultimately leaving bob with the smaller sum value
// bob can only win if len(word) == 1

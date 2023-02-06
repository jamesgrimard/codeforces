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
		var l,r int
		fmt.Fscan(in,&l,&r)
		if l * 2 > r {
			fmt.Fprintln(out,"YES")
		} else {
			fmt.Fprintln(out,"NO")
		}
	}
}

// shoppers are rational, they will minimise their cost and will only buy extra (another pack) if the amount
// remaining is >= 1/2 a pack, ie customer wants to buy 5 items, a pack comes with 3 items, the customer will buy
// 1 pack and still need 2 more items, instead of buying 2 individual items, they will buy 1 more pack because
// 2 > half a pack
// we must accommodate for all purchases including and between l:r
// no number between l:r % pack size can == 0, therefore pack size must be at max l*2 and minimum > r
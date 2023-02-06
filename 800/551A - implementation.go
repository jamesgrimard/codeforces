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
	var t,max int
	fmt.Fscan(in,&t)
	a:= make([]int,t)
	b:= make([]int,t)
	for j:=0;j<t;j++{
		fmt.Fscan(in,&a[j])
		if a[j] > max {
			max = a[j]
		}
	}
	place:= 1
	for j:=max;j>=1;j--{
		tally:=0
		for k:=0;k<t;k++{
			if a[k] == j {
				b[k] = place
				tally++
			}
		}
		place += tally
	}
	for j:=0;j<t;j++{
		fmt.Fprintf(out,"%v ",b[j])
	}
}

// iterate over list of scores, with nested loop start at max and decrement through each score to 0
// if user score == max score add place to new array and increase the current placing by 1

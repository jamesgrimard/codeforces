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
	var n,k int
	var s string
	fmt.Fscan(in,&n,&k,&s)
	var t,g int = 100 , 100
	var a []int
	for i:=0;i<n;i++{
		if string(s[i]) == "T" {
			t = i
		} else if string(s[i]) == "G"{
			g = i
		} else if string(s[i]) == "#" && i > min(t,g) && i < max(t,g) {
			a = append(a,i)
		}

	}
	var ans bool = true
	if abs(t-g) % k != 0 {
		ans = false
	} else {
		for i:=0;i<len(a);i++{
			if abs(a[i] - g) % k == 0 {
				ans = false
			}
		}
	}
	if ans == false {
		fmt.Fprintln(out,"NO")
	} else {
		fmt.Fprintln(out,"YES")
	}
}
func abs(a int) int {
	if a <= 0 {
		return a * -1
	}
	return a
}
func min(a,b int) int{
	if a<=b{
		return a
	}
	return b
}
func max(a,b int) int {
	if a >= b {
		return a 
	}
	return b
}

// record inputs indices only between T and G
// check abs difference between indices != k frequency
// return ans
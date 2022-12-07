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
		var n int
		fmt.Fscan(in,&n)
		var a [][]int
		for j:=0;j<n;j++{
			tmp:= make([]int,4)
			fmt.Fscan(in,&tmp[0],&tmp[1])
			tmp[2] = (tmp[1] - tmp[0]) / 2
			if isIntegral((float64(tmp[1]) - float64(tmp[0])) / 2.0) == false {
				tmp[2]++
			}
			if j != 0 {
				tmp[3] = tmp[0] - a[j-1][1]
			}
			a = append(a,tmp)
		}
		for j:=0;j<n;j++{
			var x int
			fmt.Fscan(in,&x)
			a[j][3] += x
		}
		for j:=0;j<n;j++{
			if j == 0 {
				a[j][0] += a[j][3]
				a[j][1] = max(a[j][1],a[j][0]+a[j][2])
				continue
			}
			a[j][0] = a[j][3] + a[j-1][1] 
			a[j][1] = max(a[j][1],a[j][0]+a[j][2])
		}
		fmt.Fprintln(out,a[len(a)-1][0])
	}
}

func isIntegral(val float64) bool {
	return val == float64(int(val))
}

func max(a,b int) int {
	if a >= b {
		return a
	}
	return b
}

// iterate through each station, but isolate first station
// calculate the max travel time between each station by subtracting ai from bi-1 and adding tmi
// this will serve as the max travel time between each respective station
// now you need to calculate (b - a) / 2 and take the max(b,a+(b-a)/2)
// this will serve as the time that the train leaves station
// repeat this process 2 -> n
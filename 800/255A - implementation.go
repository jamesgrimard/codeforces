//package main
import( 
    "fmt"
    "bufio"
    "os"
)
func main() {
	in:= bufio.NewReader(os.Stdin)
	out:= bufio.NewWriter(os.Stdout)
	defer out.Flush()
	var n int
	fmt.Fscan(in,&n)
	list:= make([]int,n)
	for j:=0;j<n;j++{
		fmt.Fscan(in,&list[j])
	}
	var chest,bis,back int
	for j:=0;j<n;j+=3 {
		chest+=list[j]
	}
	for j:=1;j<n;j+=3 {
		bis+=list[j]
	}
	for j:=2;j<n;j+=3 {
		back+=list[j]
	}

	if chest >= bis && chest >= back {
		fmt.Fprintln(out,"chest")
	} else if bis >= chest && bis>= back {
		fmt.Fprintln(out,"biceps")
	} else {
		fmt.Fprintln(out,"back")
	}
}

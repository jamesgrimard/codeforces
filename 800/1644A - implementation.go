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
	var t int
	fmt.Fscan(in,&t)
	for i:=0;i<t;i++{
		var input string
		fmt.Fscan(in,&input)
		if string(input[0]) == "R" || string(input[0]) == "B" || string(input[0]) == "G" {
			fmt.Fprintln(out,"NO")
		} else {
			var r,b,g int
			for j:=0;j<6;j++{
				if string(input[j]) == "r" { 
					r = j
				} else if string(input[j]) == "b" {
					b = j
				} else if string(input[j]) == "g" {
					g = j
				}
			}
			counter:=0
			for j:=0;j<6;j++{
				if string(input[j]) == "R" {
					if r > j {
						counter++
					}
				} else if string(input[j]) == "G" {
					if g > j {
						counter++
					}
				} else if string(input[j]) == "B" {
					if b > j {
						counter++
					}
				}
			}
			if counter > 0 {
				fmt.Fprintln(out,"NO")
			} else {
				fmt.Fprintln(out,"YES")
			}
		}
	}
}
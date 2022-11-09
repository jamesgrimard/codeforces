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
		var n int
		fmt.Fscan(in,&n)
		var number string
		fmt.Fscan(in,&number)
		if string(number[0]) == "2" && string(number[1]) == "0" {
			if string(number[len(number)-1]) == "0" {
				if string(number[len(number)-2]) == "2" || string(number[2]) == "2" {
					fmt.Fprintln(out,"YES")
				} else {
					fmt.Fprintln(out,"NO")
				}
			} else if string(number[2]) == "2" && string(number[3]) == "0" {
				fmt.Fprintln(out,"YES")
			} else {
				fmt.Fprintln(out,"NO")
			}
		} else if string(number[len(number)-2]) == "2" && string(number[len(number)-1]) == "0" {
			if string(number[0]) == "2" {
				if string(number[1]) == "0" || string(number[len(number)-3]) == "0" {
					fmt.Fprintln(out,"YES")
				} else {
					fmt.Fprintln(out,"NO")
				} 
			} else if string(number[len(number)-3]) == "0" && string(number[len(number)-4]) == "2" {
				fmt.Fprintln(out,"YES")
			} else {
				fmt.Fprintln(out,"NO")
			}
		} else {
			fmt.Fprintln(out,"NO")
		}
	}
}
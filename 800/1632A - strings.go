//package main
import( 
    "fmt"
    "bufio"
    "os"
    "strings"
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
		var binary string
		fmt.Fscan(in,&binary)
		for j:=0;j<4;j++{
			if strings.Contains(binary, "000") == true || strings.Contains(binary, "111") == true || strings.Contains(binary, "101") == true || strings.Contains(binary, "010") == true || strings.Contains(binary, "00") == true || strings.Contains(binary, "11") == true {
				fmt.Fprintln(out,"NO")
				goto out
			}
		}
		fmt.Fprintln(out,"YES")
		out:
	}
}

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
		var top,bottom string
		fmt.Fscan(in,&top,&bottom)
		row2:= strings.Split(top,"")
		row1:= strings.Split(bottom,"")
		counter:=0
		for k:=0;k<n;k++{ //empties
			if string(row1[k]) == "1" && string(row2[k]) == "0"{
				counter++
				row1[k],row2[k] = ".","1."
			}
		}
		for k:=0;k<n;k++{ // diagonals
			if k == 0 {
				if string(row1[k]) == "1" && string(row2[k+1]) == "1"{
					counter++
					row1[k],row2[k+1] = ".","1."
				} 
				continue
			}
			if k == n-1 {
				if string(row1[k]) == "1" && string(row2[k-1]) == "1"{
					counter++
					row1[k],row2[k-1] = ".","1."
				}
				continue
			}
			if string(row1[k]) == "1" && string(row2[k-1]) == "1" {
				counter++
				row1[k],row2[k-1] = ".","1."
				continue
			} else if string(row1[k]) == "1" && string(row2[k+1]) == "1" {
				counter++
				row1[k],row2[k+1] = ".","1."
				continue
			}
		}
		fmt.Fprintln(out,counter)
	}
}

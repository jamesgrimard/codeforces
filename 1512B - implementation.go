//package main
import( 
    "fmt"
    "bufio"
    "os"
)
type coords struct{
	row int
	column int
}
func main() {
	in:= bufio.NewReader(os.Stdin)
	out:= bufio.NewWriter(os.Stdout)
	defer out.Flush()
	var t int
	fmt.Fscan(in,&t)
	for i:=0;i<t;i++{
		var n int
		fmt.Fscan(in,&n)
		var star1,star2 coords
		counter:=0
		for j:=0;j<n;j++{
			var x string
			fmt.Fscan(in,&x)
			for k:=0;k<n;k++{
				if string(x[k]) == "*" {
					if counter == 0 {
						star1.row,star1.column = j,k
						counter++
					} else {
						star2.row,star2.column = j,k
					}					
				}
			}
		}
		
		var star3,star4 coords
		if star1.row == star2.row {
			if star1.row == 0 {
				star3.row,star4.row= star1.row+1,star1.row+1
			} else {
				star3.row,star4.row= star1.row-1,star1.row-1
			}
			star3.column,star4.column= star1.column,star2.column

		} else if star1.column == star2.column {
			if star1.column == 0 {
				star3.column,star4.column= star1.column+1,star2.column+1
			} else {
				star3.column,star4.column= star1.column-1,star1.column-1
			}
			star3.row,star4.row= star1.row,star2.row

		} else {
			star3.row,star3.column= star1.row,star2.column
			star4.row,star4.column= star2.row,star1.column
		}  
		for j:=0;j<n;j++{
			for k:=0;k<n;k++{
				if (k == star1.column && j == star1.row) || (k == star2.column && j == star2.row) || (k == star3.column && j == star3.row) || (k == star4.column && j == star4.row){
					fmt.Fprintf(out,"*")
				} else {
					fmt.Fprintf(out,".")
				}
			}
			fmt.Fprintln(out,)
		}
	}
}

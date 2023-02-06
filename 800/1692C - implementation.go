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
		board:=make([]string,8)
		for j:=0;j<8;j++{
			fmt.Fscan(in,&board[j])
		}
		// search for #.# ie: board[2],board[4]
		// bishop between these 2 points ie line 3
		// search line 3 for # (x-coordinate)
		var y1,counter int
		for j:=0;j<8;j++{
			for k:=2;k<8;k++{
				if string(board[j][k]) == "#" && string(board[j][k-2]) == "#" {
					counter++
					if counter == 1 {
						y1= j
						goto out
					}
				}
			}
		}
		out:
		for j:=0;j<8;j++{
			if string(board[y1+1][j]) == "#" {
				fmt.Println(y1+2,j+1)
				break
			}
		}
	}
}
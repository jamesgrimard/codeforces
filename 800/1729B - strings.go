//package main
import( 
    "fmt"
    "bufio"
    "os"
    "strconv"
)
func main() {
	in:= bufio.NewReader(os.Stdin)
	out:= bufio.NewWriter(os.Stdout)
	defer out.Flush()
	var alphabet = []string{"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"}
	var t int
	fmt.Fscan(in,&t)
	for i:=0;i<t;i++{
		var n int 
		fmt.Fscan(in,&n)
		var number string
		fmt.Fscan(in,&number)
		var list []int
		if string(number[len(number)-1]) != "0" {
			for k:=len(number)-1;k>=0;k--{
				if string(number[k]) == "0" {
					break
				} else {
					holder,_:= strconv.Atoi(string(number[k]))
					list= append(list,holder)
				}
			}
		}
		for j:=len(number)-1;j>0;j--{
			if string(number[j]) == "0"{
				for k:=j-2;k>=0;k--{
					if string(number[k]) == "0" {
						break
					} else {
						if k == j-2 {
							holder,_:= strconv.Atoi(string(number[k:j]))
							list= append(list, holder)
						} else {
							holder,_:= strconv.Atoi(string(number[k]))
							list= append(list,holder)
						}
					}
				}
				j--
			}
		}
		for j:=len(list)-1;j>=0;j--{
			fmt.Fprintf(out,"%v",alphabet[list[j]-1])
		}
		fmt.Fprintln(out,)
	}
}

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
		var buns,mince,chicken int
		fmt.Fscan(in,&buns,&mince,&chicken)
		var mince_profit,chicken_profit int
		fmt.Fscan(in,&mince_profit,&chicken_profit)
		buns/=2
		sum:=0
		if chicken_profit >= mince_profit{
			if buns >= chicken {
				sum+= (chicken*chicken_profit)
				buns-=chicken
			} else {
				sum+= (buns*chicken_profit)
				buns=0
			}
			sum+= (min(buns,mince)*mince_profit)
		} else {
			if buns >= mince {
				sum+= (mince*mince_profit)
				buns-=mince
			} else {
				sum+= (buns*mince_profit)
				buns=0
			}
			sum+= (min(buns,chicken)*chicken_profit)
		}
		
		fmt.Fprintln(out,sum)
	}
}

func min(x,y int) int{
	if x<=y{
		return x
	}
	return y
}
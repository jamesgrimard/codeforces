//package main
import( 
    "fmt"
    "bufio"
    "os"
)
var alphabet = []string{"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"}

func main() {
	in:= bufio.NewReader(os.Stdin)
	out:= bufio.NewWriter(os.Stdout)
	defer out.Flush()
	mapper:= make(map[string]int)
	counter:=1
	for j:=0;j<26;j++{
		for k:=0;k<26;k++{
			if j != k {
				mapper[string(alphabet[j])+string(alphabet[k])]= counter
				counter++
			}
		}
	}
	var t int
	fmt.Fscan(in,&t)
	for i:=0;i<t;i++{
		var word string
		fmt.Fscan(in,&word)
		fmt.Fprintln(out,mapper[word])
	}
}
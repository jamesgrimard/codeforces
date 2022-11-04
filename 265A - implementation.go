//package main
import( 
    "fmt"
    "os"
)
func main() {
	var word,instructions string
	fmt.Scan(&word,&instructions)
	step:=0
	for i:=1;i<=len(word);i++{
		for step<len(instructions) {
			if string(instructions[step]) == string(word[i-1]) {
				step++
				goto out
			} else {
				step++
			}
		}
		fmt.Println(i)
		os.Exit(0)
		out:
	}
}

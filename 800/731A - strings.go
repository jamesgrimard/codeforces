//package main
import (
	"fmt"
)
var letters = map[string]int{
	"a": 1,
	"b": 2,
	"c": 3,
	"d": 4,
	"e": 5,
	"f": 6,
	"g": 7,
	"h": 8, 
	"i": 9, 
	"j": 10,  
	"k": 11,
	"l": 12,
	"m": 13,
	"n": 14,
	"o": 15,
	"p": 16,
	"q": 17,
	"r": 18,
	"s": 19,  
	"t": 20,  
	"u": 21,  
	"v": 22,   
	"w": 23,
	"x": 24,
	"y": 25,
	"z": 26,
}
func main() {
	var input string
	fmt.Scan(&input)
	current:=letters["a"]
	tally:=0
	for i:=0;i<len(input);i++{
		if abs(current-letters[string(input[i])]) > 13 {
			if current < letters[string(input[i])] {
				tally+=abs(current + 26 - letters[string(input[i])])
				current= letters[string(input[i])]
			} else {
				tally+=abs(current - (letters[string(input[i])]+26))
				current= letters[string(input[i])]
			}
		} else {
			tally+=abs(current - letters[string(input[i])])
			current= letters[string(input[i])]
		}
	}
	fmt.Println(tally)
}
func abs(x int) int {
	var result int
	if x > 0 {
		result = x
	} else {
		if x < 0 {
			result = x*-1
		}
	}
	return result
}

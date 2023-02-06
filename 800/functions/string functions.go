
var alphabet = []string{"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"}

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

func count_distinct_characters(word string) int {
	var list []byte
	for j:=0;j<len(word);j++{
		tally:=0
		for k:=0;k<len(list);k++{
			if list[k] == word[j] {
				tally++
			}
		}
		if tally == 0 {
			list = append(list,word[j])
		}
	}
	return len(list)
}

func reverse(word string) string {
	//dependencies strings
	list:= strings.Split(word,"")
	for j,k:=0,len(list)-1;j<k;j,k=j+1,k-1{
		list[j],list[k] = list[k],list[j]
	}
	word2:= strings.Join(list,"")
	return word2
}

// RUNES
a:= []rune("james")
a[2] = 100
fmt.Fprintln(out,string(a))
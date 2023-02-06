// bufio, os
var in = bufio.NewReader(os.Stdin)
var out = bufio.NewWriter(os.Stdout)
defer out.Flush()

// input into struct
type Auction struct {
	Index int
	Value int
}
list:= make([]Auction,n)
for j:=0;j<n;j++{
	fmt.Fscan(in,&list[j].Value)
	list[j].Index= j+1
}

func input_string() []string {
	var list []string
	scan := bufio.NewScanner(os.Stdin)              // assign variable to the scanner
	scan.Split(bufio.ScanWords)                     // sets scanner to split inputs
	for scan.Scan() {                               // keeps scanning for next token until ctrl-c cancel *important
		list = append(list, scan.Text())            
	}
	return list
}

//scan lines
scanner:= bufio.NewScanner(os.Stdin)   
var a []string
for i:=0;i<3;i++{
	scanner.Scan()
	var x string = strings.ReplaceAll(scanner.Text()," ","")
	a = append(a,x)
}

func smallest_int(list []int) int {
    for i:=0;i<len(list);i++{
        if list[0] > list[i] {
            list[0] = list[i]
        }
    }
    return list[0]
}

func largest_int(list []int) int {
    for i:=0;i<len(list);i++{
        if list[0] < list[i] {
            list[0] = list[i]
        }
    }
    return list[0]
}

func delete_element(location int, list []int) []int {
    return append(list[:location], list[location+1:]...) 
}

// delete from slice in a for loop
delete_element(i,list)
i--
list = list[:len(list)-1]

// copy slice to a seperate array
func duplicate_1d_slice(original_slice []int) []int {
    var b []int = make([]int, len(original_slice))
    copy(b[:],original_slice)
    return b
}

// copy slice to seperate array 2dimensional - ints
func duplicate_2d_slice(length int, original_slice [][]int) [][]int {
    var newlist [][]int = make([][]int,length)
    for i:=0;i<length;i++{
        newlist[i] = make([]int,0,len(original_slice[i]))
        for j:=0;j<len(original_slice[i]);j++{
            newlist[i] = append(newlist[i], original_slice[i][j])
        }
    }
    return newlist
}

func insert_int(location,value int, list []int) []int {
    for i:=0;i<1;i++{
        list = append(list, 0) 
    }
    copy(list[location+1:], list[location:])
    list[location] = value
    return list
}

func append_to_start(element int, list []int) []int {
    list= append(list,element)
    list= append(list[len(list)-1:],list[:len(list)-1]...)
    return list
}

// variable size matrix

var x,y int
var board [][]string = make([][]string, y)
for i:=0;i<y;i++{
    board[i] = make([]string, x)
}

// 3d matrix
var list [][][]int = make([][][]int,t) // declare matrix
list[i] = make([][]int,length) // add 2nd dimension
list[i][j] = make([]int,length) // add 3rd dimension
list[i][j] = append(list[i][j],value) // append value

//sort struct slice
sort.Slice(list, func(j, k int) bool { // sorting function for struct array
    return list[j].Value < list[k].Value // ascending order
})


//https://github.com/golang/go/wiki/SliceTricks
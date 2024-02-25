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

func isEven(x int) bool {
	if x % 2 == 0 {
		return true
	}
	return false
}

func isIntegral(val float64) bool {
	return val == float64(int(val))
}

func isComposite(x int) bool {
	for i:=2;i<=9;i++{
		if x%i == 0 && x!=i {
			return true
		}
	}
	return false
}

func isPrime(x int) bool {
	for j:=2;j<=x/2;j++{
		if x%j == 0 {
			return false
		}
	}
	return true	
}

func listNearlyPrimes(n int) []int {
	list_primes:= listPrimes(n/2)
	var list []int
	for i:=1;i<len(list_primes);i++{
		for j:=i+1;j<len(list_primes);j++{
			list = append(list,int(list_primes[i])*int(list_primes[j]))
		}
	}
	return list
}

func listPrimes(n int) []int {
	var list []int
	for i:=1;i<=n;i++{
		if isPrime(i) == true {
			list= append(list,i)
		}
	}
	return list
}

func number_of_odds_inclusive(l,u int) int {
	if l%2 != 0 && u%2 != 0 {
		return ((u-l)/2-1)+2
	}
	if l%2 != 0 || u%2 != 0 {
		return ((u-l)/2)+1 
	}
	return ((u-l)/2)
}


func summer(x int) int {
	var sum int
	for x != 0 {
		sum+=(x%10)
		x/=10
	}
	return sum
}



// take different types of numbers (ints,floats)
// must include constaint :
// type Number interface {
//     int | float64
// }
func sum[V Number] (nums ...V) V {
	//name of func is sum, includes constraint 'Number' represented by 'V'
    var total V
    for _, num := range nums {
        total += num
    }
    return total
}

// find highest modulus numerator with a certain remainder %%%
// this would be good for finding max capacity given a certain cost(x) or input with a fixed left over(y) and a max capacity(n)
// _ % x = y	0 >= __ >= n
// x % 7 = 5	0 >= x >= 12345
var x = int((n-y)/x) * x + y 

// GCD / HCF (highest common factor)
// the HCF of 2 numbers a,b = the lower of the 2 numbers
// the LCM of 2 numbers a,b = the higher of the 2
// if a==b the HCF & LCM == a/2 

func Factors(x int) int {
	count:=1
	for j:=1;j<=x/2;j++{
		if x%j == 0 {
			count++
		}
	}
	return count
}

func listFactors(x int) []int {
	var list []int
	for j:=1;j<=x/2;j++{
		if x%j == 0 {
			list= append(list,x/j)
		}
	}
	list= append(list,1)
	return list
}

func LCM(a,b int) int {
	if b%a != 0{
		for j:=b;j>0;j+=b{
			if j%a == 0 {
				return j
			}
		}
	} 
	return a
}

func gcd(x,y int) int { // looping function that returns itself until y=0 condtion met
	if y==0 {
		return x
	}
	return gcd(y,x%y)
}

// everyother odd number
//4x-3

// algo sum of x 1-> X
// ie. 1+2+3+4+5....X
// x^2 - ((x^2-x)/2)

//BITWISE
//https://stackoverflow.com/questions/28432398/difference-between-some-operators-golang

// LOG
// log_b x = log(b)/log(x)
//package main

import("fmt")

var weight uint8

func modul(weight uint8) string {
	if weight == 2 {
		return "NO"
	} else if weight % 2 == 0 {
		return "YES"
	} else {
		return "NO"
	}
}

func main() {

	fmt.Scan(&weight)

	fmt.Printf("%v",modul(weight))

}
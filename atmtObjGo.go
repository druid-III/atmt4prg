package main

import "fmt"

var numb2foo = map[uint8]func(*atmtDS) uint8{
	1: (*atmtDS).start,
	2: (*atmtDS).step_2,
	3: (*atmtDS).step_3,
	4: (*atmtDS).step_4,
	0: (*atmtDS).stop,
}

/*
   ===================================================================================
         1 --------*         start
         :         :
         \/        :
    *--- 2 <---*   :
    :    :     :   :
    :    \/    :   :
    :    3 ----*   :
    :    :         :
    :    \/        :
    *--> 4 <-------*
         :
         \/
         0                   stop
   ===================================================================================
*/
type atmtDS struct {
	stage    uint8
	er       bool
	databuff interface{}

	CoSt map[uint8]func(*atmtDS) uint8 // cartridge of states
}

// =================================================================================
func objInit() *atmtDS {
	return &atmtDS{1, false, nil, numb2foo}
}

// =================================================================================
func (p2DS atmtDS) nextStep() (nextStep uint8) {
	return p2DS.stage + 1
}

// =================================================================================
func (p2DS *atmtDS) start() (nextStep uint8) {

	nextStep = p2DS.nextStep()
	fmt.Println("now stage is", p2DS.stage, ", databuff is", p2DS.databuff)

	if p2DS.er {
		nextStep = 4
	}

	return
}

// =================================================================================
func (p2DS *atmtDS) step_2() (nextStep uint8) {

	nextStep = p2DS.nextStep()
	fmt.Println("now stage is", p2DS.stage, ", databuff is", p2DS.databuff)

	if p2DS.er {
		nextStep = 4
	}

	return
}

// =================================================================================
func (p2DS *atmtDS) step_3() (nextStep uint8) {

	nextStep = p2DS.nextStep()
	fmt.Println("now stage is", p2DS.stage, ", databuff is", p2DS.databuff)

	if p2DS.er {
		nextStep = 2
	}

	return
}

// =================================================================================
func (p2DS *atmtDS) step_4() (nextStep uint8) {
	fmt.Println("now stage is", p2DS.stage, ", databuff is", p2DS.databuff)

	return
}

// =================================================================================
func (p2DS *atmtDS) stop() (nextStep uint8) {
	fmt.Println("now stage is", p2DS.stage, ", databuff is", p2DS.databuff)

	return
}

// =================================================================================
func (p2DS *atmtDS) Aatmt() string {

	fmt.Println("step by step!")

	for {
		next := p2DS.CoSt[p2DS.stage](p2DS)
		if p2DS.stage == 0 {
			break
		}
		p2DS.stage = next
	}
	return ("automat OK!")
}

func main() {

	a := objInit()
	fmt.Println(a.Aatmt())

	fmt.Println(objInit().Aatmt())
}

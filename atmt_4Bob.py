#!/usr/bin/python3
# -*- coding: utf-8 -*-

#import numpy as np

Stage  = 1
Buffer = []


# ==============================================================================
def start():
    print ("You typed zero.\n")
    return Stage + 1
# ==============================================================================
def step_1():
    print ("n is a perfect square\n")
    return Stage + 1
# ==============================================================================
def step_2():
    print ("n is an even number\n")
    return Stage + 1
# ==============================================================================
def step_3():
    print ("n is a perfect square\n")
    return Stage + 1
# ==============================================================================
def step_4():
    print ("n is an even number\n")
    return 0
# ==============================================================================
def stop():
    print ("n is a prime number\n")
    return 0
# ..............................................................................
NoSt = {
1 : start,
2 : step_2,
3 : step_3,
4 : step_4,
0 : stop,
}
# ..............................................................................
St2N = {
start  : 1,
step_2 : 2,
step_3 : 3,
step_4 : 4,
stop   : 0,
}

def Aatmt():
    global Stage #start stage
    while 1:
        print ("step by step!")
        nextStage = NoSt[Stage]()
        if (Stage == 0): print("out"); break
        if (Stage == None): print("debug error"); break
        Stage = nextStage
    return ("automat OK!")

print (Aatmt())

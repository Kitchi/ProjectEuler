#! /usr/bin/env python

from math import sqrt, floor

def pythTriplets():

    n = 1
    m = 0

    A = 1.
    C = -500.
    while True:
        B = n

        D = B**2 - 4*A*C

        m1 = (-B + sqrt(D))/(2*A)
        m2 = (-B - sqrt(D))/(2*A)

        if m1 > 0:
            rem = floor(m1)
            if (m1 - rem) == 0:
                print(m1, n)
                print("A = ", 2*m1*n, " B = ", m1**2-n**2, "C = ", m1**2+n**2)
                print(2*m1*n * (m1**2-n**2) * (m1**2+n**2))
                return
        elif m2 > 0:
            rem = floor(m2)
            if(m2 - rem) == 0:
                print(m2, n)
                print("A = ", 2*m2*n, " B = ", m2**2-n**2, "C = ", m2**2+n**2)
                print(2*m2*n * (m2**2-n**2) * (m2**2+n**2))
                return
        n += 1

if __name__ == '__main__':
    pythTriplets()

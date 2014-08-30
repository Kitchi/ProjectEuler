#! /usr/bin/env python

import numpy as np

def seiveOfEratosthenes():
    """
    Implements the Seive of Eratosthenes to generate a list of first 2 million
    prime numbers
    """

    n = 2000000
    x = list(range(2, n))

    for nn in range(0, n-2):
        if x[nn] == 0: # Not a prime, don't bother with factors
            continue

        step = x[nn]
        for xx in range(nn+step, n-2, step):
            x[xx] = 0 # Set all multiples to zero

    sump = sum(x)
    return sump

sump = seiveOfEratosthenes()
print (sump)

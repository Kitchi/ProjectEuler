#! /usr/bin/python

import numpy as np

grid    = np.loadtxt('011-Grid.dat')
nrows   = ncols = 20 # from the grid 
winSize = 4

# Multiplying down and up are identical, left and right are identical.
# So 4 functions required, horizontal, vertical, left diagonal and right diag.

def maxProduct(inarr):
    """
    Calculates the product of 4 elements, using a sliding window across
    the array, and returns the maximum value of the product. 

    Args:
    inarr   Input array

    Returns:
    maxval  Maximum product
    """

    maxprod = 1
    thisprod = 1

    arrlen = len(inarr)

    if arrlen <= 4:  # List is too short, return
        maxprod = -1
        return maxprod

    for nn in range(arrlen - 4):
        for xx in inarr[nn:nn+4]:
            thisprod *= xx

        if thisprod > maxprod:
            maxprod = thisprod
        
        thisprod = 1

    return maxprod

def getDiagonalElements(matrix):
    """
    Returns a list of lists; Each (sub)list will contain 
    """

colprods = [maxProduct(col) for col in grid.T]
maxcolprod = max(colprods)

rowprods = [maxProduct(row) for row in grid]
maxrowprod = max(rowprods)

#! /usr/bin/python

import numpy as np

# Multiplying down and up are identical, left and right are identical.
# So 4 functions required, horizontal, vertical, left diagonal and right diag.

def maxProduct(arr):
    """
    Calculates the product of 4 elements, using a sliding window across
    the array, and returns the maximum value of the product. 

    Args:
    arr     Input array

    Returns:
    maxval  Maximum product
    """

    maxprod = np.amax([np.prod(arr[x:x+4]) for x in range(len(arr))])
    return maxprod

def diagProd(gridn):
    """
    Get all diagonals in direction of the main diagonal, and return max product
    among every 4 elements.

    Args:
    grid    The input 2D grid

    Returns:
    maxprod THe max. product among every set of 4 elements.
    """

    maxprod = 0
    for rr, row in enumerate(gridn):
        for cc, col in enumerate(row):
            try:
                prod = gridn[rr, cc] * gridn[rr+1, cc+1] * gridn[rr+2, cc+2] * gridn[rr+3, cc+3]
                if prod > maxprod:
                    maxprod = prod
            except IndexError:
                pass
    return (maxprod)


grid    = np.loadtxt('011-Grid.dat')
nrows   = ncols = 20 # from the grid 
winSize = 4

maxcol  = np.amax([maxProduct(col) for col in grid.T])
maxrow  = np.amax([maxProduct(row) for row in grid])

maxd2   = diagProd(np.rot90(grid))
maxd1   = diagProd(grid)

maxprod = np.amax([maxcol, maxrow, maxd1, maxd2])
print(maxprod)

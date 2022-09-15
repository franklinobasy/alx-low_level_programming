#!/usr/bin/python3

''' 5-island_perimeter.py'''


def island_perimeter(grid):
    '''
    This function returns the perimeter of the island described in grid
    Args:
        grid: is a list of list of integers

    -------------------------------------------------------------------
    0 represents a water zone
    1 represents a land zone
    One cell is a square with side length 1
    Grid cells are connected horizontally/vertically (not diagonally).
    Grid is rectangular, width and height don’t exceed 100

    Example:
    >>> grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0]
        ]
    >>> print(island_perimeter(grid))
        12

    '''
    ncol = len(grid[0])
    nrow = len(grid)
    perimeter = 0
    for i in range(nrow):
        for j in range(ncol):
            perimeter += validate_cell(grid, i, j, nrow, ncol)
    return perimeter


def validate_cell(grid, irow, jcol, nrow, ncol):
    '''
    This function returns valid perimeter of a cell in a grid
    '''
    count = 0
    if grid[irow][jcol] == 1:
        if irow in [0, nrow - 1]:
            count += 1
        if jcol in [0, ncol - 1]:
            count += 1
        if (irow - 1) >= 0 and grid[irow - 1][jcol] == 0:
            count += 1
        if (irow + 1) < nrow and grid[irow + 1][jcol] == 0:
            count += 1
        if (jcol - 1) >= 0 and grid[irow][jcol - 1] == 0:
            count += 1
        if (jcol + 1) < ncol and grid[irow][jcol + 1] == 0:
            count += 1
    return count

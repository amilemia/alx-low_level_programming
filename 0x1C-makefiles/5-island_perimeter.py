#!/usr/bin/python3
"""
5-island_perimeter module
"""


def island_perimeter(grid):
    """
    Returns the perimeter of the island described in the grid
    """

    perimeter = 0
    rows = len(grid)
    cols = len(grid[0])

    for row in range(rows):
        for col in range(cols):
            if grid[row][col] == 1:
                # Check top
                if row == 0 or grid[row-1][col] == 0:
                    perimeter += 1
                # Check bottom
                if row == rows-1 or grid[row+1][col] == 0:
                    perimeter += 1
                # Check left
                if col == 0 or grid[row][col-1] == 0:
                    perimeter += 1
                # Check right
                if col == cols-1 or grid[row][col+1] == 0:
                    perimeter += 1

    return perimeter

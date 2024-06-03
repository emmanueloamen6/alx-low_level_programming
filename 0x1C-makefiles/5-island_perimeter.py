#!/usr/bin/python3
"""A Class that  that returns the perimeter of the island described in grid"""


def island_perimeter(grid):
    """return the perimeter of the gird island"""
    height = len(grid)
    width = len(grid[0])
    edges = 0
    sizes = 0

    for i in range(height):
        for j in range(width):
            sizes += 1
            if (j > 0 and grid[i][j - 1] == 1):
                edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
    return ((sizes * 4) - (edges * 2))


#!/usr/bin/python3
"""
A module for working with grid structures
"""

def island_perimeter(grid: list):
    """
    Computes the perimeter of the island

    Args:
        grid (list of list of integers): 0 - Water, 1 - land

    Returns:
        int: Perimeter of island
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
    return size * 4 - edges * 2


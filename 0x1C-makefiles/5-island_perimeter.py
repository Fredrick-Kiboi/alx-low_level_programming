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
    rows = len(grid)
    perimeter = 0
    for i in range(rows):
        columns = len(grid[i])
        for j in range(columns):
            if (grid[i][j] == 1):
                left = 1 if j == 0 or grid[i][j - 1] == 0 else 0
                top = 1 if i == 0 or grid[i - 1][j] == 0 else 0
                right = 1 if j == columns - 1 or grid[i][j + 1] == 0 else 0
                bottom = 1 if i == rows - 1 or grid[i + 1][j] == 0 else 0
                perimeter += (top + right + bottom + left)
        return perimeter


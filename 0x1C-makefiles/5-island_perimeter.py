#!/usr/bin/python3
"""
Module contain island_perimeter function
"""


def island_perimeter(grid):
    """
    Returns the perimeter of the island described in ``grid``
    """
    perimeter = 0
    height = len(grid[0])
    width = len(grid)

    for i in range(width):
        for j in range(height):
            if grid[i][j] == 1:
                if j == height - 1 or j == 0:
                    perimeter += 1
                    continue
                if i == 0 or i == width - 1:
                    perimeter += 1
                    continue

                if grid[i][j + 1] == 0:
                    perimeter += 1
                if grid[i][j - 1] == 0:
                    perimeter += 1
                if grid[i + 1][j] == 0:
                    perimeter += 1
                if grid[i - 1][j] == 0:
                    perimeter += 1

    return perimeter

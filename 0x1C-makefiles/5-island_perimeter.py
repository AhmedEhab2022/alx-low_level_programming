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

                if j < height - 1 and grid[i][j + 1] == 0:
                    perimeter += 1

                if j > 0 and grid[i][j - 1] == 0:
                    perimeter += 1

                if i < width - 1 and grid[i + 1][j] == 0:
                    perimeter += 1

                if i > 0 and grid[i - 1][j] == 0:
                    perimeter += 1

    return perimeter

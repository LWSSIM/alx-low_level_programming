#!/usr/bin/python3
"""Interview Prep"""


def island_perimeter(grid):
    """

    Attr:
        grid (List[List[int]]): is a list of list of integers:
            0 represents a water zone
            1 represents a land zone
            One cell is a square with side length 1
            Grid cells are connected horizontally/vertically (not diagonally).
            Grid is rectangular, width and height don’t exceed 100
            Grid is completely surrounded by water,
                and there is one island (or nothing).
            The island doesn’t have “lakes”
            (water inside that isn’t connected to the water around the island).
    Return:
         the perimeter of the island described in grid
    """

    if not grid or not grid[0]:
        return 0

    rows, cols = len(grid), len(grid[0])
    perimeter = 0

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                perimeter += 4
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2

    return perimeter

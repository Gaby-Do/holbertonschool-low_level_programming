#!/usr/bin/python3
"""
5. Island Perimeter
returns the perimeter of the island described in grid
"""


def island_perimeter(grid):
    """
    returns the perimeter of the island described in grid
    """
    if not grid:
        return 0
    else:
        count = 0
        grid_len = len(grid)
        row_len = len(grid[0])
        for x in range(0, grid_len):
            for i in range(0, row_len):
                if grid[x][i] == 1:
                    if x == 0 or grid[x-1][i] == 0:
                        count += 1
                    if i == 0 or grid[x][i-1] == 0:
                        count += 1
                    if x == (grid_len - 1) or grid[x + 1][i] == 0:
                        count += 1
                    if i == (row_len - 1) or grid[x][i + 1] == 0:
                        count += 1
    return count

#!/usr/bin/python3
"""
Perimeter of the Island
"""


def island_perimeter(grid):
        count = 0
        for i in range(len(grid)):
            for j in range(len(grid[i])):
                if grid[i][j] is 1:
                    count += 4
                    if j > 0 and grid[i][j - 1]:
                        count -= 2
                    if i > 0 and grid[i - 1][j]:
                        count -= 2
            return count

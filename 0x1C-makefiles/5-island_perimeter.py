#!/usr/bin/python3
''' The function that calculate the perimeter of an island '''


def island_perimeter(grid):
    ''' The function that calculate the perimeter of an island '''

    perimeter = 0
    if grid is None or grid[0] is None:
        return 0
    else:
        adjacents = [(-1, 0), (1, 0), (0, -1), (0, 1)]
        for i in range(len(grid)):
            for j in range(len(grid[0])):
                if grid[i][j] == 0:
                    continue
                origin = 4
                for adjacent in adjacents:
                    new_x = i + adjacent[0]
                    new_y = j + adjacent[1]
                    if 0 < new_x < len(grid) and 0 < new_y < len(grid[i]) and\
                       grid[new_x][new_y] == 1:
                        origin -= 1
                perimeter += origin

        return perimeter

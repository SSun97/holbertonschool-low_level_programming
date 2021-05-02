#!/usr/bin/python3
def island_perimeter(grid):
    '''
       The function that calculate the perimeter of an island
    '''
    perimeter = 0
    adjacents = [(-1, 0), (1, 0), (0, -1), (0, 1)]
    for i in range(len(grid)):
        for j in range(len(grid[i])):
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

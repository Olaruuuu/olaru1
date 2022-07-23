# Write your code here :-)
#   Practice

# grid = [['.', '.', '.', '.', '.', '.'],
#         ['.', 'O', 'O', '.', '.', '.'],
#         ['O', 'O', 'O', 'O', '.', '.'],
#         ['O', 'O', 'O', 'O', 'O', '.'],
#         ['.', 'O', 'O', 'O', 'O', 'O'],
#         ['O', 'O', 'O', 'O', 'O', '.'],
#         ['O', 'O', 'O', 'O', '.', '.'],
#         ['.', 'O', 'O', '.', '.', '.'],
#         ['.', '.', '.', '.', '.', '.']]

# for y in range(6):
#     for x in range(9):
#         print(grid[x][y], end="")
#     print()

# import random
# numberOfStreaks = 0
# for experimentNumber in range(10000):
    #Code that creates a list of 100 'heads' or 'tails' values.
#     sample = []
#     for i in range(100):
#         if random.randint(0,1) == 0:
#             sample.append('H')
#         else:
#             sample.append('T')

        #Code that checks if there is a streak of 6 heads or tails in a row.
#     checker = 0
#     for i in range(len(sample)-1):

#         if sample[i] == sample[i+1]:
#             checker += 1
#         else:
#             checker = 0

#         if checker == 5:
#             numberOfStreaks += 1
#             break

# print('Chance of streak: %s%%' % (numberOfStreaks / 100000))

# def transform(lista):
#     s = ""
#     for i in range(len(lista)):
#         s += str(lista[i])
#         s += ', '
#     return s

# spam = ['apples', 'bananas', 'tofu', 'cats']
# spam1 = [1,2,3,4,5]
# spam2 = []
# print(transform(spam))
# print(transform(spam1))
# print(transform(spam2))

# import random, time, copy

# WIDTH = 6
# HEIGHT = 6

# numCells = []
# for x in range(WIDTH):
#     column = []
#     for y in range(HEIGHT):
#         if random.randint(0,1) == 1:
#             column.append("#")
#         else:
#             column.append(' ')
#     numCells.append(column)

# while True:
#     print('--------------Start--------------')
#     currentCells = copy.deepcopy(numCells)

#     for y in range(HEIGHT):
#         for x in range(WIDTH):
#             print(currentCells[x][y], end='')
#         print()

#     for x in range(WIDTH):
#         for y in range(HEIGHT):
#             leftCoord = (x - 1) % WIDTH
#             rightCoord = (x + 1) % WIDTH
#             upCoord = (y - 1) % HEIGHT
#             downCoord = ( y + 1 ) % HEIGHT

#             numar = 0
#             if currentCells[leftCoord][upCoord] == '#':
#                 numar += 1
#             if currentCells[x][upCoord] == '#':
#                 numar += 1
#             if currentCells[rightCoord][upCoord] == '#':
#                 numar += 1
#             if currentCells[leftCoord][y] == '#':
#                 numar += 1
#             if currentCells[x][y] == '#':
#                 numar += 1
#             if currentCells[rightCoord][y] == '#':
#                 numar += 1
#             if currentCells[leftCoord][downCoord] == '#':
#                 numar += 1
#             if currentCells[x][downCoord] == '#':
#                 numar += 1
#             if currentCells[rightCoord][downCoord] == '#':
#                 numar += 1

#             if((numar == 2 or numar == 3) and currentCells == '#'):
#                 numCells[x][y] = '#'
#             elif numar == 3 and currentCells[x][y] == ' ':
#                 numCells[x][y] = '#'
#             else:
#                 numCells[x][y] = ' '
#     time.sleep(2)

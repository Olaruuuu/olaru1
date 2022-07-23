# Write your code here :-)
import pprint

def displayInventory(inventory):
    print("Inventory:")
    item_total = 0
    for k, v in inventory.items():
        item_total = item_total + v
        print(v, end=' ')
        print(k)
    print("Total number of items: " + str(item_total))

def addToInventory(inventory, addedItems):
    for j in range(len(addedItems)):
        if addedItems[j] in inventory.keys():
            inventory[addedItems[j]] = inventory[addedItems[j]] + 1
        else:
            inventory[addedItems[j]] = 1
    return inventory

inv = {'gold coin': 42, 'rope': 1}
dragonLoot = ['gold coin', 'dagger', 'gold coin', 'gold coin', 'ruby']
inv = addToInventory(inv, dragonLoot)

displayInventory(inv)

# inventory.py
# stuff = {'rope': 1, 'torch': 6, 'gold coin': 42, 'dagger': 1, 'arrow': 12}


# displayInventory(stuff)

# tablie = {'1h': 'bking', '6c': 'wqueen', '2g': 'bbishop', '5h': 'bqueen', '3e': 'wking'}
# pozitii = []
# for a in range(8):
#     for x in [chr(i) for i in range(ord('a'), ord('i'))]:
#         pozitii.append((str(a)+x))

# def checkAppearanceNumberOfPiece(tabla, piesa):
#     nrAparitii = 0
#     for i in tabla.keys():
#         if tabla[i] == piesa:
#             nrAparitii += 1
#     if piesa == 'bking' or piesa == 'wking' or piesa == 'bqueen' or piesa == 'wqueen':
#         if nrAparitii >= 2:
#             return False
#         else:
#             return True
#     elif piesa == 'bpawn' or piesa == 'wpawn':
#         if nrAparitii >= 9:
#             return False
#         else:
#             return True
#     else:
#         if nrAparitii >= 3:
#             return False
#         else:
#             return True

# def isValidChessBoard(tabla):
#     testLista = list(tabla.keys())
#     if len(testLista) > 16:
#         return False
#     else:
#         for i in range(len(testLista)):
#             if testLista[i] not in pozitii:
#                 return False
#             else:
#                 for i in tabla.keys():
#                     if checkAppearanceNumberOfPiece(tabla,tabla[i]) == False:
#                         return False
#                     else:
#                         return True

# print(isValidChessBoard(tablie))


# allGuests = {'Alice': {'apples': 5, 'pretzels': 12},
#              'Bob': {'ham sandwiches': 3, 'apples': 2},
#              'Carol': {'cups': 3, 'apple pies': 1}}

# def totalBrought(guests, item):
#     numBrought = 0
#     for k, v in guests.items():
#        numBrought = numBrought + v.get(item, 0)
#     return numBrought

# print('Number of things being brought:')
# print(' - Apples         ' + str(totalBrought(allGuests, 'apples')))
# print(' - Cups           ' + str(totalBrought(allGuests, 'cups')))
# print(' - Cakes          ' + str(totalBrought(allGuests, 'cakes')))
# print(' - Ham Sandwiches ' + str(totalBrought(allGuests, 'ham sandwiches')))
# print(' - Apple Pies     ' + str(totalBrought(allGuests, 'apple pies')))

# theBoard = {'top-L': ' ', 'top-M': ' ', 'top-R': ' ',
#             'mid-L': ' ', 'mid-M': ' ', 'mid-R': ' ',
#             'low-L': ' ', 'low-M': ' ', 'low-R': ' '}

# def printBoard(board):
#     print(board['top-L'] + ' | ' + board['top-M'] + ' | ' + board['top-R'])
#     print('- + - + -')
#     print(board['mid-L'] + ' | ' + board['mid-M'] + ' | ' + board['mid-R'])
#     print('- + - + -')
#     print(board['low-L'] + ' | ' + board['low-M'] + ' | ' + board['low-R'])

# turn = 'X'

# for i in range(9):
#     printBoard(theBoard)
#     move = input()
#     theBoard[move] = turn
#     if turn == 'X':
#         turn = '0'
#     else:
#         turn = 'X'


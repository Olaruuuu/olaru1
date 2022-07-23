# Write your code here :-)

def getMaxLength(tableData):
    maxLen = 0
    for i in range(len(tableData)):
        for j in tableData[i]:
            if len(j) > maxLen:
                maxLen = len(j)

    return maxLen

def printTable(tableData):
    i = 0
    arg = getMaxLength(tableData)
    for j in range(len(tableData) + 1):
        word = tableData[i][j]
        print (word.rjust(arg)+ " " + tableData[i+1][j].rjust(arg) +" "+ tableData[i+2][j].rjust(arg))

    return tableData

tableData = [['apples', 'oranges', 'cherries', 'banana'],
             ['Alice', 'Bob', 'Carol', 'David'],
             ['dogs', 'cats', 'moose', 'goose']]

printTable(tableData)

# print("Type your sentence: ")
# myString = input()

# vowels = ['a','e','i','o','u','y']
# consonant = ['q','w','r','t','p','s','d','f','g','h','j','k','l','m','n','b','v','c','x','z','ch','gh']

# cuvinte = myString.split()
# lastList = []

# for cuv in cuvinte:
#     if cuv[0] in vowels or cuv[0] in vowels:
#         lastList.append(cuv + 'yay')
#     elif cuv[0] in consonant:
#         lastList.append(cuv[1:] + cuv[0] + 'ay')

# print(lastList)

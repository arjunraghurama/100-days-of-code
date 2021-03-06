# https://www.geeksforgeeks.org/smallest-difference-pair-values-two-unsorted-arrays/

def findSmallestDifference(firstArray, secondArray):
    
    firstArray.sort()
    secondArray.sort()

    # i for firstarray and j for secondarray
    i,j = 0,0
    smallestDifference = float("inf")
    currentDifference = float("inf")
    smallestPair = []
    while(i< len(firstArray) and j < len(secondArray)):
        num1 = firstArray[i]
        num2 =  secondArray[j]
        currentDifference = abs(num1- num2)
        if(num1 < num2):
            i+=1
        elif(num2 < num1):
            j+=1
        else:
            return [num1, num2]

        if currentDifference < smallestDifference:
            smallestDifference = currentDifference
            smallestPair = [num1, num2]

    return smallestPair

ar1 =[1, 3, 15, 11, 2]
ar2 = [23, 127, 235, 19, 8]

print(findSmallestDifference(ar1,ar2))

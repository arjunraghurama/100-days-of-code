arr = [3,5,-4,8,11,1,-1,5]
sum =10

hashTable={}
for idx, element in enumerate(arr):
  if(hashTable.get((sum-element))):
    print('Num1 idx: ', hashTable.get((sum-element)))
    print('Num2 idx: ', idx)
    print(element, sum-element)
  else:
    hashTable[element]=idx

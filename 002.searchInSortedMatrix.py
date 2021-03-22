def searchInMatrix(matrix, target):
  if(len(matrix)==0):
    return False
  rows = len(matrix)
  columns = len(matrix[0])
  low = 0
  high = rows*columns -1
  while (low<=high):
    mid = (low+high)//2
    if ( matrix[mid//columns][mid%columns] == target):
      return True
    elif matrix[mid//columns][mid%columns] <  target:
      low = mid+1
    else:
      high = mid-1
      
matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,50]]
target = 16
print(searchInMatrix(matrx,target))      

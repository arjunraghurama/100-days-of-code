def function(givenString):
  hashMap={}
  for letter in givenString:
    if hashMap.get(letter) :
      hashMap[letter]+=1
    else :
      hashMap[letter]=1
  for i, letter in enumerate(givenString):
    if hashMap.get(letter) ==1:
      return i
    else:
      continue
  return -1

print(function("loveleetcode"))


print(function("leetcode"))

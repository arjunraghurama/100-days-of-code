def function(givenString):
  if len(givenString) < 2:
    return givenString
  givenString = givenString.lower()
  hashMap={}
  for letter in givenString:
    if hashMap.get(letter) :
      return letter
    else :
      hashMap[letter]=True
  return ""

print(function("Tentative"))

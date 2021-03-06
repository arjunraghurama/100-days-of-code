def getNewLetter(letter, alphabets,key):
    newLetterIndex = (alphabets.index(letter) + key)%26
    return alphabets[newLetterIndex]

def caecerCipher(string , key):
    key = key % 26
    alphabets = "abcdefghijklmnopqrstuvwxyz"
    print(len(alphabets))
    result = []
    for letter in string:
        result.append(getNewLetter(letter, alphabets, key))
    return "".join(result)


print(caecerCipher("abcxyz",2))

def validParentheses(s):
      if (len(s)) < 2 :
        return False
      bracketMap = {'(':')','{':'}','[':']'}
      stack = []
      for parantheses in s:
        if parantheses == '(' or parantheses =='{' or parantheses == '[':
          stack.append(parantheses)
        else:
          if(len(stack)<1):
                return False
          c = stack.pop()
          if ( parantheses != bracketMap[c] ) :
            return False

      return len(stack) == 0

    
s = "()[]{{}"
print(validParentheses(s))

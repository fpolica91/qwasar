
def empty_space_col(j,n):
  if j == 0 or j == n-1:
    return False
  return True

def empty_space_row(i, n):
  if i == 0 or i == n -1:
    return False
  return True

def build(j, i, n):
  if empty_space_row(i,n) == False or empty_space_col(j,n) == False:
    print("*", end='')
  else:
    print(" ", end='')
    




def square(n):
  # the top row is created by i at 0
  # the bottom row is created by i being == n-1
  # the right colum is created by j being == n -1
  # the left column is created by j being == 0
  for i in range(n):
    for j in range(n):
      build(j ,i, n)
    # ensures starts print below each other
    print()
    
  
    




if __name__ == '__main__':
    square(5)
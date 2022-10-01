
def left(n):
  for i in range(n):
    for _ in range(i):
      print("*", end='')
    for _ in range(i+1, n):
      print(" ", end='')
    print()

def right(n):
  for i in range(n):
    for _ in range(n-i):
      print(" ", end='')
    for _ in range(i):
      print('*', end='')
    print()

def upside(n):
  for i in range(n):
    for _ in range(n-i):
      print("*",end='')
    print()


def arrow(n):
  for i in range(n):
    for _ in range(i):
      print("*", end='')
    for _ in range(n-i):
      print(" ", end='')
    print()
  for i in range(n):
    for _ in range(n-i):
      print("*", end='')
    print()

def rev_arrow(n):
  for i in range(n):
    for _ in range(n-i):
      print(" ", end='')
    for _ in range(i):
      print("*", end='')
    print()
  for i in range(n):
    for _ in range(i):
      print(" ", end='')
    for _ in range(n-i):
      print("*", end='')
    print()
    


 





if __name__ == '__main__':
  rev_arrow(6)
  # left(6)
  # right(6)
  # upside(6)
# *
# * *
# * * *
# * * * *

# *****
# ***
# **
# *
# ****
#  ***
#   **
#    *

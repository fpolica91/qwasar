def square(sides):
  for k in range(sides):
    for j in range(sides):
      #  when k is zero we print the top horizontal line after the initial 0
      #  when k == sides - 1 we print the bottom horizontal line
      #  when j = 0 we print the left vertical line
      #  when j == sides - 1 we print the right vertical line
      if (k == 0 or k == sides - 1 or j == 0 or j == sides-1):
          print(j, end='  ') 
      else:
        # we print spaces for the interior of the square
        print(' ', end = '  ')
    print()


    




if __name__ == '__main__':
    square(5)



    # *
    # **
    # ***
    # ****

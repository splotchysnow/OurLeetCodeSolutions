list1 = [28,43,127,75,69,63,10]

print(sum(list1))

while len(list1) != 1:
    list1.sort() #step1 sort the list
    b = list1.pop(0) # pop the lowest
    c = list1.pop(0) # pop the second lowest
    a = b + c  # add the last two together

    print("round 1 smallest two values are ", b, c)
    print("sum is: ", a) #print sum
    list1.insert(0, a) #insert A back in

    #print the current situation
    print()
    print(list1)
    print()
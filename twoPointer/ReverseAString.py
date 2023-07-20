def reverse_string(s):
    #an empty list to store the revesed elements
    reversed_list = []

    #loop through the origina list in reverse order
    for i in range(len(s) - 1, -1, -1):
        #append 
        reversed_list.append(s[i])
      
    return reversed_list

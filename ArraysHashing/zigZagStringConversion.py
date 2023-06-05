#I'm not really confident of my answer

def printZigZagConcat(s, n):
    if n == 1:
        print(s)
        return
    
    result = ['' for _ in range(n)]
    down = True #keeps track of the direction of traversal
    row = 0 #determines the current row

    for char in s:
        result[row] += char
        if row == n - 1:
            down = False
        elif row == 0:
            down = True
        
        if down:
            row += 1
        else:
            row -= 1

    for row in result:
        print(row, end='')

"""

- Initialize the special cases:

- Use a loop to iterate through each character in the input string.

- Keep track of the current row (row) and the direction of traversal (down or up).

- In C++, the rows are concatenated into a single string res.
In Python, the rows are joined into a single string using ''.join(zigzag).

"""

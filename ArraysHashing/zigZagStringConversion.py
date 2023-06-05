def printZigZagConcat(s, n):
    if n == 1:
        print(s)
        return
    
    result = ['' for _ in range(n)]
    down = True
    row = 0

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

# Driver Code
str = "PAYPALISHIRING"
N = 3
printZigZagConcat(str, N)

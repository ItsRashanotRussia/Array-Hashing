def lengthOfLastWord(s):
#Split the string into words using the split() method
    words = s.split()

#If the list of words is empty, return 0
    if not words:
        return 0

    last_word = words[-1]
    return len(last_word)

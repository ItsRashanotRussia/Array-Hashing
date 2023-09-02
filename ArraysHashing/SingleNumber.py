class Solution:
    def singleNumber(self, nums):
        #an empty dictionary to store the counts of each number
        #refer to lectures 13 and 14 and assignment 3 (book store assignemnt)
        counts = {}
        
        #loop through each element in the array
        for num in nums:
            #if the number is not in the dictionary, add it with a count of 1
            if num not in counts:
                counts[num] = 1
            else:
                #if the number is already in the dictionary add 1
                counts[num] += 1
        
        #iterate through the dictionary to find the number with a count of 1
        for num, count in counts.items():
            if count == 1:
                return num

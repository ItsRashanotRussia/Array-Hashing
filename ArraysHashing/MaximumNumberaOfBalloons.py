def max_number_of_balloons(text):
    char_count = {}

    #the freq of each char
    for char in text:
        if char in char_count:
            char_count[char] += 1
        else:
            char_count[char] = 1

    #max num of instances of balloon
    max_instances = float('inf')
    for char in 'balon':
        if char == 'l' or char == 'o':
            count = char_count.get(char, 0) // 2
        else:
            count = char_count.get(char, 0)
        max_instances = min(max_instances, count)

    return max_instances


"""


int maxNumberOfBalloons(string& text) {
    unordered_map<char, int> charCount;

    //freqy of each char in 
    for (char c : text) {
        charCount[c]++;
    }
    
    int maxInstances = INT_MAX;
    for (char c : "balon") {
        int count = charCount[c];
        if (c == 'l' || c == 'o') {
            count /= 2;
        }
        maxInstances = min(maxInstances, count);
    }

    return maxInstances;
}

"""

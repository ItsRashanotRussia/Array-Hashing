"""


int maxNumberOfBalloons(string& text) {
    unordered_map<char, int> charCount;

    // Count the frequency of each character in the text
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

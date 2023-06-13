"""


int findMajorityElement(vector<int> &v)
{
    int element = 0;
    int element = 0;
    
    for (int num : v) {
        if (count == 0) {
            element = num;
            count = 1;
        } else if (element == num) {
            count++;
        } else {
            count--;
        }
    }
    
    return element;
}

int main()
{
    int n;
    cout << "Enter the size of the vector: ";
    cin >> n;
    vector<int> input;
    int element;
    cout << "Enter the elements of the vector: ";
    for (int i = 0; i < n; i++) {
        cin >> element;
        input.push_back(element);
    }
    int result = findMajorityElement(input);
    cout << "The Majority Element is: " << result << endl;
    return 0;
}


1. creates a vector to store the input array elements.
2. pushes teh elements into the vector.
3. calls the findMajorityElement function with the input vector as a parameter
4. stores the result in a variable called 'result'.
5. initializes the variables element and count.
6. loops through the input vector and checks each element.

"""

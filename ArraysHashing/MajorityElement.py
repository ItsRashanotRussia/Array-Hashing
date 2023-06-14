#lists instead of vectors
# same logic inside FindMajorityElement

def findMajorityElement(v):
    element = 0
    count = 0
    
    for num in v:
        if count == 0:
            element = num
            count = 1
        elif element == num:
            count += 1
        else:
            count -= 1
    
    return element

def main():
    n = int(input("Enter the size of the list: "))
    input_list = []
    element = 0
    
    print("Enter the elements of the list:")
    for i in range(n):
        element = int(input())
        input_list.append(element)
    
    result = findMajorityElement(input_list)
    print("The Majority Element is:", result)

main()

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
    //user input
    cin >> n;
    vector<int> input;
    int element;
    //user input
    for (int i = 0; i < n; i++) {
        cin >> element;
        input.push_back(element);
    }
    int result = findMajorityElement(input);
   //output
    return 0;
}

1. creates a vector/list to store the input array elements.
2. pushes teh elements into the vector.
3. stores the result in a variable called result.
4. initializes the variables element and count.
5. loops through the input vector and checks each element.

"""

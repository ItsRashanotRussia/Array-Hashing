#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <sstream>

using namespace std;

class Solution {
public:
    string simplifyPath(string path) {
        stack<string> stk;
        string dir;

        for (int i = 0; i < path.size(); ++i) {
            while (i < path.size() && path[i] == '/')
                ++i;

            dir.clear();
            while (i < path.size() && path[i] != '/')
                dir += path[i++];

            if (dir == ".." && !stk.empty())
                stk.pop();
            else if (dir != "." && dir != "")
                stk.push(dir);
        }

        stringstream result;
        while (!stk.empty()) {
            result << "/" << stk.top() << result.str();
            stk.pop();
        }

        return result.str().empty() ? "/" : result.str();
    }
};

int main() {
    Solution solution;
    string path = "/a/./b/../../c/";
    cout << "Simplified path: " << solution.simplifyPath(path) << endl;
    return 0;
}

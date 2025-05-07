#include <iostream>
#include <vector>
#include <map>
#include <unordered_set>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        vector<char> charArray;
        map<char,int> dixct;
        
        string input1, input2, input3;
        cin >> input1;
        cin >> input2;
        cin >> input3;

        auto insertChars = [&](const std::string &input) {
            for (char c : input) {
                charArray.push_back(c);
            }
        };
        insertChars(input1);
        insertChars(input2);
        insertChars(input3);
        
        for (int i = 0; i < charArray.size(); i++) {
            dixct[charArray[i]]++;
        }

        for (const auto& pair : dixct) {
            if (pair.second == 2) {
                cout << pair.first << endl;
                break;
            }
        }
    }

    return 0;
}

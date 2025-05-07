#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        string s;
        cin >> s;

        string target1 = "pie";
        string target2 = "map";
        string target3 = "mapie";  // Adding the combined word

        int count1 = 0, count2 = 0, count3 = 0; // count for "pie", "map", and "mapie"
        size_t pos = 0;

        while ((pos = s.find(target3, pos)) != string::npos) {
            count3++;
            pos += target3.length();  // Move past "mapie"
        }

        pos = 0;
        while ((pos = s.find(target1, pos)) != string::npos) {
            count1++;
            pos += target1.length();  // Move past "pie"
        }

        pos = 0;
        while ((pos = s.find(target2, pos)) != string::npos) {
            count2++;
            pos += target2.length();  // Move past "map"
        }

        // For each "mapie" found, we should reduce both the counts of "pie" and "map" by 1
        count1 -= count3;
        count2 -= count3;

        cout << count1 + count2 + count3 << endl; // Final count of all occurrences
    }
    return 0;
}



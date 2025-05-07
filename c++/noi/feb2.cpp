#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int R, N;
    cin >> R;
    vector<string> names;
    vector<float> marks;
    
    string name;
    float mark;
    while (cin >> name) {
        names.push_back(name);
        if (cin.peek() == '\n' || cin.eof()) break;
    }
    
    N = names.size();
    marks.resize(N);
    for (int i = 0; i < N; ++i) cin >> marks[i];
    
    vector<pair<float, string>> students;
    for (int i = 0; i < N; ++i) students.push_back({marks[i], names[i]});
    
    sort(students.rbegin(), students.rend());
    
    int rank = 1;
    vector<string> result;
    for (int i = 0; i < N; ++i) {
        if (i > 0 && students[i].first != students[i - 1].first) rank++;
        if (rank == R) result.push_back(students[i].second);
    }
    
    sort(result.begin(), result.end());
    for (const string& student : result) cout << student << endl;
    
    return 0;
}

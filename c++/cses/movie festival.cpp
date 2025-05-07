#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> movies(n);

    for (int i = 0; i < n; ++i) {
        cin >> movies[i].first >> movies[i].second;
    }

    
    sort(movies.begin(), movies.end(), [](auto& a, auto& b) {
        return a.second < b.second; 
    });

    int last_end = 0, count = 0;

    for (const auto& movie : movies)
    {
        if(movie.first >= last_end){
            last_end = movie.second;
            count++;
        }
    }
    

    cout << count << endl;

    return 0;
}


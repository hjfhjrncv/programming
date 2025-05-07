#include <iostream>
#include <set>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    multiset<int> tickets;


    for (int i = 0; i < n; i++)
    {
        int price;
        cin>>price;

        tickets.insert(price);
    }
    

    for (int i = 0; i < m; i++) {
        int customer_max;
        cin >> customer_max;

        
        auto it = tickets.upper_bound(customer_max);


        if(it == tickets.begin()){
            cout<<-1<<endl;
        }

        else{
            it--;
            cout<<*it<<endl;

            tickets.erase(it);
        }
    }

    return 0;
}

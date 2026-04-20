#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int T; - test case 
    cin >> T; // number of test cases

    while (T--)
    {
        int N, K; // n - no of candy bags || k - no of minutes given ya fir no of bari monk can eat 
        cin >> N >> K;

        priority_queue<long long> pq; // priority queue items ko ek list me dalta hai aur unhe decending order me place krta hai 

        for (int i = 0; i < N; i++) // gitne candy bags hain untni bar loop run hoga aur utni bar no of candies jaengi priority queue me 
        {
            long long x;
            cin >> x;
            pq.push(x); // priority queue me ja kr apne aap decending me lag jaenge 
        }

        long long total = 0;

        while (K-- && !pq.empty())
        {
            long long maxCandies = pq.top();
            pq.pop();

            total += maxCandies;
            pq.push(maxCandies / 2);
        }

        cout << total << endl;
    }

    return 0;
}

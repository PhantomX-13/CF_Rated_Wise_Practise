#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n, x;
        cin >> n >> x;
        vector<long long> points_arr;
        points_arr.push_back(0);
        for(int i=0; i<n; i++)
        {
            long long point;
            cin >> point;
            points_arr.push_back(point); // Add gas station point to the array
        }
        points_arr.push_back(x); // Add destination point
        n = points_arr.size(); // Update n to include start, gas stations, and destination
        
        long long max_distance_between_points = INT_MIN; // Variable to store the maximum distance between consecutive points
        for (int i=1; i<n; i++)
        {
            if(i == n-1) // If it's the last point (destination)
                max_distance_between_points = max(max_distance_between_points, 2 * (points_arr[i] - points_arr[i - 1])); // Consider the round trip distance
            else
                max_distance_between_points = max(max_distance_between_points, points_arr[i] - points_arr[i - 1]); // Consider the one-way distance
        }
        cout << max_distance_between_points << '\n';
    }
    return 0;
}

// Time Complexity (TC): O(n) = O(50)
// Space Complexity (SC): O(n)
//Problem Link: https://codeforces.com/problemset/problem/1901/A
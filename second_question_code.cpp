#include <bits/stdc++.h>
using namespace std;

// triplet which is closest to target
int Triplet(vector<int>& arr, int target)
{

    // Sort the array
    sort(arr.begin(), arr.end());

    
  //not using INT_MAX to avoid overflowing condition 
    int closestSum = 1000000000;

    // Fix the smallest number among
    // the three integers
    for (int i = 0; i < arr.size() - 2; i++) {

        // Two pointers initially pointing at
        // the last and the element
        // next to the fixed element
        int ptr1 = i + 1, ptr2 = arr.size() - 1;

        // While there could be more pairs to check
        while (ptr1 < ptr2) {

            // Calculate the sum of the current triplet
            int sum = arr[i] + arr[ptr1] + arr[ptr2];
            
              // if sum is equal to x, return sum as
              if (sum == target)
              return sum;
            // If the sum is more closer than
            // the current closest sum
            if (abs(target - sum) < abs(target - closestSum)) {
                closestSum = sum;
            }

            // If sum is greater then x then decrement
            // the second pointer to get a smaller sum
            if (sum > target) {
                ptr2--;
            }

            // Else increment the first pointer
            // to get a larger sum
            else {
                ptr1++;
            }
        }
    }
    return closestSum;
}
int main()
{
    int target;
    cout<<"Enter target value"<<endl;
    cin>>target;
    int n;
    cout<<"Enter number of elemnets in array"<<endl;
    cin>>n;
    vector<int> arr;
    cout<<"Enter numbers in array"<<endl;
    for(int i=0;i<n;i++)
    {
        int num;
        cin>>num;
    arr.push_back(num);
    }
    cout <<"Sum of triplet is :"<< Triplet(arr, target);

    return 0;
}

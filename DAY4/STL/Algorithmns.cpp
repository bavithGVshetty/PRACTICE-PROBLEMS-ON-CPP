// Algorithmns in STL
// SEARCHING AND SORTING

#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
using namespace std;
int main()

{
    // find() ,binary_search(),count(),sum()
    vector<int> nums = {5, 2, 8, 3, 8, 1, 4};
    cout << "Original vector: ";
    for (int n : nums)
    {
        cout << n << " ";
    }
    cout << "\n";

    //   1.SORTING
    sort(nums.begin(), nums.end());

    cout << "After Sorting\n";
    for (int n : nums)
    {
        cout << n << " ";
    }
    // 2.Reverse
    reverse(nums.begin(), nums.end());
     cout <<"\nAfter Reverse\n";
    for (int n : nums)
    {
        cout << n << " ";
    }

    // 3.Searching
    int key=8;
    if(find(nums.begin(), nums.end(),key)!=nums.end()){
        cout<<key<<"Found";
    }
     if(binary_search(nums.begin(), nums.end(),key)!=nums.end()){
        cout<<key<<"Found using binary search";
    }

   
}

// HOME WORK
// 1.Couting
// 2.Comparing
// 3.Fill
// 4.Tranform 
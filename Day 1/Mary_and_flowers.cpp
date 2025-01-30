// Problem Statement
// One day, Mary wanted to give a present to her friend. She decided on a beautiful bouquet of flowers and began collecting them. 
// She needed precisely 2 types of flowers, and the total number of flowers required was 't'. To gather these, she started picking from her garden,
// which contained 'N' types of flowers. Each type was arranged in a queue in non-decreasing order, such as 1, 3, 6, 15, and so forth.
// Now, she seeks your help in determining the indexes of the flowers she should collect.
// Note: For every case, there will always be a pair of flowers whose sum equals 't'. If multiple pairs exist, select the first occurrence.

// Sample Testcase 1
// Testcase Input
// 7 5
// 1 2 2 4 5 7 10
// Testcase Output
// 0 3
// Explanation
// Flowers at 0th and 3rd indexes sum up to the target only i.e. 1 + 4 = 5 .


#include<iostream>
using namespace std;

int main(){
    int n,t;
    cin>>n>>t;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int left = 0;
    int right = n-1;
    
    while(left<right){
        int sum = arr[left]+arr[right];
        if(sum == t){
            cout<<left<<" "<<right;
            return 0;
        }
        else if(sum<t){
            left++;
        }
        else{
            right--;
        }
    }
     cout << "No pair found" << endl;

    return 0;
}
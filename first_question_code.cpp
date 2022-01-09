// Time complexity = O(n)
//Space complexity = O(n)
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //let size of array is n
    cout<<"Enter number of elements"<<endl;
    int n;
    cin>>n;
    cout<<"Enter elements in list"<<endl;
    //Array check check whether a particuler number is present or not and i guess one number is miss
    // 0 means number is not present 
    int check[n]={0};
    
    for(int i=0;i<n-1;i++)
    {
        int num;
        cin>>num;
        check[num]=1;
    }
    for(int i=0;i<n;i++)
    {
        if(check[i]==0)
        {cout<<"Missing number is: "<<i;break;}
    }
}

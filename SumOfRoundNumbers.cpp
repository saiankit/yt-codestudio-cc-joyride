#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int t;
	cin >> t;
	while(t--)
	{
        int n;cin>>n;
        int temp= n;
        int len =0;
        while (temp!=0)
        {
          temp = temp/10;
          len ++;
        }
        temp = n;
        int arr[len];
        int count = 0;
       for(int i = len-1 ; i >= 0 ; i--)
       {
          arr[i] = temp % 10;
          temp = temp / 10;
          if(arr[i]!=0)
          {count++;}
       }
       cout<<count<<endl;
       for (int i = 0; i < len; i++)
       {
         int indval = len - i - 1; 
         if(arr[i]!=0)
         {
           cout<<arr[i]*pow(10,indval)<<" ";
         }
       }

       cout<<endl;
    }
}
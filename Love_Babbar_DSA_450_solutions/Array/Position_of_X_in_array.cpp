#include <bits/stdc++.h>
using namespace std;

int main()
{
	  int arr[50], n, i=0, x;  
        cin >> x; //element to be found
        cin >> n;  
  
       while(i<n)
       {
           cin >> arr[i];

           if(arr[i] == x)
           cout<<i+1<<endl;
          
          i++;
       }

       return 0;
}
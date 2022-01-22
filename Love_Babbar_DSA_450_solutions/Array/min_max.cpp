#include <bits/stdc++.h>
using namespace std;

int main()
{
	  int arr[50], num, temp, i, j;  
        cin >> num;  
       
        for (i = 0; i < num; i++)  
        {  
            cin >> arr[i];  
        }  
          
	cout << "\nMin Element = "
		<< *min_element(arr, arr + num);

	// Find the maximum element
	cout << "\nMax Element = "
		<< *max_element(arr, arr + num);
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
void ReverseArray(int arr[], int start,int end){
	while(start<end){
		int temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		start++;
		end--;
	}
}
	void Print(int arr[],int n)
	{
		for(int i=0;i<n;i++){
			cout<<arr[i]<<" ";
			
		}
	}
		
		int main(){
			 int n;
			 cin>>n;
			 int arr[n];
			 for(int i=0;i<n;i++){
			 	cin>>arr[i];
			 }
			 n=sizeof(arr)/sizeof(arr[0]);
			 ReverseArray(arr,0,n-1);
			 Print(arr,n);
			
			
			
			
		}
		
		
		
	
	
	
	
	


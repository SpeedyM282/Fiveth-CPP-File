/*
Name: Akhadbek Rizakulov
ID: 2010227
Date: 21.12.2020
Purpose: Write a program to find average of array elements
*/

#include<iostream>
using namespace std;

int main(){
	int i, a[i], n; 
	float average=0;
	cout << "Please enter amount of elements: ";
	cin >> n;
	cout << "Please enter elements of array: " << endl;
/*For loop to input elements of the array*/
	for(i=0; i < n; i++){
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
	cout << "------------------------------------" << endl;
/*For loop to calculate sum of elements of the array*/	
	for(i=0; i < n; i++){
		average+=a[i];
	}
	average/=n; // To divide sum to size of the array
	cout << "Average of elements of the array = " << average << endl;
	cout << "------------------------------------" << endl;
	system("pause");
	return 0;
}

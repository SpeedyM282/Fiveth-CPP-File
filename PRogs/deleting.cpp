/*
Name: Akhadbek Rizakulov
ID: 2010227
Date: 21.12.2020
Purpose: Write a program to delete an element from an array 
*/

#include<iostream>
using namespace std;

int main(){
	int i, n, pos, num, a[i];
	cout << "Please enter amount of elements of array: ";
	cin >> n;
	cout << "Please enter elements of array: " << endl;
/*For loop to input elements of the array*/
	for(i = 1; i <= n; i++){
		cin >> a[i];
	}
	cout << "---------------------------------" << endl;
	cout << "Elements of the array: " << endl;
/*For loop to output elements of the array*/
	for(i = 1; i <= n; i++){
		cout << "a[" << i << "] = " << a[i] << endl;
	}
	cout << "Enter position from which you want to delete the element: ";
	cin >> pos;
/*For loop to delete an element from the array*/	
	for(i = pos; i <= n; i++){
		a[i] = a[i + 1];
	}
	n--; // To decrease size of the array by 1
	cout << "-----------------------------------" << endl;
	cout << "Elements of the array: " << endl;
/*For loop to output elements of the array*/	
	for(i = 1; i <= n; i++){
		cout << "a[" << i << "] = " << a[i] << endl;
	}
	system("pause");
	return 0;
}

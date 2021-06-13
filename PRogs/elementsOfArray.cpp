/*
Name: Akhadbek Rizakulov
ID: 2010227
Date: 21.12.2020
Purpose: Write a program to display an array
*/

#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	int i=0, n, a[i];
	cout << "Please enter amount of elements: ";
	cin >> n;
	cout << "Please enter elements of array: " << endl;
/*For loop to input elements of the array*/
	for(i=0; i < n; i++){
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
	cout << "--------------------------------" << endl;
	cout << "Elements of the array: " << endl;
/*For loop to output elements of the array*/	
	for(i=0; i < n; i++){
		cout << "a[" << i << "] = " << a[i] << endl;
	}
	system("pause");
	return 0;
}

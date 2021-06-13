/*
Name: Akhadbek Rizakulov
ID: 2010227
Date: 21.12.2020
Purpose: Write a program to insert an element to an array
*/

#include<iostream>
using namespace std;

int main(){
	int size, pos, num, a[10];
	cout << "Enter size of an array: ";
	cin >> size;
	cout << "Enter elements of the array: " << endl;
/*For loop to input elements of the array*/	
	for(int i = 1; i <= size; i++){
		cin >> a[i];
	}
	cout << "------------------------------" << endl;
	cout << "Array elements: " << endl;
/*For loop to output elements of the array*/	
	for(int i = 1; i <= size; i++){
		cout << "a[" << i << "] = " << a[i] <<endl;
	}
	cout << "Input the element which you want to insert: ";
	cin >> num;
	cout << "Input the position at which you want to insert: ";
	cin >> pos;
/*For loop to add new element to the array*/	
	for(int i = size; i >= pos; i--){
		a[i + 1] = a[i];
	}
	a[pos] = num;
	cout << "------------------------------" << endl;
	cout << "Array elements: " << endl;
	for(int i = 1; i <= size + 1; i++){
		cout << "a[" << i << "] = " << a[i] <<endl;
	}
	
	system("pause");
	return 0;
}

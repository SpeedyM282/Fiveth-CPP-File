/*
Name: Akhadbek Rizakulov
ID: 2010227
Date: 21.12.2020
Purpose: Write a program to merge to sorted arrays
*/

#include<iostream>
using namespace std;

int main(){
	int i, n1, n2, k, a1[i], a2[i], a3[i];
	int i1 = 0, i2 = 0, ind = 0;
	cout << "Please enter amount of elements for 1 array: ";
	cin >> n1;
	cout << "Please enter elements of 1 array: " << endl;
/*For loop to input elements of first array*/	
	for(i = 0; i < n1; i++){
		cin >> a1[i];
	}
	cout << "Please enter amount of elements for 2 array: ";
	cin >> n2;
	cout << "Please enter elements of 2 array: " << endl;
/*For loop to input elements of second array*/
	for(i = 0; i < n2; i++){
		cin >> a2[i];
	}
	i=0;
	k = n1 + n2;
/*While loop to merge elements of arrays*/	
	while(i1 < n1 && i2 < n2){
		if(a1[i1] > a2[i2]){
			a3[ind] = a2[i2];
			i2++;
		}else if(a2[i2] > a1[i1]){
			a3[ind] = a1[i1];
			i1++;
		}else{
			a3[ind] = a1[i1];
			i1++;
		}
		ind++;
	}
/*While loop to merge sorted elements of arrays */	
	if(i1 = n1){
		a3[ind] = a2[i2];
		i2++;
		ind++;
	}else if(i2 = n2){
		a3[ind] = a1[i1];
		i1++;
		ind++;
	}
	cout << "The merged array: " << endl;
	for(i = 0; i < k; i++){
		cout << a3[i] << endl;
	}	
	system("pause");
	return 0;
}

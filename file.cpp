#include<iostream>
using namespace std;
#include<fstream>

int main(){
	
	char detail[50];
	cout<<"Enter your Name and age : " ; cin.getline(detail,50);
	ofstream file ("win.txt",ios::app);
	file << detail;  // Inputing data from array
	file.close();
	cout<<"\nFile write operation done succesfully!" << endl ;
	
	char arr1[50];
	ifstream myfile("win.txt");
	myfile.getline(arr1,50);
	cout<<"File Contents :" << arr1 << endl;
	cout<<"File read operation completed";
	return (0);	
}

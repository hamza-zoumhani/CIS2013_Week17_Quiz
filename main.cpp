#include <iostream>
#include <string>

using namespace std;

double const a=0.264179;
double mpg(int m, int l);

int main(){
	
	char choice;
	double litter, miles;
	
	do{
		cout << endl;
		cout <<"Number of Liters consumed: ";
		cin >> litter;
		cout <<"Number of miles traveled: ";
		cin >> miles;
		cout << "Number of miles per gallon the car delivered: " ;
		cout << mpg(miles, litter) << endl;
		cout << "Again? (y/n)";
		cin >> choice;
	}while(choice =='y');
	
	return 0;
}

double mpg(int m, int l){
	double g=a*l;
	return (m/g);
}
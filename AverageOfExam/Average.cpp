/*
In this code, we will get average of 3 exams with using function and pointer.

Developer = Barış Someroğlu
Date 0 27.04.2024 - 05:10 pm
*/

#include <iostream>

using namespace std;

// Function prototype
double PointerAverage(double*, double*, double*);

int main()
{
	double Exam1, Exam2, Exam3;

	cout << "Please enter 1. exam's point = ";
	cin >> Exam1;

	cout << "\nPlease enter 2. exam's point = ";
	cin >> Exam2;

	cout << "\nPlease enter 3. exam's point = ";
	cin >> Exam3;

	cout << "\nAverage = " << PointerAverage(&Exam1, &Exam2, &Exam3) << endl; // Call function

	return 0;
}

// Function definition
double PointerAverage(double* ptrExam1, double* ptrExam2, double* ptrExam3)
{
	return (*ptrExam1 + *ptrExam2 + *ptrExam3) / 3;
}

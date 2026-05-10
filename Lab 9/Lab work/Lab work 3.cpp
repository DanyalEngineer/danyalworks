// Name: Danyal Hassan
// Department: Electrical Engineering (Power)
// Registration No: BFNWELE0750
// Section: A

#include <iostream>
using namespace std;

// function is created to calculate sum of all array elements
int calculateSum(int arr[], int size)
{
    int sum = 0;

    // loop is used to go through each element of array
    for(int i = 0; i < size; i++)
    {
        // adding each value into sum variable
        sum = sum + arr[i];
    }

    // returning final calculated sum back to main function
    return sum;
}

int main()
{
    // declaring array of 10 integers
    int numbers[10];

    int sum;
    double average;

    // asking user to enter 10 values
    cout << "Enter 10 integer values:" << endl;

    // loop to store input values in array
    for(int i = 0; i < 10; i++)
    {
        cin >> numbers[i];
    }

    // calling function to get total sum of array
    sum = calculateSum(numbers, 10);

    // calculating average using total sum
    average = sum / 10.0;

    // displaying final results
    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;

    return 0;
}
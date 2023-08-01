// Refer the --->   ds4.zip file

// Find the Time Complexity of the func1 function in the program.
#include <stdio.h>

void func1(int arr[], int length)
{
    int sum = 0;
    int product = 1;

    for (int i = 0; i < length; i++)
    {
        sum += arr[i];
    }

    for (int i = 0; i < length; i++)
    {
        product += arr[i];
    }
}

int main()
{
    int arr[] = {3, 5, 66};
    func1(arr, 3);
    return 0;
}
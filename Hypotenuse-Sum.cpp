#include <iostream>
using namespace std;
int main()
{
    cout<<"Enterend values will be in format of a right angle traingle\n";
    int temp=1;
    int arr[3][3];
    int sum = 0;
    for (int i=1; i<=3; i++)
    {
        for (int j=1; j<=3; j++)
        {
            if (i>=j)
            {
                cout << temp;
                temp+=1;
            }
           
        }
        cout << "\n";
    }
    temp=1;
    for (int i=1; i<=3; i++)
    {
        for (int j=1; j<=3; j++)
        {
            if (i>=j)
            {
                cout << "Enter Value for " << temp << ": ";
                cin >> arr[i][j];
                temp++;
            }
        }
    }
    cout << "Your entered values are: \n";
    for (int i=1; i<=3; i++)
    {
        for (int j=1; j<=3; j++)
        {
            if (i>=j)
            {
                cout << arr[i][j];
            }
        }
        cout << "\n";
    }
    for (int i=1; i<=3; i++)
    {
        for (int j=1; j<=3; j++)
        {
            if (i==j)
            {
                sum+=arr[i][j];
            }
        }
    }
    cout << "Sum is: " << sum;
    return 0;
}
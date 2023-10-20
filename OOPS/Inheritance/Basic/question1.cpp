// #include <bits/stdc++.h>
// using namespace std;

// class simpleCalculator
// {
// protected:
//     float num1, num2;

// public:
//     void setdata()
//     {
//         cout << "Enter the value 1: ";
//         cin >> num1;
//         cout << endl;
//         cout << "Enter the value 2 :";
//         cin >> num2;
//     }
//     float addition()
//     {
//         setdata();
//         return (num1 + num2);
//     }
//     float subtraction()
//     {
//         setdata();
//         return (num1 - num2);
//     }
//     float multiplication()
//     {
//         setdata();
//         return (num1 * num2);
//     }
//     float division()
//     {
//         setdata();
//         return (num1 / num2);
//     }
// };

// int main()
// {
//     char c;
//     cout << "Input the operation(+,-,*,/) : ";
//     cin >> c;
//     cout << endl;
//     simpleCalculator Xe;
//     if (c == '+')
//     {
//         cout << "Addition Value : " << Xe.addition();
//     }
//     else if (c == '-')
//     {
//         cout << "Subtraction Value : " << Xe.subtraction();
//     }
//     else if (c == '*')
//     {
//         cout << "Multiplication Value : " << Xe.multiplication();
//     }
//     else if (c == '/')
//     {
//         cout << "Division Value : " << Xe.division();
//     }
//     else
//     {
//         cout << "Please give valid input";
//     }

//     return 0;
// }

#include <iostream>
using namespace std;

class simpleCalculator
{
protected:
    float numbers[100]; // Maximum array size set to 100

public:
    int n;
    char c;
    void setdata()
    {

        cout << "Enter the number of values: ";
        cin >> n;
        cout << "Enter the values:\n";
        for (int i = 0; i < n; i++)
        {
            cin >> numbers[i];
        }
    }

    float addition()
    {
        setdata();
        float sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += numbers[i];
        }
        return sum;
    }

    float subtraction()
    {
        setdata();
        float result = numbers[0];
        for (int i = 1; i < n; i++)
        {
            result -= numbers[i];
        }
        return result;
    }

    float multiplication()
    {
        setdata();
        float result = 1;
        for (int i = 0; i < n; i++)
        {
            result *= numbers[i];
        }
        return result;
    }

    float division()
    {
        setdata();
        float result = numbers[0];
        for (int i = 1; i < n; i++)
        {
            if (numbers[i] != 0)
            {
                result /= numbers[i];
            }
            else
            {
                cout << "Error: Division by zero\n";
                return 0;
            }
        }
        return result;
    }
};

int main()
{
    char c;
    simpleCalculator Xe;
    cout << endl;
    cout << "Input the operation (+, -, *, /): ";
    cin >> c;
    
    if (c == '+')
    {
        cout << "Addition Value: " << Xe.addition() << endl;
    }
    else if (c == '-')
    {
        cout << "Subtraction Value: " << Xe.subtraction() << endl;
    }
    else if (c == '*')
    {
        cout << "Multiplication Value: " << Xe.multiplication() << endl;
    }
    else if (c == '/')
    {
        cout << "Division Value: " << Xe.division() << endl;
    }
    else
    {
        cout << "Please give a valid input";
    }
    return 0;
}

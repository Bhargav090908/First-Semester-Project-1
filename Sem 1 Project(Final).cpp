#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
// Main program starts here
int main()
{
    int ch;
    char ch1, ch2, ch3, ch4;
    do
    {
        // Display the main menu
        cout << "\n************************************************";
        cout << "\n      MATHEMATICS       MANIA";
        cout << "\n************************************************";
        cout << "\n1.Basic Caluculator(+, -, x, /, modulo)"
                "\n2.Linear Equation Solver"
                "\n3.Matrix Calculator"
                "\n4.Prime Number Checker and Generator"
                "\n5.Number Base Converter(binary/decimal/octal)\n6.Exit";
        cout << "\nEnter Your Choice:";
        cin >> ch;
        switch (ch)
        {
            // Basic calculator section
        case 1:
            do
            {
                cout << "\n------------------------------------------------";
                cout << "\nBasic Calculator";
                cout << "\n------------------------------------------------";
                cout << "\nWhat do you want to calculate?";
                cout << "\na)Addition\nb)Subtraction\nc)Multiplication\nd)Division"
                        "\ne)Modulus\nf)Exit Basic Calculator";
                cout << "\nEnter Your Choice :";
                cin >> ch1;
                switch (ch1)
                {
                    // Addition operation
                case 'a':
                {
                    int i = 0, res = 0, num, number;
                    cout << "\nEnter how many numbers to be added? : ";
                    cin >> num;
                    while (i < num)
                    {
                        cout << "Enter Number " << i + 1 << ":";
                        cin >> number;
                        res += number;
                        i++;
                    }
                    cout << "\nAddition Result :" << res;
                    cout << "\n------------------------------------------------";
                    break;
                }
                    // Subtraction operation
                case 'b':
                {
                    int i = 0, res, num, number[num], j = 0;
                    cout << "\nEnter how many numbers to be subtracted? : ";
                    cin >> num;
                    while (i < num)
                    {
                        cout << "Enter Number " << i + 1 << ":";
                        cin >> number[i];
                        i++;
                    }
                    res = number[0];
                    while (j + 1 < num)
                    {
                        res = res - number[j + 1];
                        j++;
                    }
                    cout << "\nSubtraction Result :" << res;
                    cout << "\n------------------------------------------------";
                    break;
                }
                    // Multiplication operation
                case 'c':
                {
                    int i = 0, res = 1, num, number;
                    cout << "\nEnter how many numbers to be multiplicated? : ";
                    cin >> num;
                    while (i < num)
                    {
                        cout << "Enter Number " << i + 1 << ":";
                        cin >> number;
                        res *= number;
                        i++;
                    }
                    cout << "\nMultiplication Result :" << res;
                    cout << "\n------------------------------------------------";
                    break;
                }
                    // Division operation
                case 'd':
                {
                    float res, divd, divs;
                    cout << "\nEnter Dividend :";
                    cin >> divd;
                    cout << "\nEnter Divisor :";
                    cin >> divs;
                    if (divs != 0)
                    {
                        res = (divd / divs) * 1.00;
                        cout << "\nDivision Result :" << res;
                    }
                    else
                    {
                        cout << "\nZero cannot be a Divisor !!!!";
                    }
                    cout << "\n------------------------------------------------";
                    break;
                }
                    // Modulus operation
                case 'e':
                {
                    int res, divd, divs;
                    cout << "\nEnter Dividend :";
                    cin >> divd;
                    cout << "\nEnter Divisor :";
                    cin >> divs;
                    if (divs != 0)
                    {
                        res = divd % divs;
                        cout << "\nRemainder Result :" << res;
                    }
                    else
                    {
                        cout << "\nZero cannot be a Divisor !!!!";
                    }
                    cout << "\n------------------------------------------------";
                }
                default:
                    cout << "Invalid Chocie !!";
                    break;
                }
            } while (ch1 != 'f');
            break;
        case 2:
            do
            // Linear equation solver section
            {
                cout << "\n------------------------------------------------";
                cout << "\nLinear Equation Solver";
                cout << "\n------------------------------------------------";
                cout << "\nWhat kind of equation it is?";
                cout << "\na.Linear Euation in 2 variables\nb.Linear Equation in 3 variables"
                        "\nc.Exit Linear Euation Solver";
                cout << "\nEnter your choice :";
                cin >> ch2;
                switch (ch2)
                {
                    // Solve two linear equations
                case 'a':
                {
                    float A, a, B, b, C, c, D, D1, D2;

                    cout << "\nConsider the following linear equation format :"
                            "\nAx + By = C      ----[1] where x and y are variable A,B,C are constants"
                            "\nax + by = c      ----[2] where x and y are variable a,b,c are constants";
                    cout << "\nEnter A(as above format) :";
                    cin >> A;
                    cout << "\nEnter B(as above format) :";
                    cin >> B;
                    cout << "\nEnter C(as above format) :";
                    cin >> C;
                    cout << "\nEnter a(as above format) :";
                    cin >> a;
                    cout << "\nEnter b(as above format) :";
                    cin >> b;
                    cout << "\nEnter c(as above format) :";
                    cin >> c;
                    D = A * b - B * a;
                    D1 = C * b - B * c;
                    D2 = A * c - C * a;
                    cout << "\nThe value of variable as x is :" << (D1 / D);
                    cout << "\nThe value of variable as y is :" << (D2 / D);
                    break;
                }
                    // Solve three linear equations
                case 'b':
                {
                    float A1, B1, C1, D1, A2, B2, C2, D2, A3, B3, C3, D3, Dx, Dy, Dz, D;
                    cout << "\nConsider the following linear equation format :";
                    cout << "\n(A1)x + (B1)y + (C1)z = D1   ----[1] where x,y and z are variable A1,B1,C1 and D1 are constants";
                    cout << "\n(A2)x + (B2)y + (C2)z = D2   ----[2] where x,y and z are variable A2,B2,C2 and D2 are constants";
                    cout << "\n(A3)x + (B3)y + (C3)z = D3   ----[3] where x,y and z are variable A3,B3,C3 and D3 are constants";
                    cout << "\nEnter A1(As above) :";
                    cin >> A1;
                    cout << "\nEnter B1(As above) :";
                    cin >> B1;
                    cout << "\nEnter C1(As above) :";
                    cin >> C1;
                    cout << "\nEnter D1(As above) :";
                    cin >> D1;
                    cout << "\nEnter A2(As above) :";
                    cin >> A2;
                    cout << "\nEnter B2(As above) :";
                    cin >> B2;
                    cout << "\nEnter C2(As above) :";
                    cin >> C2;
                    cout << "\nEnter D2(As above) :";
                    cin >> D2;
                    cout << "\nEnter A3(As above) :";
                    cin >> A3;
                    cout << "\nEnter B3(As above) :";
                    cin >> B3;
                    cout << "\nEnter C3(As above) :";
                    cin >> C3;
                    cout << "\nEnter D3(As above) :";
                    cin >> D3;
                    D = A1 * (B2 * C3 - C2 * B3) - B1 * (A2 * C3 - C2 * A3) + C1 * (A2 * B3 - B2 * A3);
                    Dx = D1 * (B2 * C3 - C2 * B3) - B1 * (D2 * C3 - C2 * D3) + C1 * (D2 * B3 - B2 * D3);
                    Dy = A1 * (D2 * C3 - C2 * D3) - D1 * (A2 * C3 - C2 * A3) + C1 * (A2 * D3 - D2 * A3);
                    Dz = A1 * (B2 * D3 - D2 * B3) - B1 * (A2 * D3 - D2 * A3) + D1 * (A2 * B3 - B2 * A3);
                    cout << "\nThe value of variable as x is :" << (Dx / D);
                    cout << "\nThe value of variable as y is :" << (Dy / D);
                    cout << "\nThe value of variable as z is :" << (Dz / D);
                    break;
                }
                default:
                    cout << "Invalid Chocie !!";
                    break;
                }

            } while (ch2 != 'c');
            break;
            // Matrix calculator section
        case 3:
            do
            {
                cout << "\n------------------------------------------------";
                cout << "\nMatrix Calculator";
                cout << "\n------------------------------------------------";
                cout << "\nWhat do you want to calculate ?";
                cout << "\na.Matrix Addition\nb.Matrix Subtraction"
                        "\nc.Matrix Multiplication\nd.Transpose of Matrix\ne.Exit";
                cout << "\nEnter Your Choice : ";
                cin >> ch3;
                switch (ch3)
                {
                    // Matrix addition
                case 'a':
                {
                    int arows, acolumns, brows, bcolumns;

                    cout << "Enter the number of rows in 1st Matrix :";
                    cin >> arows;
                    cout << "Enter the number of columns in 1st Matrix :";
                    cin >> acolumns;
                    cout << "Enter the number of rows in 2nd Matrix :";
                    cin >> brows;
                    cout << "Enter the number of columns in 2nd Matrix :";
                    cin >> bcolumns;

                    if (arows == brows && acolumns == bcolumns)
                    {
                        float A[arows][acolumns], B[brows][bcolumns], Res[arows][acolumns];

                        for (int i = 0; i < arows; i++)
                        {
                            for (int j = 0; j < acolumns; j++)
                            {
                                cout << "Enter Element of 1st Matrix at position [" << i + 1 << j + 1 << "] : ";
                                cin >> A[i][j];
                            }
                        }
                        for (int i = 0; i < brows; i++)
                        {
                            for (int j = 0; j < bcolumns; j++)
                            {
                                cout << "Enter Element of 2nd Matrix at position [" << i + 1 << j + 1 << "] : ";
                                cin >> B[i][j];
                            }
                        }
                        for (int i = 0; i < arows; i++)
                        {
                            for (int j = 0; j < acolumns; j++)
                            {
                                Res[i][j] = A[i][j] + B[i][j];
                            }
                        }
                        cout << "\nThe resultant matrix is :\n";
                        for (int i = 0; i < arows; i++)
                        {
                            for (int j = 0; j < acolumns; j++)
                            {

                                cout << left << setw(5) << Res[i][j] << " ";
                            }
                            cout << "\n";
                        }
                    }
                    else
                    {
                        cout << "Matix Addition is Not Possible !!!";
                    }
                }
                break;
                    // Matrix subtraction
                case 'b':
                {
                    int arows, acolumns, brows, bcolumns;

                    cout << "Enter the number of rows in 1st Matrix :";
                    cin >> arows;
                    cout << "Enter the number of columns in 1st Matrix :";
                    cin >> acolumns;
                    cout << "Enter the number of rows in 2nd Matrix :";
                    cin >> brows;
                    cout << "Enter the number of columns in 2nd Matrix :";
                    cin >> bcolumns;

                    if (arows == brows && acolumns == bcolumns)
                    {
                        float A[arows][acolumns], B[brows][bcolumns], Res[arows][acolumns];

                        for (int i = 0; i < arows; i++)
                        {
                            for (int j = 0; j < acolumns; j++)
                            {
                                cout << "Enter Element of 1st Matrix at position [" << i + 1 << j + 1 << "] : ";
                                cin >> A[i][j];
                            }
                        }
                        for (int i = 0; i < brows; i++)
                        {
                            for (int j = 0; j < bcolumns; j++)
                            {
                                cout << "Enter Element of 2nd Matrix at position [" << i + 1 << j + 1 << "] : ";
                                cin >> B[i][j];
                            }
                        }
                        for (int i = 0; i < arows; i++)
                        {
                            for (int j = 0; j < acolumns; j++)
                            {
                                Res[i][j] = A[i][j] - B[i][j];
                            }
                        }
                        cout << "\nThe resultant matrix is :\n";
                        for (int i = 0; i < arows; i++)
                        {
                            for (int j = 0; j < acolumns; j++)
                            {

                                cout << left << setw(5) << Res[i][j] << " ";
                            }
                            cout << "\n";
                        }
                    }
                    else
                    {
                        cout << "Matix Subtraction is Not Possible !!!";
                    }
                }
                break;
                    // Matrix multiplication
                case 'c':
                {
                    int arows, acolumns, brows, bcolumns;

                    cout << "Enter the number of rows in 1st Matrix :";
                    cin >> arows;
                    cout << "Enter the number of columns in 1st Matrix :";
                    cin >> acolumns;
                    cout << "Enter the number of rows in 2nd Matrix :";
                    cin >> brows;
                    cout << "Enter the number of columns in 2nd Matrix :";
                    cin >> bcolumns;

                    if (acolumns == brows)
                    {
                        float res = 0, A[arows][acolumns], B[brows][bcolumns], Res[arows][bcolumns];

                        for (int i = 0; i < arows; i++)
                        {
                            for (int j = 0; j < acolumns; j++)
                            {
                                cout << "Enter Element of 1st Matrix at position [" << i + 1 << j + 1 << "] : ";
                                cin >> A[i][j];
                            }
                        }
                        for (int i = 0; i < brows; i++)
                        {
                            for (int j = 0; j < bcolumns; j++)
                            {
                                cout << "Enter Element of 2nd Matrix at position [" << i + 1 << j + 1 << "] : ";
                                cin >> B[i][j];
                            }
                        }
                        for (int i = 0; i < arows; i++)
                        {
                            for (int j = 0; j < bcolumns; j++)
                            {
                                res = 0;
                                for (int k = 0; k < acolumns; k++)
                                {
                                    res += A[i][k] * B[k][j];
                                }
                                Res[i][j] = res;
                            }
                        }
                        cout << "\nThe resultant matrix is :\n";
                        for (int i = 0; i < arows; i++)
                        {
                            for (int j = 0; j < bcolumns; j++)
                            {

                                cout << left << setw(5) << Res[i][j] << " ";
                            }
                            cout << "\n";
                        }
                    }
                    else
                    {
                        cout << "Matix Multiplication is Not Possible !!!";
                    }
                }
                break;
                    // Matrix transpose
                case 'd':
                {
                    int arows, acolumns;
                    cout << "Enter the number of rows in Matrix :";
                    cin >> arows;
                    cout << "Enter the number of columns in Matrix :";
                    cin >> acolumns;
                    float A[arows][acolumns], Res[acolumns][arows];
                    for (int i = 0; i < arows; i++)
                    {
                        for (int j = 0; j < acolumns; j++)
                        {
                            cout << "Enter Element of Matrix at position [" << i + 1 << j + 1 << "] : ";
                            cin >> A[i][j];
                        }
                    }
                    for (int i = 0; i < acolumns; i++)
                    {
                        for (int j = 0; j < arows; j++)
                        {
                            Res[i][j] = A[j][i];
                        }
                    }
                    for (int i = 0; i < acolumns; i++)
                    {
                        for (int j = 0; j < arows; j++)
                        {
                            cout << left << setw(5) << Res[i][j] << " ";
                        }
                        cout << "\n";
                    }
                }
                break;
                default:
                    cout << "Invalid Chocie !!";
                    break;
                }

            } while (ch3 != 'e');

            break;
            // Prime number checker and generator
        case 4:
            do
            {
                {
                    cout << "\n------------------------------------------------";
                    cout << "\nPrime Number Checker and Generator";
                    cout << "\n------------------------------------------------";
                    cout << "\nWhat do you want to do ?";
                    cout << "\na.Check Prime Number\nb.Generate Prime Number(Upto 'n')\nc.Exit";
                    cout << "\nEnter your choice : ";
                    cin >> ch4;
                    switch (ch4)
                    {
                        // Check whether a number is prime
                    case 'a':
                    {
                        int n, c = 0;
                        cout << "\nEnter Number to be checked :";
                        cin >> n;
                        for (int i = 1; i < n; i++)
                        {
                            if (n != 0 && n != 1 && n % i == 0)
                            {
                                c++;
                            }
                        }
                        if (n == 0 || n == 1 || c > 1)
                        {
                            cout << "The number " << n << " is not a prime.";
                        }
                        else if (c == 1)
                        {
                            cout << "The number " << n << " is a prime.";
                        }
                    }
                    break;
                        // Generate prime numbers up to n
                    case 'b':
                    {
                        int n, p;
                        cout << "\nEnter number till which primes must be generated : ";
                        cin >> n;
                        for (p = 2; p < n; p++)
                        {
                            int temp = 0;
                            for (int c = 1; c < p; c++)
                            {
                                if (p % c == 0)
                                {
                                    temp++;
                                }
                            }
                            if (temp == 1)
                            {
                                cout << p << " , ";
                            }
                        }
                    }
                    break;
                    default:
                        cout << "Invalid Chocie !!";
                        break;
                    }
                }
            } while (ch4 != 'c');

            break;
            // Number base converter section
        case 5:
        {
            char ch;
            cout << "\n------------------------------------------------";
            cout << "\nNumber Base Converter";
            cout << "\n------------------------------------------------";
            cout << "\nWhat kind of number is your ?? ";
            cout << "\na.Binary\nb.Octal\nc.Decimal\n";
            cout << "\nEnter your choice : ";
            cin >> ch;
            switch (ch)
            {
                // Binary number conversion
            case 'a':
            {
                int n, temp = 0;
                cout << "\nEnter the Binary Number : ";
                cin >> n;
                int n1 = n, n2 = n, n3 = n;

                // Validate the binary number
                while (n1 > 0)
                {
                    if (n1 % 10 != 0 && n1 % 10 != 1)
                    {
                        cout << "Invalid Binary Number !!!";
                        temp++;
                        break;
                    }
                    n1 = n1 / 10;
                }
                if (temp == 0)
                {
                    char ch;
                    cout << "\na.Convert into Octal\nb.Convert into Decimal";
                    cout << "\nEnter your choice : ";
                    cin >> ch;
                    switch (ch)
                    {
                        // Convert binary to octal or decimal
                    case 'a':
                    {
                        // Convert binary to octal
                        int res, digit = 0, i = 0;
                        while (n2 > 0)
                        {
                            digit++;
                            n2 = n2 / 1000;
                        }
                        int Oct[digit];
                        while (n3 > 0)
                        {
                            res = n3 % 1000;
                            if (res == 0)
                            {
                                Oct[digit - i - 1] = 0;
                            }
                            else if (res == 1)
                            {
                                Oct[digit - i - 1] = 1;
                            }
                            else if (res == 10)
                            {
                                Oct[digit - i - 1] = 2;
                            }
                            else if (res == 11)
                            {
                                Oct[digit - i - 1] = 3;
                            }
                            else if (res == 100)
                            {
                                Oct[digit - i - 1] = 4;
                            }
                            else if (res == 101)
                            {
                                Oct[digit - i - 1] = 5;
                            }
                            else if (res == 110)
                            {
                                Oct[digit - i - 1] = 6;
                            }
                            else if (res == 111)
                            {
                                Oct[digit - i - 1] = 7;
                            }
                            i++;
                            n3 = n3 / 1000;
                        }
                        cout << "Your Octal Number is : ";
                        for (int j = 0; j < digit; j++)
                        {
                            cout << Oct[j];
                        }
                    }
                    break;
                        // Convert binary to decimal
                    case 'b':
                    {
                        int digit = 0;
                        while (n1 > 0)
                        {
                            digit++;
                            n1 = n1 / 10;
                        }
                        int Bin[digit], i = 0;
                        while (n2 > 0)
                        {
                            Bin[digit - i - 1] = (n2 % 10);
                            i++;
                            n2 = n2 / 10;
                        }
                        int j = 1, k = 0, res = 0;
                        while (n3 > 0)
                        {
                            res += (Bin[digit - k - 1] * j);
                            j = j * 2;
                            k++;
                            n3 = n3 / 10;
                        }
                        cout << "Your Decimal Number is : " << res;
                    }
                    break;
                    default:
                        cout << "Invalid Chocie !!";
                        break;
                    }
                }
            }
            break;
                // Octal number conversion
            case 'b':
            {
                int n, temp = 0;
                cout << "\nEnter the Octal Number ";
                cin >> n;
                int n1 = n, n2 = n, n3 = n, n4 = n;
                // Validate the octal number
                while (n1 > 0)
                {
                    if (n1 % 10 != 0 && n1 % 10 != 1 && n1 % 10 != 2 && n1 % 10 != 3 && n1 % 10 != 4 && n1 % 10 != 5 && n1 % 10 != 6 && n1 % 10 != 7)
                    {
                        cout << "\nInvalid Octal Number !!!";
                        temp++;
                        break;
                    }
                    else
                    {
                        n1 = n1 / 10;
                    }
                }
                if (temp == 0)
                {
                    char ch;
                    cout << "\na.Convert into Binary\nb.Convert into Decimal";
                    cout << "\nEnter Your Choice : ";
                    cin >> ch;
                    switch (ch)
                    {
                        // Convert octal to binary or decimal
                    case 'a':
                    {
                        // Convert octal to binary
                        int digit = 0, res;
                        while (n4 > 0)
                        {
                            digit++;
                            n4 = n4 / 10;
                        }
                        int Bin[digit], i = 0;

                        while (n2 > 0)
                        {
                            res = n2 % 10;
                            if (res == 0)
                            {
                                Bin[digit - i - 1] = 0;
                            }
                            else if (res == 1)
                            {
                                Bin[digit - i - 1] = 1;
                            }
                            else if (res == 2)
                            {
                                Bin[digit - i - 1] = 10;
                            }
                            else if (res == 3)
                            {
                                Bin[digit - i - 1] = 11;
                            }
                            else if (res == 4)
                            {
                                Bin[digit - i - 1] = 100;
                            }
                            else if (res == 5)
                            {
                                Bin[digit - i - 1] = 101;
                            }
                            else if (res == 6)
                            {
                                Bin[digit - i - 1] = 110;
                            }
                            else if (res == 7)
                            {
                                Bin[digit - i - 1] = 111;
                            }
                            i++;
                            n2 = n2 / 10;
                        }
                        cout << "Your Binary Number is : ";
                        int j = 0;
                        while (n3 > 0)
                        {
                            cout << Bin[j];
                            j++;
                            n3 = n3 / 10;
                        }
                    }
                    break;
                        // Convert octal to decimal
                    case 'b':
                    {
                        int digit = 0, i = 0, j = 0, k = 1, res = 0;
                        while (n2 > 0)
                        {
                            digit++;
                            n2 = n2 / 10;
                        }
                        int Dec[digit];
                        while (n3 > 0)
                        {
                            Dec[digit - i - 1] = (n3 % 10);
                            i++;
                            n3 = n3 / 10;
                        }
                        while (n4 > 0)
                        {
                            res += (k * Dec[j]);
                            k = k * 8;
                            j++;
                            n4 = n4 / 10;
                        }
                        cout << "Your Decimal Number is : " << res;
                    }
                    break;
                    default:
                        cout << "Invalid Chocie !!";
                        break;
                    }
                }
            }
            break;
                // Decimal number conversion
            case 'c':
            {
                int n, temp = 0;
                cout << "Enter the Decimal Number : ";
                cin >> n;
                int n1 = n, n2 = n, n3 = n, n4 = n;
                // Validate the decimal number
                while (n1 > 0)
                {
                    if (n1 % 10 != 0 && n1 % 10 != 1 && n1 % 10 != 2 && n1 % 10 != 3 && n1 % 10 != 4 && n1 % 10 != 5 && n1 % 10 != 6 && n1 % 10 != 7 && n1 % 10 != 8 && n1 % 10 != 9)
                    {
                        cout << "\nInvalid Decimal Number !!!";
                        temp++;
                        break;
                    }
                    else
                    {
                        n1 = n1 / 10;
                    }
                }
                if (temp == 0)
                {
                    char ch;
                    cout << "\na.Convert into Binary\nb.Convert into Octal";
                    cout << "\nEnter your choice : ";
                    cin >> ch;
                    switch (ch)
                    {
                        // Convert decimal to binary or octal
                    case 'a':
                    {
                        // Convert decimal to binary
                        int digit = 0;
                        while (n2 > 0)
                        {
                            digit++;
                            n2 = n2 / 2;
                        }
                        int Bin[digit], i = 0, j = 0;
                        while (n3 > 0)
                        {
                            Bin[digit - i - 1] = (n3 % 2);
                            i++;
                            n3 = n3 / 2;
                        }
                        cout << "Your Binary Number is : ";
                        while (n4 > 0)
                        {
                            cout << Bin[j];
                            j++;
                            n4 = n4 / 2;
                        }
                    }

                    break;
                        // Convert decimal to octal
                    case 'b':
                    {
                        int digit = 0;
                        while (n2 > 0)
                        {
                            digit++;
                            n2 = n2 / 8;
                        }
                        int Bin[digit], i = 0, j = 0;
                        while (n3 > 0)
                        {
                            Bin[digit - i - 1] = (n3 % 8);
                            i++;
                            n3 = n3 / 8;
                        }
                        cout << "Your Octal Number is : ";
                        while (n4 > 0)
                        {
                            cout << Bin[j];
                            j++;
                            n4 = n4 / 8;
                        }
                    }
                    break;
                    default:
                        cout << "Invalid Chocie !!";
                        break;
                    }
                }
            }
            break;
            default:
                cout << "Invalid Chocie !!";
                break;
            }
        }

        break;
        }

    } while (ch != 6);
}

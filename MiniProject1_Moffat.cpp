#include <iostream>
using namespace std;

int main()
{
    double x;
    double y;
    bool flag = true;
    int option;

    cout << "Hello, welcome to my basic Calculator Program!"<< endl;
    cout << "This calculator is only able to perform basic math functions such as additon, subtraction, multiplication, and division" << endl;

    while(flag)
    {
        cout << "Do you want to use the calculator? No(0), Yes(1)." << endl;
        cin >> option;

        while(cin.fail() || option > 1 || option < 0)
        {
            cout << "Invalid answer. Input a zero or 1";
            cin.clear();
            cin.ignore(1000, '\n');
            cin >> option;
        }

        switch (option)
        {
            case 0:
                flag = false;
                break;

            case 1:
                cout << "Input your first number here: ";
                cin >> x;

                while(cin.fail())
                {
                    cout << "Invalid answer. Try again";
                    cin.clear();
                    cin.ignore(1000, '\n');
                    cin >> x;
                }

                cout << "Input your second number here: ";
                cin >> y;

                while(cin.fail())
                {
                    cout << "Invalid answer. Try again";
                    cin.clear();
                    cin.ignore(1000, '\n');
                    cin >> y;
                }
                
                char Op;

                cout << "What operation do you want to do? ";
                cin >> Op;

                while (Op != '+' && Op != '-' && Op != '*' && Op != '/' )
                {
                   
                    cout << "Invalid answer. You can only answer with + - * or /" <<endl;
                    cin >> Op;
            
                }

                switch(Op) 
                {
                    case '+':
                        cout << "Answer: " << x + y << endl;
                        break;
                    case '-':
                        cout << "Answer:" << x - y << endl;
                        break;
                    case '*':
                        cout << "Answer:" << x * y << endl;
                        break;
                    case '/':
                        if(y == 0)
                        {
                            cout << "Cannot divide by zero!" <<endl;
                        }

                        else
                        {
                            cout << "Answer:" << x / y << endl;
                        }
                        
                        break;
                }
            break;
        }
    }
    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int count;
    string choice;
    int Menu;
    bool Flag = true;

    cout << "You will be asked to create a simple secrete code" << endl;
    cout << "You can only use numbers to establish the code. Letters and symbols are invalid " << endl;
    cout << "==========================================================" << endl;

    while(Flag) 
    { 
        cout << "MENU: 0 = EXIT " << endl;
        cout << "MENU: 1 = CREATE A CODE " << endl;
        cout << "MENU: 2 = HOW TO CREATE A CODE" << endl;

        cin >> Menu;
        while (cin.fail() || Menu < 0 || Menu > 2)
            {
                cout << "Invalid answer. Please answer with 0:(Menu), 1:(Create a code), or 2:(Instructions)" << endl;
                cin.clear();
                cin.ignore(1000, '\n');
                cin >> Menu;
            }

        switch(Menu)
        {
            case 0: 
                Flag = false ;
                break;

            case 2 : 
                cout << "You can only use numbers to establish the code. Letters and symbols are invalid " << endl;
                cout << "==========================================================" << endl;
                break;

            case 1 :
                do 
                {
                    int Num;
                    string code = "";

                    cout << "Do you want to create a code? ";
                    cin >> choice;

                    if(choice == "no" || choice == "No" || choice == "N" || choice == "n")
                        {
                            break;
                        }

                    cout << "How many numbers are in the secrete sequence?" << endl;
                    cin >> count;

                    while (count <= 0 || cin.fail())
                    {
                        if(cin.fail())
                        {
                            cout << "Invalid answer input a numeric length" << endl;
                            cin.clear();
                            cin.ignore(1000, '\n');
                        }

                        else
                        {
                            cout << "Invalid answer input a positve length" << endl;
                        }
                        cout << "How many numbers are in the secrete sequence?" << endl; 
                        cin >> count;
                    }

                    for (int i = 1; i <= count; i++)
                    {
                        cout << "Number: " << i << endl;
                        cin >> Num;

                        while(cin.fail() || Num > 26 || Num < 1) 
                            {
                                cout << "Invalid code. Input another number between 1 and 26: " << endl;
                                cin.clear();              
                                cin.ignore(1000, '\n');   
                                cin >> Num;
                            }
                        
                        switch(Num)
                        {
                            case 1: code = code + "A"; break;
                            case 2: code = code + "B"; break;
                            case 3: code = code + "C"; break;
                            case 4: code = code + "D"; break;
                            case 5: code = code + "E"; break;
                            case 6: code = code + "F"; break;
                            case 7: code = code + "G"; break;
                            case 8: code = code + "H"; break;
                            case 9: code = code + "I"; break;
                            case 10: code = code + "J"; break;
                            case 11: code = code + "K"; break;
                            case 12: code = code + "L"; break;
                            case 13: code = code + "M"; break;
                            case 14: code = code + "N"; break;
                            case 15: code = code + "O"; break;
                            case 16: code = code + "P"; break;
                            case 17: code = code + "Q"; break;
                            case 18: code = code + "R"; break;
                            case 19: code = code + "S"; break;
                            case 20: code = code + "T"; break;
                            case 21: code = code + "U"; break;
                            case 22: code = code + "V"; break;
                            case 23: code = code + "W"; break;
                            case 24: code = code + "X"; break;
                            case 25: code = code + "Y"; break;
                            case 26: code = code + "Z"; break;
                        }
                    }

                    cout << "Your secrete code is: " << code << "\n" << endl;

                } while (choice == "Yes" || choice == "y" || choice == "Y" || choice == "yes");
                break;
        }

    }
    
    return 0;
}
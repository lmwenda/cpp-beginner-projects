#include <iostream>
#include <cmath>

using namespace std;

int main()
{

}

void calculator()
{
    double num1, num2;
    char operat;
    cout << "Enter your First Number: ";
    cin >> num1;

    cout << "Enter your Second Number: ";
    cin >> num2;

    cout << "Enter an Operator: ";
    cin >> operat;

    int result;
    if(operat == '*'){
        result = num1 * num2;
    }
    else if(operat == '+'){
        result = num1 + num2;
    }
    else if(operat == '/'){
        result = num1 / num2;
    }
    else if(operat == '-'){
        result = num1 - num2;
    }else{
        cout << "Invalid Operator.";
    }
    cout << result;
    return result;
}

void namePrompt()
{
    cout << "Learning C++" << endl;

    cout << "Designed by @lMwenda" << endl;
    cout<<endl;

    string name;
    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Welcome to your account " << name << "!";
    cout<<endl;
}

void agePromp()
{
    cout << "Learning C++" << endl;
    cout << "Designed by @lMwenda" << endl;

    cout<<endl;

    string question = "Enter your Age: ";
    int ans;
    cout<<question;
    cin>>ans;

    cout<<"This is your age: " << ans;
    cout<<endl;

}

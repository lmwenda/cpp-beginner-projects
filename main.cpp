#include <iostream>
#include <cmath>

using namespace std;

class MyClass
{
    public:
        string name;
        int age;
        bool isOver18;

    private:
        string databaseName;
        database(int id, string passwords, int items);
        cout<<"ONLY ACCESSABLE TO ADMINS. THERE ARE NO ADMINS SO YH HEHEHEHE. If you want to access this private specifier use your skills to do so";
};

void classDefiner()
{
    MyClass myObj;

    myObj.name = "Luke";
    myObj.age = 13;
    myObj.isOver18 = false;

    cout<<"Searched for account name called 'Luke'. Here are the Account Details:  "<<endl;
    cout<<myObj.name<<" | "<<myObj.age<<" | "<<myObj.isOver18<<endl;
}

int main()
{
    cout<<"Add the function your want to run over here.";
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

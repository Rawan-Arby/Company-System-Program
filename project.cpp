// this is my first full project i have made it******By Rawan Arby*****
#include <iostream>
using namespace std;
int main()
{
    cout<<"*********** Company System Program **************\n";
    string emp_name[10000];
    int emp_age[1000];
    int emp_salary[1000];
    char emp_gender[1000];
    int remove[1000];
    int count = 0;
    bool choice1 = true;
    while (choice1 == true)
    {
        cout << "\nEnter your choice :\n";
        cout << "1) Add new employee \n";
        cout << "2) Print all employees \n";
        cout << "3) Delete by age \n";
        cout << "4) Update Salary by name \n";
        cout << "5) Close program \n";
        int choice;
        cin >> choice;
        cout << "*****************************\n";
        if (choice == 1)
        {
            cout << "Enter name: ";
            cin >> emp_name[count];
            cout << endl;
            cout << "Enter age: ";
            cin >> emp_age[count];
            cout << endl;
            cout << "Enter salary: ";
            cin >> emp_salary[count];
            cout << endl;
            cout << "Enter gender (M/F): ";
            cin >> emp_gender[count];
            cout << endl;
            count++;
        }
        if (choice == 2)
        {
            for (int j = 0; j < count; j++)
            {
                if (remove[j] == 1)
                {
                    continue;
                }
                cout << emp_name[j] << " " << emp_age[j] << " " << emp_salary[j] << " " << emp_gender[j] << endl;
            }
        }
        if (choice == 3)
        {
            int start_age, end_age;
            cout << "Enter Age range: ";
            cin >> start_age >> end_age;
            for (int j = start_age; j < end_age; j++)
            {
                for (int g = 0; g < count; g++)
                {
                    if (emp_age[g] == j)
                    {
                        remove[g] += 1;
                    }
                }
            }
        }
        if (choice == 4)
        {
            string name;
            int salary;
            cout << "Enter the name and salary: ";
            cin >> name >> salary;
            for (int g = 0; g < count; g++)
            {
                if (remove[g] != 1 && emp_name[g] == name)
                {
                    emp_salary[g] = salary;
                    break;
                }
            }
        }
        if (choice == 5)
        {
            choice1 = false;
        }
    }
    return 0;
}

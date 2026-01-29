// An HR system needs to calculate employees’ net salaries, including a fixed 12% bonus for each worker.
// Implement a solution to accept the number of employees and their basic salary. Compute bonus, net salary, and
// display results
#include <iostream>
using namespace std;

int main()
{
    int bonus = 12;
    int no_emp;
    cout << "Enter the number of employees :: ";
    cin >> no_emp;
    int employes[no_emp];
    int total_salary = 0;
    for (int i = 0; i < no_emp; i++)
    {
        cout << "Enter the salary of employee " << i + 1 << " :: ";
        cin >> employes[i];
        total_salary = total_salary + employes[i];
    }
    cout << "Total salary without " << no_emp << " employes without is " << total_salary;
    return 0;
}
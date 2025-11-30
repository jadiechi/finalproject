#include <iostream>
#include <iomanip> 

using namespace std;

int main() {
    // User-provided inputs
    double monthly_salary;
    double overtime_hours;
    double hours_per_month;
    double monthly_tax;
    double sss_deduction;
    double philhealth_deduction;
    double pagibig_deduction;
    double other_deductions;

    cout << "Enter your monthly basic salary (PHP): ";
    cin >> monthly_salary;

    cout << "Enter overtime hours (enter 0 if none): ";
    cin >> overtime_hours;

    cout << "Enter hours per month: ";
    cin >> hours_per_month;

    cout << "Enter monthly tax (PHP, calculate and provide yourself): ";
    cin >> monthly_tax;

    cout << "Enter SSS deduction (PHP, enter 0 if none): ";
    cin >> sss_deduction;

    cout << "Enter PhilHealth deduction (PHP, enter 0 if none): ";
    cin >> philhealth_deduction;

    cout << "Enter Pag-IBIG deduction (PHP, enter 0 if none): ";
    cin >> pagibig_deduction;

    cout << "Enter other deductions (PHP, enter 0 if none): ";
    cin >> other_deductions;

    // Calculations based on user inputs
    double hourly_rate = monthly_salary / hours_per_month;
    double overtime_pay = hourly_rate * overtime_hours;
    double total_deductions = sss_deduction + philhealth_deduction + pagibig_deduction + other_deductions;
    double gross_with_ot = monthly_salary + overtime_pay;
    double net_salary = gross_with_ot - monthly_tax - total_deductions;

    // Output
    cout << fixed << setprecision(2);
    cout << "\nMonthly Gross Salary: ₱" << monthly_salary << endl;
    cout << "Overtime Pay: ₱" << overtime_pay << endl;
    cout << "Monthly Tax: ₱" << monthly_tax << endl;
    cout << "Total Deductions: ₱" << total_deductions << endl;
    cout << "Net Take-Home Salary: ₱" << net_salary << endl;

    return 0;
}

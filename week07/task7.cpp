#include <iostream>
using namespace std;
void patient(int days);
main()
{
    int days;
    cout << "Enter number of days :";
    cin >> days;
    patient(days);
}

void patient(int days)
{
    int totalPatients, checkedPatients = 0, uncheckedPatients = 0;
    int doctors = 7, numberOfDays = 0;
    int totalChecked = 0, totalUnchecked = 0;
    for (int x = 1; x <= days; x++)
    {
        cout << "Number of Patients who visited on Day " << x << " :";
        cin >> totalPatients;
        if (totalPatients >= doctors)
        {
            checkedPatients = doctors;
            uncheckedPatients = totalPatients - checkedPatients;
        }
        else // if (doctors > totalPatients)
        {
            checkedPatients = totalPatients;
            uncheckedPatients = 0;
        }
        totalChecked = totalChecked + checkedPatients;
        totalUnchecked = totalUnchecked + uncheckedPatients;
        numberOfDays++;
        if (numberOfDays == 2)
        {
            if (totalUnchecked > totalChecked)
            {
                numberOfDays= 0;
                doctors++;
            }
        }
    }
    cout << "Treated Patients:" << totalChecked << endl;
    cout << "Untreated Patients:" << totalUnchecked;
}
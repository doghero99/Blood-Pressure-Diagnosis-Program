#include <iostream>

using namespace std;

int main() {
    // Author: Aidan Clark
    // Class: cs231
    // Assignment: #2 - Blood Pressure Diagnosis Program
    // Description: This program prompts the user to enter systolic and diastolic blood pressures
    // and categorizes the blood pressure into different classes based on the provided criteria.

    cout << "Welcome to the Blood Pressure Diagnosis Program." << endl;

    
    int systolic, diastolic;
    cout << "Please enter the Systolic Blood Pressure Reading: ";
    cin >> systolic;
    cout << "Please enter the Diastolic Blood Pressure Reading: ";
    cin >> diastolic;

    
    if (systolic < 90 && diastolic < 65) {
        cout << "You have Hypotension." << endl;
        cout << "Please consult with a healthcare professional for further evaluation." << endl;
    }
    else if (systolic >= 90 && systolic <= 120 && diastolic >= 65 && diastolic <= 80) {
        cout << "You have Normal Blood Pressure." << endl;
        cout << "Maintain a healthy lifestyle to keep your blood pressure in the normal range." << endl;
    }
    else if ((systolic >= 120 && systolic <= 139) || (diastolic >= 80 && diastolic <= 89)) {
        cout << "You have Prehypertension." << endl;
        cout << "Consider adopting a healthier lifestyle to prevent the progression of hypertension." << endl;
    }
    else if ((systolic >= 140 && systolic <= 159) || (diastolic >= 90 && diastolic <= 99)) {
        cout << "You have Stage 1 Hypertension." << endl;
        cout << "Please live a healthier lifestyle and seek out a doctor in case you need medication to treat your condition." << endl;
    }
    else {
        cout << "You have Stage 2 Hypertension." << endl;
        cout << "It is crucial to consult with a healthcare professional immediately to manage and treat your hypertension." << endl;
    }

    return 0;
}


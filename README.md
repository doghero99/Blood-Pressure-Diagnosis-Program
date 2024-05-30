# Blood Pressure Diagnosis Program

## Project Summary
This Blood Pressure Diagnosis Program is a simple console application that prompts the user to enter their systolic and diastolic blood pressure readings. Based on the input values, the program categorizes the blood pressure into different classes such as Hypotension, Normal Blood Pressure, Prehypertension, Stage 1 Hypertension, and Stage 2 Hypertension. It provides corresponding advice for each category.

## Running the Program
To compile and run the program, follow these steps:

1. **Download or clone the repository.**
2. **Navigate to the directory containing the source file.**
3. **Compile the program using a C++ compiler:**
   ```bash
   g++ -o BloodPressureDiagnosis BloodPressureDiagnosis.cpp
Run the executable:
bash
Copy code
./BloodPressureDiagnosis
Source Code
cpp
Copy code

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
Program Logic
Prompt User for Input:

The program starts by greeting the user and asking for systolic and diastolic blood pressure readings.
Evaluate Blood Pressure Readings:

Based on the input values, the program categorizes the blood pressure:
Hypotension: Systolic < 90 and Diastolic < 65
Normal Blood Pressure: Systolic 90-120 and Diastolic 65-80
Prehypertension: Systolic 120-139 or Diastolic 80-89
Stage 1 Hypertension: Systolic 140-159 or Diastolic 90-99
Stage 2 Hypertension: Systolic >= 160 or Diastolic >= 100
Provide Feedback:

The program outputs the category of blood pressure and provides corresponding advice for the user.
License
This project is licensed under the MIT License - see the LICENSE.md file for details.

Author
Aidan Clark

### Example of Repository Structure
BloodPressureDiagnosis/
├── LICENSE.md
├── README.md
└── BloodPressureDiagnosis.cpp

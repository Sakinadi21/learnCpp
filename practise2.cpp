#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int n, sum = 0;
    cout << "Enter Number of students: ";
    cin >> n;

    int students[n];

    // Input
    for(int i = 0; i < n; i++){
        cout << "Marks for student " << i + 1 << " = ";
        cin >> students[i];
        sum += students[i];
    }

    cout << "Total marks: " << sum << endl;

    float avg = (float)sum / n;
    cout << "Average: " << avg << endl;

    // Maximum and minimum
    int max = students[0];
    int min = students[0];
    for(int i = 1; i < n; i++) {
        if(max < students[i]) {
            max = students[i];
        }
        if(min > students[i]) { // Fixed typo here
            min = students[i];
        }
    }

    cout << "Maximum marks = " << max << endl;
    cout << "Minimum marks = " << min << endl;

    getch();
    return 0;
}

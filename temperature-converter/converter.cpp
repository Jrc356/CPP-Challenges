#include <iostream>

using namespace std;

int main () {
    int LOWER_BOUND = 0;
    int UPPER_BOUND = 50000;

    int start_temp = LOWER_BOUND - 1; 
    int end_temp = UPPER_BOUND + 1;

    // Get Start Temp
    while(start_temp < LOWER_BOUND){
        cout << "Enter a start temperature (Celsius), limit >=  " << LOWER_BOUND << endl;
        cin >> start_temp;
    }

    // Get End Temp
    while(end_temp > UPPER_BOUND || end_temp <= start_temp) {
        cout << "Enter an end temperature (Celsius), limit <=  " << UPPER_BOUND << endl;
        cin >> end_temp;
    }
    
    // Get Step Size
    int step_size;
    do {
        cout << "Enter a step size (Must be smaller than " << end_temp - start_temp << ")" << endl;
        cin >> step_size;
    } while(step_size > (end_temp - start_temp));

    // Print Table
    for (int i = start_temp; i <= end_temp; i+=step_size){
        cout << i << endl;
    }

    return 0;
}
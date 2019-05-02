#include <iostream>
#include <iomanip>

using namespace std;

// convert celsius to fahrenheit
double c2f(double c){
    return ((c * 9)/5 + 32);
}

// print table as specified in the challenge
void printTable(double start, double end, double step){
    cout << "Celsius\t\tFahrenheit" << endl << "-------\t\t----------" << endl;
    for (double i = start; i <= end; i+=step){
        cout << fixed;
        cout << setprecision(7);
        cout << i << "\t" << c2f(i) << endl;
    }
}

int main () {
    const int LOWER_BOUND = 0;
    const int UPPER_BOUND = 50000;

    double start_temp = LOWER_BOUND - 1; 
    double end_temp = UPPER_BOUND + 1;

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
    double step_size;
    do {
        cout << "Enter a step size (Must be smaller than " << end_temp - start_temp << ")" << endl;
        cin >> step_size;
    } while(step_size > (end_temp - start_temp));

    printTable(start_temp, end_temp, step_size);
    

    return 0;
}
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    ifstream file("score.txt");

    double x;
    double sum = 0.0, sumsq = 0.0;
    int n = 0;

    while(file >> x){
        sum += x;
        sumsq += x * x;
        n++;
    }
    file.close();

    double mean = sum / n;
    double sd = sqrt((sumsq / n) - (mean * mean));

    cout << "Number of data = " << n << endl;
    cout << setprecision(3);
    cout << "Mean = " << mean << endl;
    cout << "Standard deviation = " << sd << endl;

    return 0;
}

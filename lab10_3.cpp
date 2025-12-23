#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>
#include <cstdlib>

using namespace std;

int main(){
    double sum = 0;
    int num = 0;
    double stan_deri = 0 ;
    ifstream source;
    source.open("score.txt");
    string line;
    while (getline(source, line)) {
        num += 1;
        sum += atof(line.c_str());
        stan_deri += pow(atof(line.c_str()) , 2);
    }
    source.close();

    cout << "Number of data = " << num  << endl;
    cout << setprecision(3);
    cout << "Mean = " << sum / num << endl;
    cout << "Standard deviation = " << sqrt((stan_deri/num)-pow((sum / num),2));
}
#include <iostream>
using namespace std;
int main(){
    char grade; 
    int count[5] = {};
    int num = 1;
    cout << "Please input grade of each student (A-F) or input 0 to exit." << endl;
    do{
        cout << "Student [" << num << "]: ";
        cin >> grade; 
        if(grade == 'A'){ 
            count[0] ++;
            num ++;
        }else if(grade == 'B'){ 
            count[1] ++;
            num ++;
        }else if (grade == 'C') {
            count[2] ++;
            num ++;
        }else if (grade == 'D') {
            count[3] ++;
            num ++;
        }else if (grade == 'F') {
            count[4] ++;
            num ++;
        }else if (grade == '0'){ 
            break;
        }else {
            cout << "Wrong input. Please input again." << endl;
        }

        }while(true);





    cout << "In total " << num - 1 << " students." << endl;
    cout << "A = " << count[0] <<", ";
    cout << "B = " << count[1] <<", ";
    cout << "C = " << count[2] <<", ";
    cout << "D = " << count[3] <<", ";
    cout << "F = " << count[4] ;
    
return 0;
}



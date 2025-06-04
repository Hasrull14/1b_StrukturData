#include <iostream>
#include <conio.h>
using namespace std;
int main(){ 
    enum Day { SUN, MON, TUE, WED, THU, FRI, SAT };
    float high[SAT+1] = {88.3, 95.0, 91.2, 89.9, 91.4, 92.5, 86.7};
    for (int day = SUN; day <= SAT; day++)
    cout << "The high temperature for day " << day << " was " << high[day] << endl;
getch();
return 0;
}
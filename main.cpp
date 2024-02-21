#include <iostream>
#include <string>
#include <stdio.h>
#include <map>
using namespace std;

int main()
{
    int numCourses;
    cout << "Please type in the amount of courses: ";
    cin >> numCourses;
    double credits[numCourses];
    string grades[numCourses];
    int sumcredits = 0;
    for(int i = 0;i<numCourses;i++){
        cout << "Type in course #"<<i+1<<"'s credit: ";
        cin >> credits[i];
        cout << "Type in course #"<<i+1<<"'s grade: ";
        cin >> grades[i];
        sumcredits += credits[i];
    }
    map<string,double> calculator {
        {"A",4.0},{"A-",3.7},{"B+",3.3},{"B",3.0},{"B-",2.7},{"C+",2.3},{"C",2.0},{"C-",1.7},{"D+",1.3},{"D",1.0},{"D-",0.7},{"E",0.0}
    };
    double sumgrades = 0;
    for(int i = 0;i<numCourses;i++){
        sumgrades += calculator[grades[i]] * credits[i];
    }
    double cgpa = sumgrades / sumcredits;
    printf("%f",cgpa);
    
    return 0;
}

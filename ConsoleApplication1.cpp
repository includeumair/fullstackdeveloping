

#include <iostream>
#include<string>
using namespace std;

const int SUBJECTS = 5;
const int MAX_SUBJECT_NAME_LENGTH = 10;

void setSubjectName(char sub[], const char name[]) {
    int i = 0;
    for (; name[i] != 0; i++) {
        sub[i] = name[i];
    }

    sub[i] = 0;
}

void setSub(char subjectname[][MAX_SUBJECT_NAME_LENGTH])
 {
    setSubjectName(subjectname[0], "Math");
    setSubjectName(subjectname[1], "English");
    setSubjectName(subjectname[2], "Urdu");
    setSubjectName(subjectname[3], "History");
    setSubjectName(subjectname[4], "Science");
  

}

void setMarks(int obtained[]) {

    obtained[0] = 65;

    obtained[1] = 82;

    obtained[2] = 80;

    obtained[3] = 85;

    obtained[4] = 70;

}

void setTotalMarks(int total[]) 
{

    total[0] = 100;

    total[1] = 100;

    total[2] = 100;

    total[3] = 100;

    total[4] = 100;
}
float percentage(int sumOfMarks, int sumOfTotal) {

    return ((float(sumOfMarks) / float(sumOfTotal)) * 100);
}

void showResult(char sub[][MAX_SUBJECT_NAME_LENGTH], int marks[], int totalMarks[],  int size)
{
    int sumOfMarks=0, sumOfTotal=0;
    for (int i = 0; i < size; i++)
    {
        cout << sub[i] << ": " << marks[i] << "/" << totalMarks[i] << endl;

        sumOfMarks += marks[i];
        sumOfTotal += totalMarks[i];
    }
    cout <<"Student got: " << sumOfMarks <<" Out of: " << sumOfTotal<<endl;
    cout << "Total percentage is: " << percentage(sumOfMarks, sumOfTotal) << endl;
}



int main()
{
    char subjects[SUBJECTS][MAX_SUBJECT_NAME_LENGTH];
    int obtainedMarks[SUBJECTS];
    int totalMarks[SUBJECTS];

    setSub(subjects);
    setMarks(obtainedMarks);
    setTotalMarks(totalMarks);

    showResult(subjects, obtainedMarks, totalMarks, SUBJECTS);




    
    return 0;
}

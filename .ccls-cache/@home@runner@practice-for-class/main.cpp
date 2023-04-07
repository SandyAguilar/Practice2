#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
const double EXAM_WEIGHT=.60, homeworkWeight=.40;
double finalNumericGrade (double finalGrade);
int main()
{
double examScore, Total=0, homeworkScore, averageExamScore, weightedExamScore, weightedHomeworkScore, finalNumericScore;
char (finalCourseGrade);
int numberExamsTaken, counter=1;
cout<<fixed<<showpoint<<setprecision(2);
cout<<"Enter the number of exams you took: ";
  cin>>numberExamsTaken;
  while (counter<=3)
  {
  cout<<"Enter your exam "<<counter<< " score."<<endl;
  cin>>examScore;
  counter++; 
  Total+=examScore;
    }
  cout<<"Enter your homework score: "<<endl;
  cin>>homeworkScore;
  averageExamScore=Total/numberExamsTaken;
  weightedExamScore=EXAM_WEIGHT*averageExamScore;
  weightedHomeworkScore=homeworkScore*homeworkWeight;
  finalNumericScore=weightedExamScore+weightedHomeworkScore;

  if (finalNumericScore>=90)
{finalCourseGrade='A';}
  else if (89<=finalNumericScore&&finalNumericScore>=80)
{finalCourseGrade='B';}
  else if (79<=finalNumericScore&&finalNumericScore>=70)
{finalCourseGrade='c';}
  else if (69<=finalNumericScore&&finalNumericScore>=60)
{finalCourseGrade='D';}
  else 
{finalCourseGrade='F';}

cout<<"Your average exam score was: "<<averageExamScore<<endl;
cout<<"Your weighted exam points was "<<weightedExamScore<<" out of 60.00 points"<<endl;
cout<<"Your weighted homework points was "<<weightedHomeworkScore<<" out of 40.00 points"<<endl;
  cout<<endl;
  cout<<"Here it is everyone, your final numeric score was: "<<finalNumericScore<<"!"<<endl;
  cout<<endl;
  cout<<"You earned a final grade of "<<finalCourseGrade<<" in this class!";
  
  return 0;
}

double finalNumericGrade (double finalGrade){
cout<<"was sent to function definition and returned to calling procedure";
return finalGrade;
}

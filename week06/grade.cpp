#include<iostream>
using namespace std;
float calculateAverage(float , float , float , float , float);
string calculateGrade(float average );
main()
{
	float marksEnglish , marksMath , marksChemistry , marksSocialSciences , marksBiology;
	cout<<"Enter your english : ";
    cin>>marksEnglish;
    cout<<"Enter your math marks : ";
    cin>>marksMath;	
	cout<<"Enter your chemistry : ";
    cin>>marksChemistry;
	cout<<"Enter your socail sciences : ";
    cin>>marksSocialSciences;
	cout<<"Enter your biology : ";
    cin>>marksBiology;
	float average = calculateAverage( marksEnglish, marksMath , marksChemistry, marksSocialSciences, marksBiology);
	string grade = calculateGrade(average);
    string studentName;
	cout<<"enter your name : " ;
    cin>>studentName;
    cout<<"student Name : "<<studentName<<endl;
    cout<<"Percentage : " <<average<<" % "<<endl;
    cout<<"grade : "<<grade<<endl;	
}
float calculateAverage(float marksEnglish,float marksMath ,float marksChemistry,float marksSocialSciences,float marksBiology)
{
	float average;
	average = ((marksEnglish + marksMath + marksChemistry + marksSocialSciences + marksBiology)/5);
	return average;
}
string calculateGrade(float average)
{
	string grade;
	if(average<=100 && average>=90)
	{
		grade = "A+";
	}
	if(average<=90 && average>=80)
	{
		grade = "A";
	}
	if(average<=80 && average>=70)
	{
		grade = "B+";
	}
	if(average<=70 && average>=60)
	{
		grade = "B";
	}
	if(average<=60 && average>=50)
	{
		grade = "C";
	}
	if(average<=50 && average>=40)
	{
		grade ="D";
	}
	if(average<40)
	{
		grade = "F";
	}
	return grade;
}

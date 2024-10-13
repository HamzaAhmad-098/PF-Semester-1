#include<iostream>
#include<string>
using namespace std;
string checkStudentStatus(int examHour , int examMinute , int studentHour , int studentMinute );
main()
{
	int examHour, examMinute , studentHour , studentMinute;
	cout<<"Enter exam hour  : ";
	cin>>examHour;
	cout<<"Enter exam minute : ";
	cin>>examMinute;
	cout<<"Enter student hour : ";
	cin>>studentHour;
	cout<<"Enter student minute : ";
	cin>>studentMinute;
	cout<<checkStudentStatus(examHour , examMinute , studentHour , studentMinute);
}
string checkStudentStatus(int examHour , int examMinute , int studentHour , int studentMinute)
{
	string result;
	int examTime , studentTime , time , hour , minute ;
	examTime = (examHour*60)+examMinute;
	studentTime = (studentHour*60)+studentMinute;
	if(studentTime>examTime)
	{
	    time = studentTime-examTime;
		hour = time/60;
		minute = time%60;
		result = "Late "+to_string(hour)+"  hour and "+to_string(minute) + "minutes after the exam ";
	}
	if(examTime>studentTime)
	{
		time = examTime - studentTime;
		hour = time/60;
		minute = time%60;
		result = "Early "+to_string(hour) +"  hours and "+to_string(minute)+"  minutes before the exam ";
	}
	
	if(examTime==studentTime)
	{
		result = "on time";
	}
	return result;
	
}
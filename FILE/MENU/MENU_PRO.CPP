//c++file handling menu driven program
#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<dos.h>
#include<process.h>
ofstream o;
ifstream i;
class employee{
long int ecode;
char ename[50],post[50];
float salary;
public:employee(){
	ecode=salary=0;
	ename[0]=post[0]='\0';
	}
void search(long int);
void edelete(long int);
void update(long int);
void input(){
cout<<endl<<"********Insert Employee Information***********";
cout<<endl<<"Enter Employee code:-";
cin>>ecode;
cout<<endl<<"Enter Employee Name:-";
fflush(stdin);
gets(ename);
cout<<endl<<"Enter Employee Post:-";
fflush(stdin);
gets(post);
cout<<endl<<"Enter Employee Salery:-";
cin>>salary;
	}//close of input
void display(){
cout<<endl<<"***********Displaying Employee Information*************";
cout<<endl<<"Employee Code		::"<<ecode;
cout<<endl<<"Employee Name		::"<<ename;
cout<<endl<<"Employee Post		::"<<post;
cout<<endl<<"Employee Salary		::"<<salary;
cout<<endl<<"*******************************************************";
}
}E;
void employee::search(long int eid){
employee E;
i.open("Emp",ios::in);
int ctr=0;
i.read((char*)&E,sizeof(E));
while(i){
if(E,ecode==eid){
E.display();
ctr++;
}
i.read((char*)&E,sizeof(E));
}
i.close();
if(ctr==0)
cout<<endl<<"Employee:"<<eid<<"Recordsnot Exist!";
}//close of search
void employee::edelete(long int eid){
ofstream t;
employee E;
i.open("Emp",ios::in);
t.open("temp",ios::out);
int ctr=0;
i.read((char*)&E,sizeof(E));
while(i)
{
if(E,ecode!=eid){
t.write((char*)&E,sizeof(E));
}
else{
cout<<endl<<eid<<"Employee Record Removed Successfully";
ctr=1;
}
i.read((char*)&E,sizeof(E));
}//close of while
i.close();
t.close();
if(ctr==0)
cout<<endl<<eid<<"Employee REcord Dose not exist,so deletion cancelled";
else
{
t.open("emp",ios::out);
i.open("temp",ios::in);
i.read((char*)&E,sizeof(E));
while(i){
t.write((char*)&E,sizeof(E));
i.read((char*)&E,sizeof(E));
}
i.close();
t.close();
}
}//close of delete

void employee::update(long int){



//cpp program to show file input output
#include<fstream.h>
#include<conio.h>
class employee
{
	long int ecode;
	float salery;
public:employee(){
ecode=salery=0;
}
void input(){
cout<<endl<<"insert Employee information:";
cout<<endl<<"Enter Employee code:-";
cin>>ecode;
cout<<endl<<"Enter Salery:-";
cin>>salery;
}
void disp(){
cout<<endl<<"Displaying Employee Information";
cout<<endl<<"Employee code:-"<<ecode;
cout<<endl<<"Employee Salery:-"<<salery;
}
}re,wr;
void main(){
clrscr();
ofstream o;
o.open("emp.dat",ios::out);
wr.input();
o.write((char*)&wr,sizeof(wr));
o.close();
ifstream i;
i.open("emp.dat",ios::in);
i.read((char*)&re,sizeof(re));
i.close();
re.disp();
getch();
}

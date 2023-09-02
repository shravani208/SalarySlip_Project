#include<iostream>
#include<windows.h>   // to access windows Library
using namespace std;
class employee
{
    private:
        int e_id;
        char e_n[20];
        int job_id;
        char job_n[20];
        int dept_id;
        char dept_n[20];
        public:
        employee()
        {
            cout<<"Enter Employee details:-"<<endl;
            cout<<"Enter Employee id:\t";
            cin>>e_id;
            cout<<"Enter Employee Name:\t";
            cin>>e_n;
            cout<<"Enter job id:\t";
            cin>>job_id;
            cout<<"Enter job name:\t";
            cin>>job_n;
            cout<<"Enter department id:\t";
            cin>>dept_id;
            cout<<"Enter department name:\t";
            cin>>dept_n;
            cout<<"__________________________________________________"<<endl;
        }   
    };
class salary:public employee
{
    private:
        float bs;
        float pf;
        float am;
        float da,dtm;
        float hra,hram;
        float gs;
        static float other_allowances;
        float oam;
    public:
        salary()
        {   
            HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
            cout<<"Enter Employee salary information: "<<endl;
            cout<<"Enter Employee's Basic Salary:\t";
            cin>>bs;
            cout<<"Provident fund in percentage:\t"<<endl;
            cin>>pf;
            am=(bs/100)*pf;
            SetConsoleTextAttribute(h,9);
            cout<<"*Provident fund is: "<<am<<endl;
            SetConsoleTextAttribute(h,15);
            cout<<"Dearness Allowance of Employee in percentage is:\t"<<endl;
            cin>>da;
            dtm=(bs/100)*da;
            SetConsoleTextAttribute(h,10);
            cout<<"*Dearness Allowance is:"<<dtm<<endl;
            SetConsoleTextAttribute(h,15);
            cout<<"House Rent Allowance of Employee in percentage:\t"<<endl;
            cin>>hra;
            hram=(bs/100)*hra;
            SetConsoleTextAttribute(h,11);
            cout<<"*House Rent Allowance of Employee is: "<<hram<<endl;
            SetConsoleTextAttribute(h,15);
            cout<<"The other allowances in percentage is: "<<other_allowances<<endl;
            oam=(bs/100)*other_allowances;
            SetConsoleTextAttribute(h,12);
            cout<<"*Other Allowances of Employee is: "<<oam<<endl;
            gs=(bs+dtm+hram+oam)-am;
            SetConsoleTextAttribute(h,14);
            cout<<"*Gross Salary of an Employee is: "<<gs<<endl;
            SetConsoleTextAttribute(h,15);
            cout<<"_________________________________________________________"<<endl;
        }
        void display()
        {
            HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(h,3);
            cout<<"Employee salary slip is as follows:-"<<endl;
            SetConsoleTextAttribute(h,4);
            cout<<"Employee's Basic Salary is: "<<bs<<endl;
            SetConsoleTextAttribute(h,9);
            cout<<"Employee's Provident Fund is: "<<am<<endl;
            SetConsoleTextAttribute(h,10);
            cout<<"Employee's Dearness Allowance is: "<<dtm<<endl;
            SetConsoleTextAttribute(h,11);
            cout<<"Empoyee's House Rent Allowance is: "<<hram<<endl;
            SetConsoleTextAttribute(h,14);
            cout<<"Employee's Gross Salary is: "<<gs<<endl;
            SetConsoleTextAttribute(h,15);
    }
};
float salary::other_allowances=2.2;
int main()
{
    salary s;
    s.display();
 return 0;
}
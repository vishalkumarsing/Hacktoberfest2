#include<iostream>
using namespace std;

class Student{
    private:
        int rollNumber;
        string name;
        int p;
        int c;
        int m;
    public:
        Student(){
            rollNumber=0;
            name="NULL";
            p=0;
            c=0;
            m=0;
        }
        void setRollNUmber(int rollNumber){this->rollNumber=rollNumber;}
        void setName(string name){ this->name=name;}
        void setP(int p){this->p=p;}
        void setC(int c){this->c=c;}
        void setM(int m){this->m=m;}
        int getRollNumber(){return rollNumber;}
        string getName(){return name;}
        int getP(){return p;}
        int getC(){return c;}
        int getM(){return m;}

        int totalMarks(){
            return p+c+m;
        }
        char grade(){
            if(totalMarks()>(0.6*totalMarks())) return 'A';
            else if (totalMarks()>(0.4*totalMarks())) return 'B';
            else return 'C';
        }
        ~Student(){
            cout<<"Student Destroyed";
        }
};

int main(){
    Student s1;
    int rollNumber,p,c,m;
    string name;
    cout<<"Enter your name: ";
    cin>>name;
    getchar();
    s1.setName(name);
    cout<<"Enter your rollNumber: ";
    cin>>rollNumber;
    s1.setRollNUmber(rollNumber);
    cout<<"Enter your marks in three subjects: ";
    cin>>p>>c>>m;
    s1.setP(p);
    s1.setC(c);
    s1.setM(m);
    cout<<"Total Marks: "<<s1.totalMarks()<<endl;
    cout<<"Grade of Student: "<<s1.grade()<<endl;    

}

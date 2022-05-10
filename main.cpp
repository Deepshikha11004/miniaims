#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <cstdlib>
#include<conio.h>
#include<string.h>
using namespace std;

class project{
    public:
    void menu();
};

class admin{
private:
string course_name,course_no,name,roll_no,email_id;
public:
    void insert();
};

class student{
    private:
    string course_name,course_no;
    public:

};
class faculty{
    private:
    string name,roll_no;
    public:

};

void project::menu(){
    int choice;
    system("cls");
    cout << "\t\t\t------------------------------------" << endl;
    cout << "\t\t\t----------Welcome to IITH-----------" << endl;
    cout << "\t\t\t------------------------------------" << endl;
    cout << "\t\t\t 1.Admin" << endl;
    cout << "\t\t\t 2.Student" << endl;
    cout << "\t\t\t 3.Faculty" << endl;
    cout << "\t\t\t------------------------------------" << endl;
    cout << "\t\t\t-------Choose option:[1/2/3]--------" << endl;
    cout << "\t\t\t------------------------------------" << endl;
    cout << "Enter your choice:" << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:
        insert();
        break;
    case 2:

        break;
    case 3:

        break;
    
    default:
    cout<<"Invalid choice.. Try again.."<<endl;
        break;
    }

}

void admin::insert(){
    system("cls");
    cout << "\t\t\t1.Add course" << endl;
    cout << "\t\t\t2.Delete course" << endl;
    cout << "\t\t\t4.Add student to iith" << endl;
    cout << "\t\t\t3.Delete student from iith" << endl;
    cout << "\t\t\t4.Add student to course" << endl;
    cout << "\t\t\t5.Delete student from course" << endl;
    cout << "\t\t\t------------------------------------" << endl;
    cout << "\t\t\t----Choose option:[1/2/3/4/5/6]-----" << endl;
    cout << "\t\t\t------------------------------------" << endl;
    cout << "Enter your choice:" << endl;
    int adchoice;
    cin >> adchoice;
    switch (adchoice)
    {
    case 1:
    char arr[100];
        cout << "Enter Course name and course code:" << endl;
        cin.getline(arr,100);
        ofstream myfile("course.txt");
        myfile.open("course.txt");
        myfile<<arr;
        myfile.close();
        //cin >> course_name;
        //cout << "Enter Course no:" << endl;
        //cin >> course_no;


        break;

    case 2:
        /* code */
        break;
    case 3:
        /* code */
        break;
    case 4:
        /* code */
        break;
    case 5:
        /* code */
        break;
    case 6:
        /* code */
        break;
    default:
        break;
    }
}

int main(){
    project aims;
    aims.menu();
    
    return 0;
}

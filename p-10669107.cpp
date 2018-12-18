

#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>
#include <conio.h>

using namespace std;

struct student
{
    string fullname;
    string courses;
    string classes;
    string registration;
} studentData;

struct staff
{
    string fullname;
    string pay;
    string subject;
    string periods; //number of lessons
    string phonenumber;
} tech[50];


  int main ()
{
    int k=0,p;
    char selection;
    string find;
    string srch;

    while (1)
    {
        system ("cls");
        cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\n";
        cout<<"n\n\t\t\tMAIN SCREEN\n\n";
        cout<<"Enter Selection:" <<endl;
        cout<<"1.Students Information"<<endl;
        cout<<"2.Staff Information"<<endl;
        cout<<"3.Exit Program"<<endl;
        cin>>selection;

        system("cls");

        switch (selection)
        {
        case '1':
            {

            while (1)
            {
                system("cls");
                cout<<"\t\t\tSTUDENTS INFO & DATA SECTUON\n\n\n";
                cout<< "Enter selection:"<<endl;
                cout<<"1. create new entry\n";
                cout<< "2. Find and display entry\n";
                cout<<"3. jump to main\n";
                cin>>selection;

                switch(selection)
                {
                    case '1':
              {ofstream f1 ("student.txt",ios::app);
            for (k+0; selection!='m' ; k++)
          {
                if((selection=='y')||(selection=='y')||(selection=='1'))
                {
                    cout<<"Enter Full name:";
                    cin>>studentData.fullname;
                    cout<<"Enter Registration Number:";
                    cin>>studentData.registration;
                    cout<<"Enter class";
                    cin>>studentData.classes;
                    cout<<"Add Course:";
                    cin>>studentData.courses;


                    f1<<studentData.fullname<<endl<<studentData.registration<<endl<<studentData.classes<<endl;
                    cout<<"Do you want to add Data:";
                    cout<<"Press Y for Continue and N to Finish:";
                    cin>>selection;
                }
            }
            f1.close();
        }
        continue ;


        case '2':
        {
            ifstream f2("student. txt");
            cout<<"Enter Full name to displayed: ";
            cin>>find;
            cout<<endl;
            int notfound = 0 ;
            for(p+0;(p<1)||(!f2.eof());p++)
            {
                getline(f2,studentData.fullname);

                if (studentData.fullname==find)
                {
                    cout<< "Full Name"<<studentData.fullname<<endl;

                    getline(f2, studentData.registration);
                    cout<<"Registration Number:"<<studentData.registration<<endl;
                    getline(f2, studentData.classes);
                    cout<<"Class"<< studentData.classes<<endl;
                    getline (f2, studentData.courses);
                    cout<< "Course:"<<studentData.courses<<endl;
                }
            }
            if(notfound == 0)
            {
                cout<<"No record found"<<endl;
            }
            f2. close();
            cout<<"press any key twice to continue";
            getch();
            getch();
        }
        continue;
        case '3':
        {
            break;
        }
    }

    break;

}
continue ;
}
case '2':
{
    while (1)
    {
        system("cls");
        cout<< "\t\t\tSTAFFS INFORMATION AND DATA SECTION\n\n\n";
        cout<< "Enter your selection:"<<endl;
        cout<< "1. Create New Entry\n";
        cout<< "2. Find and display\n";
        cout<< "3. Jump to main\n" ;
        cin>> selection;


        switch (selection)
        {
        case '1' :
            {
                ofstream t1("staff.txt" ,ios :: app);

                for (k=0; selection!='n' && selection!='N'; k++)
                {
                    if ((selection == 'y')||(selection=='y')||(selection=='1'))
                    {
                        cout<< "Enter Full Name:" ;
                        cin>>tech[k].fullname;
                        cout<< "Enter Subject:";
                        cin>>tech[k].subject;
                        cout<< "Enter phone number:";
                        cin>>tech [k].phonenumber ;
                        cout<< "Enter teaching times:";
                        cin>>tech [k].periods;
                        cout << "Enter Salary:";
                        cin>>tech[k].pay;

                        t1<<tech[k].fullname<<endl<<tech[k].subject<<endl<<tech[k].phonenumber<<endl<<tech[k].periods<<endl<<tech[k].pay<<endl;
                        cout<< "Do You Want To Enter Data:" ;
                        cin>>selection;
                    }
                }
                system("cls");

                t1. close();
            }
            continue ;

        case '2' :
            {
                ifstream t2("staff.txt");
                cout<< "Enter Name to be Displayed:" ;
                cin>>find;

                cout<<endl;
                int notFound= 0 ;
                for (p+0; ((p<k)||(!t2. eof()));p++)

                {
                    getline(t2, tech[p].fullname);
                    if (tech[p].fullname== find)
                    {
                        notFound =1;
                        cout<< "Full Name"<<tech[p].fullname<<endl;
                        getline(t2, tech[p].phonenumber);
                        cout<<"Phone Number:"<<tech[p].phonenumber<<endl;
                        getline(t2, tech[p].pay);
                        cout<< "Salary:"<<tech[p].pay<<endl;
                        getline(t2, tech[p].periods);
                        cout<< "Teaching Time:"<<tech[p].periods<<endl;
                        getline(t2, tech[p].subject);
                        cout<< "Subject:"<<tech[p].subject<<endl;
                    }
                }
                t2. close();
                if (notFound == 0)
                {
                    cout<<"Record not Found"<<endl;
                    }
                cout<< "Press key twice to continue";
                getch();
                getch();
            }
            continue ;

            case '3':
            {
                break;
            }
        }
        break;
}
continue;
}
            case '3':
                {
                    break;
                }
                }
                break;
                }

                }

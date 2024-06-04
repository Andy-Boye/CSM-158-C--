#include <iostream>

using namespace std;

int main()
{
    float mark;
    char grade;

    cout << " KNUST Grading system " << endl;
    cout << "1.>=70 , 2.60-69 , 3.50-59 , 4.40-49 , 5.<40"<<endl;


    cout<< "PLEASE ENTER YOUR MARK :"<<endl;
    cin >>mark;
    if(mark==1)
         {cout<<"YOUR GRADE IS  A"<<endl;
         cout<<"WELL DONE"<<endl;
         }else if(mark==2)
    {
    cout<<"YOUR GRADE IS  B"<<endl;
    cout<<"MORE ROOM FOR IMPROVEMENT"<<endl;

    }else if(mark==3)
    {
        cout<<"YOUR GRADE IS C"<<endl;
        cout<<"YOU ARE GETTING THERE"<<endl;
    }else if (mark==4)
    {
        cout<<"YOUR GRADE IS D"<<endl;
        cout<<"YOU ARE VERY LUCKY"<<endl;
    }else
    {
        cout<<"YOUR GRADE IS F"<<endl;
        cout<<"SORRY YOU HAVE TRAILED"<<endl;
    }




    return 0;
}

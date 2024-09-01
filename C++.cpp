#include<iostream>
#include<fstream>
#include<stdio.h>
#include<string>
using namespace std;

struct Doctor_Details {

string Doctor_Name;
string Medical_Type;
};
Doctor_Details Doctors[5];


void Company_Details();
void Available_Doctors();
void Registration();
void Login();
void Doctor_Details();
void Logout();
void Exit();

int main();

void Registration(){
        string reguser,regpass;
        system("cls");
        cout<<"Enter the Username : ";
        cin>>reguser;
        cout<<"Enter the Password : ";
        cin>>regpass;
        
        ofstream reg("database.txt", ios::app);
        reg<<reguser<<' '<<regpass<<endl;
        system("cls");
        cout<<"\n\tRegistration Successfully Done\n";
        main();
    }

void Login(){
        int exist;
        string user,pass,u,p;
        system("cls");
        cout<<"Enter the Username : ";
        cin>>user;
        cout<<"Enter the Password : ";
        cin>>pass;
        
        ifstream input("database.txt");
        
        while(input>>u>>p){
            if(u == user && p == pass){
                exist = 1;
            }
        }
        input.close();
        if(exist == 1){
            cout<<"\n\tWelcome "<<user<<" !!!";
            cin.get();
            cin.get();
            main();
        }
        else{
            cout<<"\n\tInvalid Username or Password\n\t Please check and Try again";
            cin.get();
            cin.get();
            main();
        }
        
    }
void Doctor_Details(){
    int y;
    char res=y;
    
    Doctors[0].Doctor_Name  = "DOCTOR 1";
    Doctors[0].Medical_Type = "EYE SURGEON";
    
    Doctors[1].Doctor_Name  = "DOCTOR 2";
    Doctors[1].Medical_Type = "NEUROSURGEON";
    
    Doctors[2].Doctor_Name  = "DOCTOR 3";
    Doctors[2].Medical_Type = "OBSTETRICIAN & GYNAECOLOGIST";
    
    Doctors[3].Doctor_Name  = "DOCTOR 4";
    Doctors[3].Medical_Type = "CARDIOLOGIST";
    
    Doctors[4].Doctor_Name  = "DOCTOR 5";
    Doctors[4].Medical_Type = "PSYCOLOGICAL COUNSELOR";
    
    
    cout<<"\nDo you want to add more Doctors? 'y' : ";
    cin>>res;
    
    if(res == y){
        int i;
        for(i = 0; i < 1; i++){
            
            cout<<"Enter Doctor Name : ";
            cin>>Doctors[6].Doctor_Name;
            cout<<"Enter Medical Type Of Doctor";
            cin>>Doctors[6].Medical_Type;
        }
    }
    else{
        main();
    }
}
void Logout() {

char Res = 'y';

cout << "Do you want to logout from the system? 'y' : ";
cin >> Res;

if (Res == 'y') {

cout << "\n\n\t    **Your are logged out from the system**\n\n";

cout << "Do you want to exit? 'y' : ";
cin >> Res;

if (Res == 'y')
{
cout << "\n\t    You are exiting from the system\n" << endl;
cout << "\t          ||| Thank you |||" << endl;
}
else {
system("cls");
cout << "\t\t\t\t\nInvalid Input" << endl;
main();
}
}
else {
system("Cls");
cout << "\t\t\t\t\nInvalid Input" << endl;
main();
}


}
    
    void Exit() {

            cout << "\t    You are exiting from the system\n" << endl;
            cout << "\t          ||| Thank you |||" << endl;
    }

int main(){
    int choice;
    cout<<"\n\n       *******WELCOME*******\n";
    cout<<"------SPIRE HEALTHCARE HOSPITAL------\n\n\n";
    cout<<"Press 1 to view Company Details\n";
    cout<<"Press 2 to view Available Doctors\n";
    cout<<"Press 3 to Register\n";
    cout<<"Press 4 to Login\n";
    cout<<"Press 5 to Manage Doctor Details\n";
    cout<<"Press 6 to Logout\n";
    cout<<"Press 7 to Exit\n";
    
    cout<<"\nEnter your selection here : ";
    cin>>choice;
    cout<<"\n\n";
    
    switch(choice){
        
        case 1:
        cout<<"**Company Details**\n\n";
        cout<<"NAME    : SPIRE HEALTHCARE HOSPITAL\n";
        cout<<"ADDRESS : NO.52/1,LONDON\n";
        cout<<"EMAIL   : spirehealthcare@gmail.com\n";
        cout<<"TEL     : 020 7900 000 / 070 5000 000\n";
        main();
        break;
        
        case 2:
        cout<<"**Available Doctors**\n\n";
        cout<<"DOCTOR 1 : EYE SURGEON\n";
        cout<<"DOCTOR 2 : NEUROSURGEON\n";
        cout<<"DOCTOR 3 : OBSTETRICIAN & GYNAECOLOGIST\n";
        cout<<"DOCTOR 4 : CARDIOLOGIST\n";
        cout<<"DOCTOR 5 : PSYCOLOGICAL COUNSELOR\n";
        main();
        break;
        
        case 3:
        Registration();
        break;
    
        case 4:
        Login();
        break;
        
        case 5:
        Doctor_Details();
        break;
        
        case 6:
        Logout();
        break;
        
        case 7:
        Exit();
        break;
        
    
        default:
        cout<<"Invalid Input\n";
        main();
    }
    
    return 0;
}


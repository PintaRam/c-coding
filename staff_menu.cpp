#include<iostream>
#include<string>
#include <algorithm>
using  namespace std;
class staff{
    public:
        string name ; 
        float salary;
        int staff_id;
    public:
        void accept_data()
        {
            cout<<"Enter the name of a staff  :";
            cin>>name;
            cout<<endl<<"Enter the staff_id  : ";
            cin>>staff_id;
            cout<<endl<<"Enter the staff salary : ";
            cin>>salary;
        }
        void display_data()
            {
                cout<<"staff ID : "<<staff_id<<endl;
                cout<<"Staff Name : "<<name <<endl;
                cout<<"Salary  : "<<salary<<endl;
                cout<<endl<<endl;
            }
       string get_name()
        {
            return name;
        }
       
};
bool sort_the_data(staff s1 , staff s2)
{
    return s1.get_name() < s2.get_name();
}
int main() {
    int N;
    int j = 0;
    cout<<"Enter the number of staff :";
    cin>>N;
    cout<<endl;
    staff s[N];
    int choice;
    do {
        cout << "\nMenu:\n";
        cout << "1) To accept the data\n";
        cout << "2) To display the data\n";
        cout << "3) To sort the data by name\n";
        cout << "4) To exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                
                if(j == N){
                    cout<<"No need of staff .....";
                    break;
                }
                for (int i = 0; i < N; i++) {
                    cout << "\nEnter the data of staff member " << i + 1 << endl;
                    s[i].accept_data();
                    j = i+1;
                }
                break;
            case 2:
               
                for (int i = 0; i < N; i++) {
                    cout << "\nThe data of staff member " << i + 1 << endl;
                    s[i].display_data();
                }
                break;
            case 3:
               
                sort(s, s + N, sort_the_data);
                cout << "\nThe data has been sorted by name\n";
                break;
            case 4:
                
                cout << "\nThank you \n";
                break;
            default:
               
                cout << "\nInvalid choice. Please try again\n";
                break;
        }
    } while (choice != 4);

    return 0;
}
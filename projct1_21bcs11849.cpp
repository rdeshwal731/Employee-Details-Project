/*cpp employee details project-
[raghav deshwal 21bcs11849]
*/
include<iostream>
using namespace std;

class employee
	{
	  char empname;
	  int empscore;
	  int salary;

		public:
			void get_empdetails();
			void show_empdetails();
			void delete_empdetails();
	};

void employee :: get_empdetails()
	{
	  cout<<"\nEnter emp name:";
	  cin>>empname;
	  cout<<"\nEnter emp score:";
	  cin>>empscore;
	  cout<<"\nEnter emp salary:";
	  cin>>salary;
	}
void employee :: show_empdetails()
	{
	  cout<<"\n\n Details of Employee  "; 
	  cout<<"\nemp name:" <<empname; 
	  cout<<"\nemp score:" <<empscore; 
	  cout<<"\nemp salary:" <<salary;
	  cout<<"\n----------------\n\n";
	}
void employee :: delete_empdetails()
	{
	  cout<<"\nEnter details to be deleted:';
	  cout<<"\n
	  
	}

int main()
	{
	  employee emp;
	  emp.get_empdetails();
          emp.delete_empdetails();
	  emp.show_empdetails();
	  
	  return 0
	}  
	  

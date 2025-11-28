# include<iostream>
using namespace std;
int main()
{
	string name,department;
	int roll_number;
	double englishmarks, mathsmarks, physicsmarks;
	cout<<"Enter Student name:";
	getline(cin,name);// using getline to handle names with spaces
	cout<<"Enter roll_number:";
	cin>>roll_number;
	cin.ignore();// ading this to ignore the new line character
	cout<<"Enter department:";
	getline(cin,department);// using getline to handle department name with spaces
	cout<<"Enter marks in english:";
	cin>>englishmarks;
	cout<<"Enter marks in maths:";
	cin>>mathsmarks;
	cout<<"Enter marks in physics:";
	cin>>physicsmarks;



cout<<"================================================ \n";
cout<<" STUDENT RESULT CARD \n";
cout<<"================================================ \n";
cout<<"Name: \t Ali Raza \n";
cout<<"Roll_Number: \t 1023 \n";
cout<<"Department: \t Computer Science \n";
cout<<"------------------------------------------------ \n";
cout<<"Subject \t Marks \n";
cout<<"------------------------------------------------ \n";
cout<<"English \t 85 \n";
cout<<"Maths   \t 90 \n";
cout<<"Physics \t 80 \n";
cout<<"------------------------------------------------ \n";
cout<<"Total Marks: \t 225/300 \n";
cout<<"Persentage: \t 85% \n";
cout<<"================================================ \n";
cout<<"Grade: \t A+ \n";
cout<<"================================================ \n";
cout<<"Congratulation Ali Raza! \n";
cout<<"================================================ \n";
return 0;
}
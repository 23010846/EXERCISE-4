#include <iostream>
#include <string>
using namespace std;

void printMenu(){

cout << "======================" << endl;
cout << "\tMenu" << endl;
cout << "======================" << endl;
cout << "\t1.Add" << endl;
cout << "\t2.Subtract" << endl;
cout << "\t3.Multiply" << endl;
cout << "\t4.Divide" << endl;
cout << "\t4.Modulus" << endl;
}
void showResult(){
int n1, n2, result, c;
cout << "======================" << endl;
cout << "Enter your choice(1-5):";
cin >> c;
if(c <= 0 && c > 5)
{
cout << "Invalid input";
exit(1);
}
cout << "Enter integer number 1:";
cin >> n1;
cout << "Enter integer number 2:";
cin >> n2;
if(c == 1)
result = n1 + n2 ;
else if(c == 2)
result = n1 - n2;
else if(c == 3)
result = n1 * n2;
else if(c == 4)

result = n1 / n2;
else
result = n1 % n2;
cout << "Result:" << result << endl;
}
int main( )
{
char choice;
do{
printMenu();
showResult();
cout << "Press y or Y to continue:";
cin >> choice;
}
while(choice == 'y' || choice == 'Y');

return 0;
}

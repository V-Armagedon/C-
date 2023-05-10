#include <iostream>
#include <string>
using namespace std;
class Person
{
public:
string name;
int age;
// Your code here
};
void print(Person* person)
{
cout << person->name << " is " << person->age << " years old" << endl;
}

int main()
{
Person person1;
person1.name = "Harry";
person1.age = 23;
cout << "Meet " << person1.name << '\n';
print(&person1);
  
Person person2;
person2.name = "Genry";
person2.age = 48;
cout << "Meet " << person2.name << '\n';
print(&person2);

Person person3;
person3.name = "Mia";
person3.age = 29;
cout << "Meet " << person3.name << '\n';
print(&person3);
// Your code here
return 0;
}
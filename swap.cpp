#include <iostream>
using namespace std;
class student{
    //properties/data members
    public: string name;
    int age;
    int roll_no;
    //behavior/member function

void study(){
    cout<<name<<" is studying"<<endl;
    cout<<age;
}
};


int main()
{
    student obj;
    //dot operator: Access & member function
    obj.name = "Lokesh";
    obj.age = 20 ;
    obj.study();
    
    
    return 0;
}

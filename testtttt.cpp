#include <iostream>

using namespace std;

class student

{
    char *b;
    int a;
    static int c;
};

int student::c=10;


int main()
{
    student s1;
    cout<<"Hello World"<<     sizeof(s1)<<endl;
    return 0;
}


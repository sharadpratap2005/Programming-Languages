/*Wrie the program equivalent to the following without using any looping control statement
#include <iostream>
void main(){
int count=1;
do{
cout<<"\t"<<count;
count++;
}
while(count<=100);
}*/
#include <iostream>
using namespace std;

int main()
{
    int count = 1;

print_data:
    cout << "\t" << count;
    count++;
    if (count <= 1000)
    {
        goto print_data;
    }
    return 0;
}
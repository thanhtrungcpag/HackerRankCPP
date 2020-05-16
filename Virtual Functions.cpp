#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
static int pro = 1;
static int stu = 1;
class Person{
	protected:
		string name; 
		int age;
	public:
		set_person(string name, int age){
			this->name;
			this->age = age;
		}
		virtual void getdata(){
		}
		virtual void putdata(){
		}
};

class Student: public Person{
	private:
		int mark[6];
		int cur_id;
		int sumMark = 0;
	public:
		void getdata(){
			cur_id = stu;
			stu++;
			cin>>name>>age;
			for(int i = 0 ; i < 6; i++){
				cin >>mark[i];
				sumMark += mark[i];
			}
		}
		void putdata(){
			cout<<name<<" "<<age<<" "<<sumMark<<" "<<cur_id<<endl;
		}
};
class Professor: public Person{
	private:
		int publications;
		int cur_id;
	public:
		void getdata(){
			cur_id = pro;
			pro++;
			cin>>name>>age>>publications;
		}
		void putdata(){
			cout<<name<<" "<<age<<" "<<publications<<" "<<cur_id<<endl;
		}

};
int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}


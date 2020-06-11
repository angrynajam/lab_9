#include <iostream>

#include "headerfile.h"

using namespace std;

//Q4
class father {
protected:
    int age;
public:
    father(){
        age = 1;
    }
    father (int x ){
        age = x;
        }
    virtual void iam(){
        cout<<"I am father, my age is "<<age<<endl;
        }
};

class son:public father{
private:
    int age;
public:
    son(int x ){
        age = x;
        }
    void iam(){
        cout<<"I am son, my age is "<<age<<endl;
        }
};

class daughter:public father{
private:
    int age;
public:
    daughter(int x ){
        age = x;
        }
    void iam(){
        cout<<"I am daughter, my age is "<<age<<endl;
        }
};

int main()
{
    /*
    //Q1
    derived_q1 obj_derived_1;

    pointer_2_base *ptr_base_1 = &obj_derived_1;

    ptr_base_1->func();  //will run func of base class because no virtual keyword is used
    */


/////////////////////////////////////////////////////////


    /*
    //Q2
    derived_q2 obj_derived_2;

    pointer_2_base_2 *ptr_base_2 = &obj_derived_2;

    ptr_base_2->func();  //will run the func of derived class because virtual keyword is used
    */

///////////////////////////////////////////////////////////

    /*
    //Q3
    counting time;
    time.get();
    time.click();
    time.get();
    time.set(23);
    time.get();
    */

///////////////////////////////////////////////////////////


    /*
    //Q4
    son s1(29);
    daughter d1(13);

    father *f1 = &s1;
    father *f2 = &d1;

    f1->iam();
    f2->iam();
    */


    /*
    //Q5
    triangle tri1(12.4, 10.4);
    rectangle rect1(90.1, 100.4);


    tri1.getDimentions();
    rect1.getDimentions();
    tri1.area();
    rect1.area();
    */



    /*
    //Q6
    MallerDuck d1;
    RubberDuck d2;

    d1.setWeight(20.9);
    d1.walk();
    d1.fly();
    d1.quack();
    if(d1.canFloat()){
        cout<<"D1 can float"<<endl;
    }

    d2.setWeight(41);
    d2.walk();
    d2.fly();
    d2.quack();

    if(d2.canFloat()){
        cout<<"D2 can float"<<endl;
    }
    */


    //Q7
    menu day1;
    WeekDayMenu day2;
    MondayMenu day3;

    menu *ptr_menu_1 = &day2;
    menu *ptr_menu_2 = &day3;
    menu *ptr_menu_3 = &day1;

    ptr_menu_1->soupOfTheDay();
    ptr_menu_2->soupOfTheDay();
    ptr_menu_3->soupOfTheDay();


    return 0;
}

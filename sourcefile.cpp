#include<iostream>

#include "headerfile.h"

using namespace std;

void pointer_2_base::func(){
    cout<<"I am function of base class"<<endl;
}

void derived_q1::func(){
    cout<<"I am function of derived class"<<endl;
}


//////////////////////////////////////////////////


void pointer_2_base_2::func(){
    cout<<"I am function of base class"<<endl;
}

void derived_q2::func(){
    cout<<"I am function of derived class"<<endl;
}

///////////////////////////////////////////////////

counting::counting(){
    count = 0;
}

void counting::click(){
    count++;
}

void counting::get(){
    cout<<"Value of count = "<<count<<endl;
}

void counting::set(int x){
    count = x;
}


/////////////////////////////////////////////////////

triangle::triangle(float a, float b){
    m1 = a;
    m2 = b;
}

void triangle::area(){
    cout<<"Area of triangle is "<<0.5 * m1 * m2<<endl;
}

rectangle::rectangle(float a, float b){
    m1 = a;
    m2 = b;
}

void rectangle::area(){
    cout<<"Area of rectangle is "<<m1 * m2<<endl;
}

void triangle::getDimentions(){
    cout<<"Base = "<<m1<<" Height = "<<m2<<endl;
}

void rectangle::getDimentions(){
    cout<<"Length = "<<m1<<" breadth = "<<m2<<endl;
}

/////////////////////////////////////////////////////

void Duck::walk(){
    cout<<"I am a duck and i am walking."<<endl;
}

bool Duck::canFloat(){
    return true;
}

Duck::Duck(){
    weight = 0.0;
}

void RubberDuck::walk(){
    cout<<"Oops I can't walk because I am a rubber Duck"<<endl;
}

void RubberDuck::setWeight(float x){
    weight = x;
}

void RubberDuck::quack(){
    cout<<"I am a rubber duck and i quack like qua qua qua...."<<endl;
}

void RubberDuck::fly(){
    cout<<"I am rubber and i can fly if i have motors and propellers"<<endl;
}

void MallerDuck::fly(){
    cout<<"I am a maller duck and i can fly"<<endl;
}


void MallerDuck::setWeight(float x){
    weight = x;
}

void MallerDuck::quack(){
    cout<<"I am a maller duck and i quack like que que que...."<<endl;
}


////////////////////////////////////////////////////////////////

void menu::soupOfTheDay(){
    cout<<"Sour Soup"<<endl;
}

void WeekDayMenu::soupOfTheDay(){
    cout<<"Corn Soup"<<endl;
}

void MondayMenu::soupOfTheDay(){
    cout<<"Sweet Soup"<<endl;
}

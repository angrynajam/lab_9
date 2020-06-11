
class pointer_2_base{
public:
    void func();
};

class derived_q1:public pointer_2_base{
public:
    void func();
};

////////////////////////////////////////////

class pointer_2_base_2{
public:
    virtual void func();
};

class derived_q2:public pointer_2_base_2{
public:
    void func();
};

////////////////////////////////////////////

class counter{
public:
    virtual void click()=0;
    virtual void get()=0;
    virtual void set(int)=0;
};

class counting:public counter{
private:
    int count;
public:
    counting();
    void click();
    void set(int);
    void get();
};

////////////////////////////////////////////

class shape{
protected:
    float m1,m2;
public:
    virtual void area()=0;
    virtual void getDimentions()=0;
};

class triangle:public shape{
public:
    triangle(float,float);
    void area();
    void getDimentions();
};

class rectangle:public shape{
public:
    rectangle(float,float);
    void area();
    void getDimentions();
};

///////////////////////////////////////////

class Duck{
protected:
    float weight;
public:
    Duck();
    virtual void walk();
    virtual void quack()=0;
    virtual bool canFloat();
    virtual void setWeight(float)=0;
};

class MallerDuck:public Duck{
public:
    void quack();
    void fly();
    void setWeight(float);
};

class RubberDuck:public Duck{
public:
    void walk();
    void quack();
    void fly();
    void setWeight(float);
};

////////////////////////////////////////////////

class menu{
public:
    virtual void soupOfTheDay();
};

class WeekDayMenu:public menu{
public:
    void soupOfTheDay();
};

class MondayMenu:public menu{
public:
    void soupOfTheDay();
};

#include <iostream>
#include <memory>

class Uncopyable{
    protected:
        Uncopyable(){}
        ~Uncopyable(){}
    private:
        Uncopyable(const Uncopyable&);
        Uncopyable& operator=(const Uncopyable&);
};

class Task{
    private:
        std::string description;
        std::string workingArea;
        int id;
        int daysLeft;

    public:
        Task();
        Task(std::string description, std::string workingArea, int id, int daysLeft);
        int getId();
        void printTaskInfo();
        void doingTask();
};

//14
class TaskHandler : private Uncopyable{
    private:
        Task taskPtr;
    public:
        TaskHandler();
        explicit TaskHandler(Task task);
        ~TaskHandler();
        void getResource(Task t);
        void freeResource(Task t);
};

Task::Task():
    description(),
    workingArea(),
    id(),
    daysLeft(){}

Task::Task(std::string description, std::string workingArea, int id, int daysLeft):
    description(description),
    workingArea(workingArea),
    id(id),
    daysLeft(daysLeft){}

int Task::getId(){
    return id;
}

void Task::printTaskInfo(){
    std::cout<<"Description: "<<description<<" Working area: "<<workingArea<<" Id: "<<id<<  " Days left: "<<daysLeft<<std::endl;
}

void Task::doingTask(){
    std::cout<<"Task "<<id<<" in progress..."<<std::endl;
}

TaskHandler::TaskHandler():
    taskPtr(){};

TaskHandler::TaskHandler(Task task):
    taskPtr(task){getResource(taskPtr);}

TaskHandler::~TaskHandler(){
    freeResource(taskPtr);
}

void TaskHandler::getResource(Task t){
    std::cout<<"Aquired resource"<<std::endl;
}

void TaskHandler::freeResource(Task t){
    std::cout<<"Freed resource"<<std::endl;
}

int main(){
    //13
    std::auto_ptr<Task> t1 (new Task("test features", "testing", 123, 19));
    t1->printTaskInfo();
    t1->doingTask();
    std::auto_ptr<Task> t2(t1);
    t2->printTaskInfo();
    //t1->doingTask();
    t2->doingTask();

    std::shared_ptr<Task> t3(new Task("make uml diagram", "planning", 78, 12));
    std::shared_ptr<Task> t4;
    t4=t3;
    t3->printTaskInfo();
    t3->doingTask();
    t4->printTaskInfo();
    t4->doingTask();

    Task t5("launch app", "launching", 11, 3);
    Task t6("debug app", "debugging", 171, 56);

    TaskHandler th5(t5);
    TaskHandler th6(t6);
    // TaskHandler th2;
    // th2=th1;
}

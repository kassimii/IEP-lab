#include <iostream>
#include <memory>

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


//14
static void cleanResource(Task *t){
    t->~Task();
    std::cout<<"Task "<<t->getId()<<" deleted"<<std::endl;
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

    //14
    std::shared_ptr<Task> t5(new Task("launch app", "launching", 11, 3), cleanResource);
    std::shared_ptr<Task> t6(t5);
    t5->printTaskInfo();
    t5->doingTask();
    t6->printTaskInfo();
    t6->doingTask();
}

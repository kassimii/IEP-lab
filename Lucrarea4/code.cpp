#include <iostream>

class Uncopyable{
    protected:
        Uncopyable(){}
        ~Uncopyable(){}
    private:
        Uncopyable(const Uncopyable&);
        Uncopyable& operator=(const Uncopyable&);
};

class Book : private Uncopyable{
    private:
        std::string title;
        std::string author;
        std::string publisher;
        int numberOfPages;

    public:
        Book();
        Book(std::string title, std::string author, std::string publisher, int numberOfPages);
};

class Dog{
    private: 
        std::string name;
        int age;

    public:
        Dog();
        Dog(std::string name, int age);
        void printInformation();
};

Book::Book():
    title(),
    author(),
    publisher(),
    numberOfPages(){std::cout<<"Title: "<<this->title<<" Author: "<<this->author<<" Publisher: "<<this->publisher<<" No of pages: "<<this->numberOfPages<<std::endl;}

Book::Book(std::string title, std::string author, std::string publisher, int numberOfPages):
    title(title),
    author(author),
    publisher(publisher),
    numberOfPages(numberOfPages){std::cout<<"Title: "<<this->title<<" Author: "<<this->author<<" Publisher: "<<this->publisher<<" No of pages: "<<this->numberOfPages<<std::endl;}

Dog::Dog():
    name(),
    age(){}

Dog::Dog(std::string name, int age):
    name(name),
    age(age){}

void Dog::printInformation(){
    std::cout<<"Name: "<<this->name<<" Age: "<<this->age<<std::endl;
}


int main(){
    //4
    Book b1("maitreyi","eliade","bpt",256);

    //5
    Dog dog1("Rex",12); //constructor
    Dog dog2(dog1); //copy constructor
    Dog dog3; 
    dog3=dog1; //copy assignment operator
    dog1.printInformation();
    dog2.printInformation();
    dog3.printInformation();
    
    //6
    //compilation error
    // Book b3(b1);
    // Book b4;
    // b4 = b1;
}
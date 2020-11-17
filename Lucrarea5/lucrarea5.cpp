#include <iostream>
#include <algorithm>

class Sweetener{
    private:
        std::string typeOfSweetener;
    
    public:
        Sweetener(std::string typeOfSweetener);
        std::string getTypeOfSweetener(){return this->typeOfSweetener;}
};
   
Sweetener::Sweetener(std::string typeOfSweetener):
    typeOfSweetener(typeOfSweetener){
        std::cout<<"Type of sweetener: "<<typeOfSweetener<<std::endl;
    }


class Bevarage{
    protected:
        std::string name;
        double price;
        int size;
        Sweetener *sweetener;
    
    public:
        Bevarage(std::string name, double price, int size, Sweetener *sweetener);
        Bevarage(const Bevarage& rhs);
        Bevarage& operator=(const Bevarage& rhs);
        std::string getSweetener(){return sweetener->getTypeOfSweetener();}
};

   
Bevarage::Bevarage(std::string name, double price, int size, Sweetener *sweetener):
    name(name),
    price(price),
    size(size),
    sweetener(sweetener){std::cout<<"Name: "<<name<<" Price: "<<price<<" Size: "<<size<<" Sweetener: "<<sweetener->getTypeOfSweetener()<<std::endl;}

Bevarage::Bevarage(const Bevarage& rhs):
    name(rhs.name),
    price(rhs.price),
    size(rhs.size),
    sweetener(rhs.sweetener){std::cout<<"Name: "<<name<<" Price: "<<price<<" Size: "<<size<<" Sweetener: "<<sweetener->getTypeOfSweetener()<<std::endl;}

Bevarage& Bevarage::operator=(const Bevarage& rhs){
    this->name=rhs.name;
    this->price=rhs.price;
    this->size=rhs.size;
   
    //item 11
    Sweetener *orig = sweetener;
    this->sweetener=new Sweetener(*rhs.sweetener);
    delete orig;

    std::cout<<"Name: "<<name<<" Price: "<<price<<" Size: "<<size<<" Sweetener: "<<sweetener->getTypeOfSweetener()<<std::endl;

    //item 10
    return *this;
}

class Coffee : public Bevarage{
    private:
        int shotsOfCoffee;
    
    public:
        Coffee(std::string name, double price, int size, Sweetener *sweetener, int shotsOfCoffee);
        Coffee(const Coffee& rhs);
        Coffee& operator=(const Coffee& rhs);

};

Coffee::Coffee(std::string name, double price, int size, Sweetener *sweetener, int shotsOfCoffee):
    Bevarage(name, price, size, sweetener),
    shotsOfCoffee(shotsOfCoffee){
        std::cout<<"Name: "<<name<<" Price: "<<price<<" Size: "<<size<<" Sweetener: "<<sweetener->getTypeOfSweetener()<<" Shots of coffee: "<<shotsOfCoffee<<std::endl;
    }

//item 12
Coffee::Coffee(const Coffee& rhs): 
    Bevarage(rhs),
    shotsOfCoffee(rhs.shotsOfCoffee){
        std::cout<<"Name: "<<name<<" Price: "<<price<<" Size: "<<size<<" Sweetener: "<<sweetener->getTypeOfSweetener()<<" Shots of coffee: "<<shotsOfCoffee<<std::endl;
    }

Coffee& Coffee::operator=(const Coffee& rhs){
    Bevarage::operator=(rhs);
    shotsOfCoffee=rhs.shotsOfCoffee;

    std::cout<<"Name: "<<name<<" Price: "<<price<<" Size: "<<size<<" Sweetener: "<<sweetener->getTypeOfSweetener()<<" Shots of coffee: "<<shotsOfCoffee<<std::endl;

    return *this;
}


int main(){
    Sweetener *s1 = new Sweetener("sugar");
    Sweetener *s2 = new Sweetener("none");
    Sweetener *s3 = new Sweetener("stevia");
    Sweetener *s4 = new Sweetener("honey");

    std::cout<<std::endl;
    std::cout<<"----------------------------------"<<std::endl;
    std::cout<<"----------------------------------"<<std::endl;
    std::cout<<std::endl;

    Bevarage b1("matcha",14.9, 1, s1);
    std::cout<<"----------------------------------"<<std::endl;
    Bevarage b2(b1);
    std::cout<<"----------------------------------"<<std::endl;
    Bevarage b3("tea",12.9, 2, s2);
    b3=b1;

    std::cout<<std::endl;
    std::cout<<"----------------------------------"<<std::endl;
    std::cout<<"----------------------------------"<<std::endl;
    std::cout<<std::endl;

    Coffee c1("latte",16.9, 3, s3, 2);
    std::cout<<"----------------------------------"<<std::endl;
    Coffee c2(c1);
    std::cout<<"----------------------------------"<<std::endl;
    Coffee c3("cold brew",18.9, 1, s4, 3);
    std::cout<<"----------------------------------"<<std::endl;
    c3=c1;

}
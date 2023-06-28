#include <iostream>
#include <string>

class Animal
{
public:
    virtual void Voice()
    {
        std::cout << "Text" << "\n";
    }
};

class Dog : public Animal
{
public:
    void Voice() override
    {
        std::cout << "Woof!" << "\n";
    }
};

class Cat : public Animal
{
public:
    void Voice() override
    {
        std::cout << "Meow!" << "\n";
    }
};

class Goes : public Animal
{
public:
    void Voice() override
    {
        std::cout << "Ow ow ow!" << "\n";
    }
};


class Fox : public Animal
{
public:
    void Voice() override
    {
        std::cout << "Hatee-hatee-hatee-ho!" << "\n";
    }
};

int main()
{
    Dog dog1, dog2, dog3, dog4;
    Cat cat1, cat2, cat3, cat4;
    Goes goes1, goes2, goes3, goes4;
    Fox fox1, fox2, fox3, fox4;

    Animal *arr[16] = { &dog1 , &cat1 ,&goes1 , &fox1 ,
                        &dog2 , &cat2 ,&goes2 , &fox2 ,
                        &dog3 , &cat3 ,&goes3 , &fox3 ,
                        &dog4 , &cat4 ,&goes4 , &fox4 };


    for (Animal* i : arr)
    {
        i->Voice();
    }
}

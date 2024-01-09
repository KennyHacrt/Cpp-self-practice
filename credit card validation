
#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>
// validate credit card for even number cards

int validation_even(const std::string number);
int validation_odd(const std::string number);
int transfer(const int number);
int main(){
    
    std::string credit_card_no;
    std::cout<<"Please enter your credit card number:\n";
    std::cin>>credit_card_no;
    
    int result=validation_even(credit_card_no)+validation_odd(credit_card_no);
    if (result%10==0)
    {
        std::cout<<"card valid!!";
    }
    else
    {
        std::cout<<"card not valid!!";
    }
    
    

    return 0;

}
int transfer(const int number)
{
    
    return number%10+number/10;
}
int validation_even(const std::string number)
{   
    int sum=0;
    for (int i=number.size()-2;i>=0;i-=2)
    {
        sum+=transfer((number[i]-'0')*2);
    }
    return sum;
}
int validation_odd(const std::string number)
{
    int sum=0;
    for (int i=number.size()-1;i>=0;i-=2)
    {
        sum+=(number[i]-'0');
    }
    return sum;
}



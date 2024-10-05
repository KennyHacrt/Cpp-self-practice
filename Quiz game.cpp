
#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>
// quiz
int main(){
    std::string questions[]=
    {"Who found newton's law?",
    "who invented atomic bomb?",
    "who is the strongest man in the world?",
    "who invented c++?"
    };
    std::string answer_set[][4]=
    {
        {"A. Kenny","B. Newton","C. Maggie","D. Alan turing"},
        {"A. J. Robert Oppenheimer","B. Newton","C. Adolf Hitler","D. Alan turing"},
        {"A. Bjarne Stroustrup","B. Kenny","C. Adolf Hitler","D. Alan turing"},
        {"A. Bjarne Stroustrup","B. Kenny","C. Adolf Hitler","D. Alan turing"}

    };


    std::cout<<"***** Quiz *****"<<"\n";
    char Answers[4]={'B','A','B','A'};
    int rows=sizeof(answer_set)/sizeof(answer_set[0]);
    char Reply;
    int result=0;


    for (int i=0;i<rows;i++)
    {
    int columns=sizeof(answer_set[i])/sizeof(answer_set[0][0]);
    std::cout<<questions[i]<<"\n";
    for (int j=0;j<columns;j++)
    {
        std::cout<<answer_set[i][j]<<"\n";

    }
    std::cout<<"-------------------------------"<<"\n";
    std::cout<<"please enter the correct answer"<<"\n";
    std::cin>>Reply;
    if (Reply==Answers[i])
    {
        std::cout<<"Correct!!"<<"\n";
        std::cout<<"-------------------------------"<<"\n";
        result++;
    }
    else
    {
        std::cout<<"You are wrong,the correct answer is "<<Answers[i]<<"\n";
        std::cout<<"-------------------------------"<<"\n";
    }

    }
    std::cout<<"your final result is "<<result<<"/4"<<"\n";
    std::cout<<"you got "<<result/4*100<<" percent correct";

    return 0;

}







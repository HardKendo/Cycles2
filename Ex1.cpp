#include <iostream>

int main()
{   
    int choose = 1;
    while(choose == 1)
    {
        long number = 0;
        std::cout<<"Enter any number: ";
        std::cin>>number;
        int num2 = number;

        std::string str_num = std::to_string(number); //Считаем количесво цифр в числе.
        std::cout<<"\nThe number of digit = "<<str_num.length()<<'\n';
        //int i = 0;            //Или так.
        // while(number> 0)
        // {
        //     number/=10;
        //     i++;
        // }
        // std::cout<<i;

        
        
        int sum = 0;            //Сумма цифр числа и среднее арифметическое
        while(number!=0)
        {
            sum += number%10;
            number/=10;
        }
        std::cout<<"Summa = "<<sum<<'\n';

        double average = sum;
        std::cout<<"Average = "<<average/str_num.length()<<'\n';

        
        int q = 0;              //Количество нулей
        while(num2>0)
        {   
            if(num2%10==0)
            {
                ++q;
            }
            num2/=10;
        }
        std::cout<<"The number of zeros in a number = "<<q<<"\n\n";
        std::cout<<"Want to enter a different number?\n\nEnter 1 if yes.\nEnter 2 if no.\n";
        std::cin>>choose;
    }
    std::cout<<"Good bye!"<<'\n';
    
    
    return 0;
}
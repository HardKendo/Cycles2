#include <iostream>
#include <chrono>


int main()
{
   char symbol;

   std::cout<<"Enter need symbol: ";
   std::cin>>symbol;
   int count = 0;
   std::cout<<"Enter quantity symbols: ";
   std::cin>>count;
   int speed = 0;
   std::cout<<"Enter output speed in second: ";
   std::cin>>speed;
   int orientation = 0;
   std::cout<<"Choose output orientation:\nEnter 1 - horizontally.\nEnter 2 - vertically.";
   std::cin>>orientation;
   auto start = std::chrono::high_resolution_clock::now();
   if(orientation == 1)
   {
        for (int j = 0; j < count;)
        {
            auto now = std::chrono::high_resolution_clock::now();
            auto duration = std::chrono::duration_cast<std::chrono::seconds>(now - start).count();
            if (duration >= speed)
            {
                std::cout << symbol << std::flush;
                ++j;
                start = std::chrono::high_resolution_clock::now();
            }
        }
    }
    else if(orientation == 2)
    {
        for (int j = 0; j < count;)
        {
            auto now = std::chrono::high_resolution_clock::now();
            auto duration = std::chrono::duration_cast<std::chrono::seconds>(now - start).count();
            if (duration >= speed)
            {
                std::cout << symbol << std::flush<<std::endl;
                ++j;
                start = std::chrono::high_resolution_clock::now();
            }
        }

    }
    return 0;
}
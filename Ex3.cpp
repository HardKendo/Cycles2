#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <chrono>
// #include <array> check

void loading()// функция для визуализации загрузки.
{
    auto start = std::chrono::high_resolution_clock::now();
    for (int j = 0; j < 5;)
    {
        auto now = std::chrono::high_resolution_clock::now();
        auto duration = std::chrono::duration_cast<std::chrono::seconds>(now - start).count();
        if (duration >= 1)
        {
            std::cout << "# " << std::flush;
            ++j;
            start = std::chrono::high_resolution_clock::now();
        }
    }
    std::cout << '\n';
}

int main()
{
    srand(time(nullptr));
    std::cout << "Loading. ";
    loading();
    int begin = 1;
    std::cout << "########  CUBES  ########\nEnter 1 for start.\nEnter 0 for exit.\n---> ";
    std::cin >> begin;
    while (begin == 1)
    {
        int your_cubes[6];
        int comp_cubes[6];
        int i;
        for (int i = 0; i < 6; ++i)
        {
            your_cubes[i] = rand() % 6 + 1;
            comp_cubes[i] = rand() % 6 + 1;
        }
        int t_scoreP = 0;
        int t_scoreC = 0;
        for (int q = 0; q < 6; ++q)
        {
            t_scoreP += your_cubes[q];
            t_scoreC += comp_cubes[q];
        }
        std::cout << "\n########  Let's do this! Good luck!  ########\n\nFirst throw. ";
        loading();
        std::cout << "\nYour score - " << your_cubes[0] << " and " << your_cubes[1] << '\n'
                  << "COM score - " << comp_cubes[0] << " and " << comp_cubes[1] << "\n\nSecond throw. ";
        loading();
        std::cout << "\nYour score - " << your_cubes[2] << " and " << your_cubes[3] << '\n'
                  << "COM score - " << comp_cubes[2] << " and " << comp_cubes[3] << "\n\nThird throw. ";
        loading();
        std::cout << "\nYour score - " << your_cubes[4] << " and " << your_cubes[5] << "\n"
                  << "COM score - " << comp_cubes[4] << " and " << comp_cubes[5] << "\n\n########  Total score.  ########\n\n";
        loading();
        std::cout << "\nYou"
                  << "  "
                  << "COM\n";

        std::cout << " " << t_scoreP << "    " << t_scoreC << "\n\n";

        if (t_scoreP > t_scoreC)
        {
            std::cout << "You win! Congratulations!\n\n";
        }
        else if (t_scoreP == t_scoreC)
        {
            std::cout << "Draw. Try again.\n\n";
        }
        else if (t_scoreP < t_scoreC)
        {
            std::cout << "You lose! Lucky next time.\n\n";
        }
        std::cout << "########  Try again?  ########\nEnter 1 for start.\nEnter 0 for exit.\n---> ";
        std::cin >> begin;
    }
    std::cout << "########  See you soon!  ########\n\n";

    return 0;
}
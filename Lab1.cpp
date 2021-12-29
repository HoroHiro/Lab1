#include <iostream>
#include "Function.h"
#include <fstream>

int main()
{
    double mas[3];
    for (int i=0; i<3;i++){
        std::cin>>mas[i];
    }
    for(int i=0; i<3;i++){
        std::cout<<mas[i]<<std::endl;
    }
    std::cout<<std::endl;
    sort(mas, 3);
    for(int i=0; i<3;i++){
        std::cout<<mas[i]<<std::endl;
    }
    goodbedn(mas, 3);

    std::ofstream fout("cppstudio.txt");
    fout << mas[0] << mas[1] << mas[2] << std::endl;
    fout.close();
    system("pause");
}

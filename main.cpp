#include <iostream>
#include <fstream>
#include "StrBlob.h"
int main()
{

    std::ifstream ifs("../jieqi.txt");
    StrBlob j_blob;
    for(std::string str; std::getline(ifs, str); j_blob.push_back(str))
    {
        std::cout<<str<<std::endl;
    }
    std::cout<<"reading via StrBlotPtr:\n";
    for(StrBlobPtr pbeg(j_blob.begin()), pend(j_blob.end()); pbeg != pend; pbeg.incr())
    {
        std::cout<<pbeg.deref()<< std::endl;
    }

    return 0;
}
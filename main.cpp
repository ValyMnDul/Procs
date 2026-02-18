#include <iostream>
#include <filesystem>
#include <fstream>
#include <string>

bool isNumber(const std::string& fileName){
    if(fileName.empty()){
        return false;
    }
    for(char c:fileName){
        if(c<'0'||c>'9'){
            return false;
        }
    }
    return true;
}

int main(){

    try {
        for(const std::filesystem::directory_entry& entry:std::filesystem::directory_iterator("/proc")){
            std::string fileName = entry.path().filename().string();

            if(isNumber(fileName)){
                std::string filePath = "/proc/"+fileName+"/comm";
                std::ifstream file(filePath);
                
                if(!file.is_open()){
                    continue;
                }

                std::string processName;
                std::getline(file,processName);

                std::cout<<"PID: "<<fileName<<"  |  Name: "<<processName<<"\n";
            }
        }
    }
    catch(const std::exception& e){
        std::cerr<<"Error: "<<e.what()<<'\n';
    }
    
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    
    char input;
    string flag;
    while(input != '\n'){
    
        std::cout << "Enter number" << endl;
        cin>> input;
        //convert
        if(input=='-'){
            flag = "negative";
            //jump to while
        }
        if(input=='+'){
            //jump to while
        }
        if (input== '\n')
        {
            //jump to skip
        }
        
        
    }
    //skip

    return 0;
}

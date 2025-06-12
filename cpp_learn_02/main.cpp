#include <iostream>
#include<string>

using std::cout;

int main(int, char**)
{
    cout << "hey dude??";
    std::string my_name; 
    std::cin >> my_name;
    //the response line:
    const std::string response_line="hello " + my_name + "!";
    
    //keep on keeping on with integers

    const int8_t pad_lines = 1;

    const int8_t total_lines = pad_lines* 2 + 3;

    //int row_number = 0;
    
    const std::string::size_type column_number = response_line.size() + 2*pad_lines + 2;
    //loop comming up

    
    
    for(int i = 0; i != total_lines; ++i){
        
        std::string::size_type loop_counter = 0;

        while(loop_counter != column_number){
            //cout << "fuck the pain away" << std::endl;

            if(i == pad_lines+1 && loop_counter == pad_lines +1){
                cout << response_line;
                loop_counter += response_line.size();
                
            }else {
                
                if(i==0 || i == total_lines - 1 || loop_counter == 0 || loop_counter == column_number-1)
                    cout << "*";
            
                else
                    cout << " "; 
                ++loop_counter;
            }

    }
        std::cout << std::endl;

    }


    //the frame lines:
    //std::string second_line_spaces(response_line.size(), ' ');
    //std::string second_line="*"+second_line_spaces+"*";
    
    //the star lines:
    //const std::string star_lines(second_line.size(), '*');
    //const int8_t test_length=1;

    //put together output
    //cout << std::endl;
    //cout << star_lines << std::endl;
    //cout << second_line_spaces << std::endl;
    //cout << response_line << std::endl;
    //cout << second_line_spaces << std::endl;
    //cout << star_lines << std::endl;
    
    return 0;
}

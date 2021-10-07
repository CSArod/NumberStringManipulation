/*Name: Alejandro_Rodriquez, 2001889172, Lab_5A
*Description: Start_to_finish_number_list
*Input: Number_start/finish/increment
*Output: List_based_on_user_input_parameters
*/
//include nessesary libraries
#include <iostream>
//main function
int main(){
    //declaration of user Input variables
    int startingNumber;
    int endingNumber;
    int increment;
    //prompt user for starting number input
    std::cout << "Enter a starting number\n**";
    //while loop to validate user input as an integer
    while(!(std::cin>>startingNumber)){
        //error message for invalid user input
        std::cout << "\nError: invalid entry."<<std::endl;
        //terminate program
        exit(0);
    }
        //prompt user to enter ending number
        std::cout << "\nEnter an ending number\n**";
    //while loop to validate user input as an integer  
    while(!(std::cin>>endingNumber)){
        //error message for invalid user input
        std::cout << "\nError: invalid entry."<<std::endl;
        //terminate program
        exit(0);
    }
    //if statement to check that larger input is second
    if(startingNumber > endingNumber){
        //error message when user inputs larger number 1st
        std::cout << "\nError: end must be greater than start.\n";
        //terminate program
        exit(0);
        }
        //prompt user for number to incrament by
        std::cout << "\nEnter a value to increment by\n**";
    //while loop to validate user input as an integer
    while(!(std::cin>>increment)){
        std::cout << "\nError: invalid entry."<<std::endl;
        exit(0);
    }
        std::cout<<"\n";
        //for loop contining list of user inputs for start to end
        for(int i = startingNumber; i < endingNumber+1; i++)
        {
        std::cout<< i << " ";
        //new variable containing incrament amount
        i += increment-1;
        }
    //spacing between numbers
   std::cout << "\n";
   return 0;
}

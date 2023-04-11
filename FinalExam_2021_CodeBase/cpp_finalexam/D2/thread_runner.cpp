#include <iostream>
#include "data_processing.h"

void process_data(int my_number, DataStorage &ds){
    std::cout << "processor #" << my_number << " starting" << std::endl;
    while(!ds.is_empty()){
        DataPiece dp = ds.get_next();
        std::cout << "processor #" << my_number << " processing data: " << dp << std::endl;
        int result = DataProcessor::process_data(dp);
        std::cout << "processor #" << my_number << " RESULT: " << result << std::endl;
    }
    std::cout << "processor #" << my_number << " STOPPING" << std::endl;
}

int main(){
    DataStorage ds;

    process_data(1, ds);

    return 0;
}
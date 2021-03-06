#include "mergesort3.h"

/*
 * This program will parse the data from data.txt and sort it, printing out
 * to the standard output. Reuses some code from my homework 1
 */
int main() {
    //get data from file
    std::vector<std::vector<int>> data;
    data = read_file(data);

    //print unsorted
    std::cout << "\nUnsorted Data: \n";
    print_array(data);


    //sort each line individually
    for(unsigned long int i = 0; i < data.size(); i++) {
        merge_sort_3(data[i], 0, ((int)data[i].size() - 1));
    }
    
    //print sorted data
    std::cout << "\nSorted Data: \n";
    print_array(data);
}





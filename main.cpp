//
// Created by tamda on 01/09/2025.
//

#include "main.h"

#include <algorithm>
#include <iostream>
#include <ostream>
#include <wchar.h>
using namespace std;
//FIND the largest element of 2 intergers.


// int getMax (int num1, int num2) {
//     int result;
//
//     if (num1 > num2) {
//         result = num1;
//     } else {
//         result = num2;
//     }
//     return result;
// }
//
// int main (){
//     cout << getMax(9, 1);
//     return 0;
//
// }



// FIND the largest element of a given array of integers.

// int main() {
//     int getMax[] = {3, 5, 289, 39};
//
//     int* maxElement = std::max_element(getMax, getMax + 4);
//
//     cout << "The largest element in the array is: " << *maxElement << endl;
//
//     return 0;
// }




//FIND the largest number of intergers using array.


// int main(){
//
//     int nums[] = {};
//     nums[0] = 2;
//     nums[1] = 2;
//     nums[2] = 2;
//     int result;
//
//     if (nums[0] > nums[1] && nums[0] > nums[2]) {
//         result = nums[0];
//     }else if (nums[1] > nums[0] && nums[1] > nums[2]) {
//         result = nums[1];
//     }else {
//         result = nums[2];
//     }
//     cout << result << endl;
//
//     return 0;
// }





//FIND the largest number of intergers using array.


int main(){

    int nums[] = {3, 873, 99, 8};
    int n = sizeof(nums) / sizeof(nums[0]);
    int i = 0;

    //METHOD while loops
    int max = nums[0];
    while (i < n-1) {
        if (nums[i+1] > max) {
            max = nums[i+1];
        }
        i++;
    }
    cout << "Largest Number: " << max << endl;
    return 0;



    // METHOD for loops
    // for (i = 0; i <= 2; i++) {
    //     if (nums[i] > nums[i + 1]) {
    //         result = nums[i];
    //     }else if (nums[i] < nums[i + 1]) {
    //         result = nums[i+1];
    //     }
    // }
    //
    // cout << "Largest Number: " << largestNum << endl;
    // return 0;
}

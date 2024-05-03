/* ************************************************************************************** */
/*																						  */
/*                                                						d8b		888       */
/*                                                  					Y8P		888       */
/*                                                      						888       */
/*		888  888	  .d88b.   	8888b.  	88888b.d88b.	88888888	888 	888       */
/*		888  888 	d88""88b     	"88b 	888 "888 "88b    	d88P 	888 	888       */
/*		888  888 	888  888 	.d888888 	888  888  888		d88P   	888 	888       */
/*		Y88b 888 	Y88..88P 	888  888 	888  888  888	  d88P    	888 	888       */
/*		"Y88888  	"Y88P"  	"Y888888 	888  888  888	88888888 	888 	888       */
/*	  		 888																          */
/*		Y8b d88P																          */
/*		"Y88P"									By: yoamzil <yoamzil@student.1337.ma>     */
/*																						  */
/* ************************************************************************************** */

#include "Array.hpp"
#include <iostream>

int main()
{
    Array<int> arr1(5);
    for (unsigned int i = 0; i < arr1.Size(); i++)
	{
        arr1[i] = i * 10;
    }
    //  copy constructor
    Array<int> arr2 = arr1;
    // assignment operator
    Array<int> arr3;
    arr3 = arr2;
    // printing arr3
    for (unsigned int i = 0; i < arr3.Size(); i++) {
        std::cout << "arr3[" << i << "] = " << arr3[i] << std::endl;
    }
    // exception
    try
	{
        std::cout << arr3[10] << std::endl; // This should throw an exception
    }
	catch (const std::exception& e)
	{
        std::cout << "Caught exception: " << e.what() << std::endl;
    }
    return (0);
}

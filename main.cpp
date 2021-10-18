#include <iostream>

//prints the array
void printarray(int* array, int length)
{
    for (int i = 0; i < length; ++i)
        std::cout << array[i] << std::endl;
}
void bubblesort(int* array, int length) {
    //declare variables
	bool swapped = true;
	int temp;
    // start of algorithmn
	while (swapped) {
        //swapped = false
		swapped = false;
        //for j = n : i + 1, 
        for (int i = 0; i < length; i++)
        {
            //sorts the numbers 
            //if a[j] < a[j - 1],
            if (array[i] < array[i - 1])
            {                          
                //swap array[j, j - 1]
                temp = array[i  - 1];
                array[i - 1] = array[i];   
                array[i] = temp;
                // swapped = true 
                swapped = true;
            }
        }
}

int main()
{
    //too bored to do some looping for this type of ask lol
    int num1 = 0;
    std::cin >> num1;
    int num2 = 0;
    std::cin >> num2;
    int num3 = 0;
    std::cin >> num3;
    int num4 = 0;
    std::cin >> num4;
    int num5 = 0;
    std::cin >> num5;
    int array[5] = { num1, num2, num3, num4, num5};
    //size of the array or length i must say
    int length = sizeof(array) / sizeof(array[0]);
    //it sort low to high lol
    bubblesort(array, length);
    std::cout << "Sort:" << std::endl;
    // this is some child labour ngl for print array lol
    printarray(array, length);
    return (0);
}

#include "Header.h"
using namespace std;
//generates the fibonacci series given an array and size
template <typename type> type* fib_generator(int no_of_terms)
{
    type* terms = new type[no_of_terms];
    //set first two terms
    terms[0] = 0;
    terms[1] = 1;
    for (int i = 2; i < no_of_terms; i++)
    {
        terms[i] = terms[i - 1] + terms[i - 2];
    }
    return terms;
}
//prints the array containing the series
template <typename type> void print_array(type* array, int array_size)
{
    for (int i = 0; i < array_size; i++)
        cout << array[i] << endl;
}
int main()
{    
    //get number of fibonacci series terms    
    cout << "please enter the number of fibonacci terms !" << endl;
    int no_of_terms = 0;
    cin >> no_of_terms;
    //in case of just 1 or 2 terms 
    if (no_of_terms == 1)
        cout << 0 << endl;
    if (no_of_terms == 2)
        cout << 0 << endl << 1 << endl;
    //
    if (no_of_terms <= 90&& no_of_terms>2)
    {    
        long long int*fib_series_terms=fib_generator<long long int>(no_of_terms);
        print_array(fib_series_terms, no_of_terms);       
    }
    else if (no_of_terms > 90)
    {        
        double* fib_series_terms = fib_generator<double>( no_of_terms);
        print_array(fib_series_terms, no_of_terms);
    }
    return 0;
}
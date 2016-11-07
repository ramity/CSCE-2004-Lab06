#include <iostream>
#include <math.h>
using namespace std;

int main()
{
   // Declare array of integers
   const int DATA_SIZE = 20;
   int data[DATA_SIZE];
   int seed = 37;
   double mean;
   double sum;
   double variance;


   // Initialize array
   for (int index = 0; index < DATA_SIZE; index++){
      data[index] = seed % 100;
      seed = seed + 37;
   }

   // Print array
   for (int index = 0; index < DATA_SIZE; index++)
   {
      cout << data[index] << " ";
      sum = sum + data[index];
   }
   cout << endl;

   mean = sum / DATA_SIZE;

   cout << "mean: " << mean << endl;

   for(int index = 0; index < DATA_SIZE; index++)
   {
      variance = variance + pow((data[index] - mean),2);
   }

   variance = variance / DATA_SIZE;

   cout << "variance: " << variance << endl;

   return 0 ;
}

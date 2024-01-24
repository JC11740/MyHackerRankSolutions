//Complete the following function.

int marks_summation(int* marks, int number_of_students, char gender) {
  //Write your code here.
 
 //initialize sum to 0
 int sum = 0;
 
 //place holder i 
 int i = 0;
 
 //if the gender is a girl, increment i
 if (gender == 'g') {
     i++;
 }
 
 //no initial value needed
 //if "i" is less than "number_of_students" 
 //increment "i" by "i + 2"
 for ( ; i < number_of_students; i = i + 2 ) {
     
     sum = sum + marks[i];
 }
 
 return sum;
  
}


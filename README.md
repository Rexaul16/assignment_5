# assignment_5
Due: Thursday, September 24, 2015
 
You are to add one function to the bag class from the textbook. Add the following member
function:

int bag::minimum() const

The precondition for minimum is that the bag is not empty. The function minimum() returns the value of a minimum
element of the bag. Note: This function is const. This means that minimum does not change the bag.

BAG SORT
now write the main program and implement the "bag sort" described below:
1.Initialization
The user inputs n (smaller that CAPACITY)
Then the following numers are inserted into bag the_bag:

for(int i = 1; i <= n; i++)
the_bag.insert((int)(1000 * (sin(1.2 * i) * sin(1.2 * i)))) 

2.Loop
The task is to simply write the numers in sorted order to the screen. In order to do this you
repeatedly find the minimum, write it to the screen and delete it until the bag is empty.
Note: Your program must only use the bag functions already present in the original bag.h and the
one function minimum() which you write.

Three files total. bagsort.cxx for the main program, bag_updated.cxx and bag_updated.h for your updated bag class
with the extra minimum().

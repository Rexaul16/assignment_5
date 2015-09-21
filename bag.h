#ifndef MAIN_SAVITCH_BAG1_H
#define MAIN_SAVITCH_BAG1_H


    const int CAPACITY = 30;

    class bag
    { 
    public:
        // TYPEDEFS and MEMBER CONSTANTS
       
        
        // CONSTRUCTOR
        bag( ) { used = 0; } 
        // MODIFICATION MEMBER FUNCTIONS
        int erase(int target);
        bool erase_one(int target);
        void insert(int entry);
        void operator +=(const bag& addend);
        // CONSTANT MEMBER FUNCTIONS
        int size( ) const { return used; }
        int count(int target) const;
    private:
        int data[CAPACITY];  // The array to store items
        int used;             // How much of array is used
    };

    // NONMEMBER FUNCTIONS for the bag class
    bag operator +(const bag& b1, const bag& b2);


#endif

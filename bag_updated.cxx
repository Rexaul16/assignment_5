#include <algorithm> // Provides copy function
#include "bag_updated.h"
using namespace std;


    
    
    int bag::erase(int target)
    {
	int index = 0;
	int many_removed = 0;

	while (index < used)
	{
	    if (data[index] == target)
	    {
		--used;
		data[index] = data[used];
		++many_removed;
	    }
	    else
		++index;
	}

	return many_removed;
    }

    bool bag::erase_one(int target)
    {
	int index; // The location of target in the data array    

	// First, set index to the location of target in the data array,
	// which could be as small as 0 or as large as used-1. If target is not
	// in the array, then index will be set equal to used.
	index = 0; 
	while ((index < used) && (data[index] != target))
	    ++index;

	if (index == used)
	    return false; // target isn’t in the bag, so no work to do.

	// When execution reaches here, target is in the bag at data[index].
	// So, reduce used by 1 and copy the last item onto data[index].
	--used;
	data[index] = data[used];    
	return true;
    }

    void bag::insert(const int entry)
    
    {   
        
        data[used] = entry;
	++used;
    }

    void bag::operator +=(const bag& addend)
    // Library facilities used: algorithm, cassert
    {
	
	copy(addend.data, addend.data + addend.used, data + used);
	used += addend.used;
    }

    int bag::count(int target) const
    {
        int answer;
        int i;

        answer = 0;
        for (i = 0; i < used; ++i)
            if (target == data[i])
                ++answer;
        return answer;
    }

    bag operator +(const bag& b1, const bag& b2)
    // Library facilities used: cassert
    {
        bag answer;

        answer += b1; 
        answer += b2;
        return answer;
    }

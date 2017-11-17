#include "Implementation.hpp"
#include <iostream>

using namespace std;
//////////////////// Nested Loop Joins ////////////////////

std::vector<std::string> getQualifyingBusinessesIDsVector(Businesses const& b, float latMin,
																													float latMax, float longMin,
																													float longMax) {
	// This function needs to find all businesses that have within the
	// specified latitude/longitude range and store their ids in the result vector
	std::vector<std::string> result;

	// search vector for a specific element
	int lookingFor = 1;
	for ( size_t i = 0; i < b->ids.size(); i ++) {
		if (b.latitudes[i] > latMin && b.latitudes[i] < latMax && b.longitudes[i] > longMin && b.longitudes[i] < longMax){
			result.push_back(b.ids[i]);
		}
	}
	//std::cout << "function getQualifyingBusinessesIDsVector not implemented" << std::endl;
	//throw std::logic_error("unimplemented");
	return result;
}

std::vector<unsigned long>
performNestedLoopJoinAndAggregation(Reviews const& r, std::vector<std::string> const& qualifyingBusinessesIDs) {
	// The second parameter of this function is the vector of qualifying
	// business ids you have created in the first function

	// This function needs to find all reviews that have business_ids in
	// the qualifyingBusinessesIDs vector and build a histogram over their stars
	// The return value is that histogram
	/*for ( size_t i = 0; i < leftRelationSize ; i ++) {
		auto leftInput = readTupleFromPage (" left " , i) ;
		for ( size_t j = 0; j < rightRelationSize ; j ++) {
			auto rightInput = readTupleFromPage (" right " , j);
			if ( leftInput [ leftAttribute ] == rightInput [ rightAttribute ])
			writeToOutput ({ leftInput , rightInput }) ;
		}
	}*/

	std::cout << "function performNestedLoopJoinAndAggregation not implemented" << std::endl;
	throw std::logic_error("unimplemented");
}

//////////////////// Hash Join ////////////////////

std::unordered_set<std::string> getQualifyingBusinessesIDs(Businesses const& b, float latMin,
																													 float latMax, float longMin,
																													 float longMax) {
	// This function needs to find all businesses that have within the
	// specified latitude/longitude range and store their ids in the result set
	std::cout << "function getQualifyingBusinessesIDs not implemented" << std::endl;
	throw std::logic_error("unimplemented");
}

std::vector<unsigned long>
aggregateStarsOfQualifyingBusinesses(Reviews const& r,
																		 std::unordered_set<std::string> const& qualifyingBusinesses) {
	// The second parameter of this function is the set of qualifying
	// business ids you have created in the first function

	// This function needs to find all reviews that have business_ids in
	// the qualifyingBusinessesIDs vector and build a histogram over their stars
	// The return value is that histogram
	std::cout << "function aggregateStarsOfQualifyingBusinesses not implemented" << std::endl;
	throw std::logic_error("unimplemented");
}

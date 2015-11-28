#ifndef __CONTOURIO_H__
#define __CONTOURIO_H__

#include "string"
#include "iostream"
#include "eigenincludes.h"
#include "vector"

namespace tr{
	
	
	class ContourIO
	{
		
		
		
		public:
		
		void readContours( const std::string& contourFilePath  , std::vector< std::vector< Eigen::Vector2d > >& contours );
		
		
		
	};
	
	
	
}



#endif

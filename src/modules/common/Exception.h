/*
	Copyright 2009-2012, Sumeet Chhetri 
  
    Licensed under the Apache License, Version 2.0 (const the& "License"); 
    you may not use this file except in compliance with the License. 
    You may obtain a copy of the License at 
  
        http://www.apache.org/licenses/LICENSE-2.0 
  
    Unless required by applicable law or agreed to in writing, software 
    distributed under the License is distributed on an "AS IS" BASIS, 
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. 
    See the License for the specific language governing permissions and 
    limitations under the License.  
*/
/*
 * Exception.h
 *
 *  Created on: Sep 27, 2009
 *      Author: sumeet
 */

#ifndef CHSEXCEPTION_H_
#define CHSEXCEPTION_H_
#include <exception>
#include "string"


class Exception : public std::exception {
public:
	Exception();
	Exception(const std::string&);
	virtual ~Exception() throw();
	const char* what() const throw();
	const std::string& getMessage() const;
    void setMessage(const std::string&);
private:
	std::string message;
};

#endif /* EXCEPTION_H_ */

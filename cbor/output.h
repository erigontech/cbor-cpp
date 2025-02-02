/*
   Copyright 2014-2015 Stanislav Ovsyannikov

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

	   Unless required by applicable law or agreed to in writing, software
	   distributed under the License is distributed on an "AS IS" BASIS,
	   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
	   See the License for the specific language governing permissions and
	   limitations under the License.
*/


#ifndef __CborOutput_H_
#define __CborOutput_H_

namespace cbor {
    class output {
    public:
        virtual ~output() = default;

        virtual unsigned char *data() = 0;

        virtual unsigned int size() = 0;

        virtual void put_byte(unsigned char value) = 0;

        virtual void put_bytes(const unsigned char *data, int size) = 0;
    };
}

#endif //__CborOutput_H_

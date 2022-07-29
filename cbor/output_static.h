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

#ifndef __CborStaticOutput_H_
#define __CborStaticOutput_H_

#include <cbor/output.h>

namespace cbor {
    class output_static : public output {
    private:
        unsigned char *_buffer;
        unsigned int _capacity;
        unsigned int _offset;
    public:
        output_static(unsigned int capacity);

        ~output_static() override;

        unsigned char *data() override;

        unsigned int size() override;

        void put_byte(unsigned char value) override;

        void put_bytes(const unsigned char *data, int size) override;
    };
}


#endif //__CborStaticOutput_H_

// Copyright (c) 2020, garry.hou <garry@esdk.net>, All rights reserved.
// 
// Clips is licensed under the Mulan PSL v1.
// You can use this software according to the termsand conditions of the Mulan PSL v1.
// You may obtain a copy of Mulan PSL v1 at :
//     http://license.coscl.org.cn/MulanPSL
// 
// THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND, 
// EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON - INFRINGEMENT, 
// MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
// 
// See the Mulan PSL v1 for more details.
// ----------------------------------------------------------------------------
// 

#define CATCH_CONFIG_RUNNER
#include "catch.hpp"

int main(int argc, char* argv[])
{
    // global setup...

    int result = Catch::Session().run( argc, argv );

    // global clean-up...

    return result;
}
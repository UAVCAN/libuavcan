/*
 * Copyright 2019 Amazon.com, Inc. or its affiliates. All Rights Reserved.
 */
#include "libuavcan/libuavcan.hpp"
#include "libuavcan/time.hpp"

namespace
{
class TooBig : public libuavcan::duration::Base<TooBig>
{
    uint8_t more_;
};
}  // namespace

int main()
{
    TooBig a;
    (void) a;
    return 0;
}

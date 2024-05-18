//
// Created by pixel on 18.05.2024.
//

#ifndef OP_20_THREAD_IO_TEST_H
#define OP_20_THREAD_IO_TEST_H

#include <stdio.h>
#include <stdlib.h>

#define ASSERT_STRING(expected, got) assertString(expected, got, __FILE__, __FUNCTION__, __LINE__);

void testThreadAll();

#endif //OP_20_THREAD_IO_TEST_H

#ifndef __TEST_HPP__
#define __TEST_HPP__

#include "gtest/gtest.h"
#include "indivtest.hpp"

#include <string>


int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

#endif //_TEST_HPP_

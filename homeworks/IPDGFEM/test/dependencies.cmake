# Dependencies of mastersolution tests:

# DIR will be provided by the calling file.

set(SOURCES
  test/ipdgfem_test_${DIR}.cc
)

set(LIBRARIES
  Eigen3::Eigen
  GTest::gtest_main
)
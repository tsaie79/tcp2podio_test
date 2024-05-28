# CMake generated Testfile for 
# Source directory: /home/tsai/eic/EICrecon.src/src/tests/algorithms_test
# Build directory: /home/tsai/eic/EICrecon.build/src/tests/algorithms_test
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(t_algorithms_test "env" "LLVM_PROFILE_FILE=algorithms_test.profraw" "/home/tsai/eic/EICrecon.build/src/tests/algorithms_test/algorithms_test")
set_tests_properties(t_algorithms_test PROPERTIES  _BACKTRACE_TRIPLES "/home/tsai/eic/EICrecon.src/src/tests/algorithms_test/CMakeLists.txt;28;add_test;/home/tsai/eic/EICrecon.src/src/tests/algorithms_test/CMakeLists.txt;0;")

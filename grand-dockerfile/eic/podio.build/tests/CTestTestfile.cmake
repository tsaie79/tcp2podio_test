# CMake generated Testfile for 
# Source directory: /home/tsai/eic/podio.src/tests
# Build directory: /home/tsai/eic/podio.build/tests
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(ostream_operator "/home/tsai/eic/podio.build/tests/ostream_operator")
set_tests_properties(ostream_operator PROPERTIES  ENVIRONMENT "LD_LIBRARY_PATH=/home/tsai/eic/podio.build/tests:/home/tsai/eic/podio.build/src:/usr/local/lib/root::/opt/detector/epic-nightly/lib:/usr/local/lib64:/usr/local/lib;PYTHONPATH=/home/tsai/eic/podio.src/python:/usr/local/python:/usr/local/lib/root:/usr/local/lib/python3.10/site-packages;PODIO_SIOBLOCK_PATH=/home/tsai/eic/podio.build/tests;ROOT_INCLUDE_PATH=/home/tsai/eic/podio.build/tests/datamodel:/home/tsai/eic/podio.src/include;SKIP_SIO_TESTS=1;IO_HANDLERS=ROOT;PODIO_USE_CLANG_FORMAT=OFF;PODIO_BASE=/home/tsai/eic/podio.src;ENABLE_SIO=OFF;PODIO_BUILD_BASE=/home/tsai/eic/podio.build" _BACKTRACE_TRIPLES "/home/tsai/eic/podio.src/cmake/podioTest.cmake;27;add_test;/home/tsai/eic/podio.src/tests/CMakeLists.txt;70;CREATE_PODIO_TEST;/home/tsai/eic/podio.src/tests/CMakeLists.txt;0;")
subdirs("root_io")
subdirs("unittests")
subdirs("dumpmodel")
subdirs("schema_evolution")

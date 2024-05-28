file(REMOVE_RECURSE
  "libJANA.pdb"
  "libJANA.so"
)

# Per-language clean rules from dependency scanning.
foreach(lang C CXX)
  include(CMakeFiles/jana2_shared_lib.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()

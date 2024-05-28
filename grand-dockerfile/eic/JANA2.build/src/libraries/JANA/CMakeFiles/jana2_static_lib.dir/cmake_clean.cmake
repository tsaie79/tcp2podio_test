file(REMOVE_RECURSE
  "libJANA.a"
  "libJANA.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang C CXX)
  include(CMakeFiles/jana2_static_lib.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()

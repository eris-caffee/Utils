FILE(REMOVE_RECURSE
  "CMakeFiles/test.dir/src/test.cpp.obj"
  "test.pdb"
  "test.exe"
  "test.exe.manifest"
  "libtest.dll.a"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang CXX)
  INCLUDE(CMakeFiles/test.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)

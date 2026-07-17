./script/setup.sh

cmake --build build --target tests --parallel

ctest --test-dir build --output-on-failure

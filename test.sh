git clone --depth 1 https://github.com/boostorg/cmake.git .boost-cmake

cmake -S . -B build \
	-DBUILD_TESTING=ON \
	-DCMAKE_MODULE_PATH="$PWD/.boost-cmake/include"

cmake --build build --target tests --parallel

ctest --test-dir build --output-on-failure

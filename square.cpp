emcc square.cpp -o square.js -s EXPORTED_FUNCTIONS="['_square']" -s EXTRA_EXPORTED_RUNTIME_METHODS='["ccall"]'

## Choosing Array Type

To choose the array type during the build process, follow the steps below:

### Make build

For float array type:

make DEFINES="-DUSE_FLOAT"
./sin_sum

### CMake build

For double array type:

make
./sin_sum

### Output Comparison

- **Float**: Sum of sin values (single precision)
- **Double**: Sum of sin values (double precision)
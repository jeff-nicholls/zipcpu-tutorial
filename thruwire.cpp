/* thruwire.cpp
   Jeff Nicholls
   2024
*/

#include <stdio.h>
#include <stdlib.h>

#include "obj_dir/Vthruwire.h"
#include "verilated.h"

int main(int argc, char **argv) {
    // Call commandArgs first
    Verilated::commandArgs(argc, argv);

    // Instantiate our design
    Vthruwire *tb = new Vthruwire;

    // Run design through 20 timesteps
    for(int k = 0; k < 20; k++) {
        // Set switch input to LSB of our step
        tb->SW = k & 1;
        tb->eval();

        // Print results
        printf("k = %2d, ", k);
        printf("SW = %2d, ", tb->SW);
        printf("LED = %2d\n", tb->LED);

    }
}

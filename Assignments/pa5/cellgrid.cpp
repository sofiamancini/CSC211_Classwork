#include "cellgrid.h"
#include <iostream>
#include <fstream>
using namespace std;

// reads a file containing 1's and 0's and the dimesnsions to expect and
// creates a Cellgrid object
Cellgrid::Cellgrid(const char *fname, int m, int n) {
    // assign row and col counters
    rows = m;
    cols = n;

    // create the grid on the heap, this will have to be deallocated later in
    // the destructor
    grid = new bool[rows*cols];
    visited = new bool[rows*cols];

    // initialize all cells as unvisited
    for (int i = 0; i < rows*cols; i++) {
        visited[i] = false;
    }

    // create a file reader stream to read data from a file
    ifstream infile;

    // open a stream to the given file
    infile.open(fname);

    // we are using row-major order in order to store this grid in 1D
    // instead of accessing grid like grid[a][b], we instead do:
    // grid[(a * number of columns) + b]
    for(int i = 0; i < rows; i++) {
        // calculate "(a * number of columns)" from above
        // in order to save some unnecessary computation
        int base = i * cols;
        for(int offset = 0; offset < cols; offset++) {
            // read data from filestream and store it in grid
            infile >> grid[base + offset];
        }
    }

    // close the filestream once we are done with it
    infile.close();
}

// destruct object where not implicit to the program
Cellgrid::~Cellgrid() {
    // since we allocated memory on the heap, we must deallocate that memory
    delete[] grid;
}

// this is the function call which will be made by the autograder to test
// your implementation for problem 1. (row, col) is the "start point" for
// counting the cells, conn is the type of connection to consider (4 or 8).
int Cellgrid::countCells(int row, int col, int conn) {
    // TODO:
    // implement solution for problem 1.
    if (row < 1 || col < 1 || row > rows || col > cols) {
        return 0;
    }

    for (int i = 0; i < rows*cols; i++) {
        visited[i] = false;
    }
    // this is where your private helper method which does the
    // backtracking should be called

    
    // this will prevent a compiler error but should be changed
    // to return the cell count you have found
    return countCellsHelper(row, col, conn);
}

// this is the funciton call which will be made by the autograder to test
// your implementation for problem 2. conn is the type of connection
// to consider (4 or 8).
int Cellgrid::countBlobs(int conn) {
    //TODO:
    // implement solution for problem 2
    int blobCount = 0;
    for (int i = 0; i < rows*cols; i++) {
        visited[i] = false;
    }

    
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            if (!visited[(i - 1) * cols + (j - 1)] && grid[(i - 1) * cols + (j - 1)] == 1) {
                if (countBlobsHelper(i, j, conn) > 0) {
                    blobCount++;
                }
            }
        }
    }
    return blobCount;
}

// this function prints your cellgrid in 2D format without trailing
// whitespace. Use this function to aid in debugging if you wish
void Cellgrid::print() {
    for(int i = 0; i < rows; i++) {
        int base = i * cols;
        std::cout << grid[base];
        for(int offset = 1; offset < cols; offset++) {
            std::cout << ' ' << grid[base + offset];
        }
        std::cout << std::endl;
    }
}

// this is the helper function which will be called by countCells
// and countBlobs to do the backtracking
int Cellgrid::countCellsHelper(int row, int col, int conn) {

    // Base case: Check if the current cell is out of bounds or not of the same type
    if (row < 1 || col < 1 || row > rows || col > cols || visited[(row - 1) * cols + (col - 1)] || grid[(row - 1) * cols + (col - 1)] == 0) {
        return 0;
    }

    // Mark the current cell as visited
    visited[(row - 1) * cols + (col - 1)] = true;

    // Initialize count to 1 (counting the current cell)
    int count = 1;

    // Recursive exploration of neighboring cells based on connection type
    for (int dr = -1; dr <= 1; dr++) {
        for (int dc = -1; dc <= 1; dc++) {
            // Skip the current cell itself
            if (dr == 0 && dc == 0) continue;

            // If using 4-connection, skip diagonals
            if (conn == 4 && dr * dc != 0) continue;

            // Recursively count cells in neighboring positions
            count += countCellsHelper(row + dr, col + dc, conn);
        }
    }

    // Return the total count of cells of the same type
    return count;
}

// this is the helper function which will be called by countBlobs
// to do the backtracking
int Cellgrid::countBlobsHelper(int row, int col, int conn) {
    if (row < 1 || col < 1 || row > rows || col > cols || visited[(row - 1) * cols + (col - 1)] || grid[(row - 1) * cols + (col - 1)] == 0) {
        return 0;
    }

    visited[(row - 1) * cols + (col - 1)] = true;

    int count = 1;

    for (int dr = -1; dr <= 1; dr++) {
        for (int dc = -1; dc <= 1; dc++) {
            // Skip the current cell itself
            if (dr == 0 && dc == 0) continue;

            // Skip diagonals if using 4-connection
            if (conn == 4 && dr * dc != 0) continue;

            // Check bounds before making recursive call
            if (row + dr >= 1 && row + dr <= rows && col + dc >= 1 && col + dc <= cols) {
                count += countBlobsHelper(row + dr, col + dc, conn);
            }
        }
    }

    return count;
}
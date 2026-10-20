#include <vector>
using std::vector;
#include <iostream>
using std::cout;

vector<vector<bool> > world = {
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, /* world[0] */
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, /* world[1] */
  // ^ (world[1])[2]
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, /* ... */
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
};

int main(int argc, char *argv[])
{
	vector<vector<bool>> future(world); /* make future a copy of world. */
	/* NOTE: the vector 'world' above corresponds to the contents
	 * of ../res/tests/0.  TODO: apply the rules to the vector,
	 * write the result to standard output, and compare with the
	 * contents of ../tests/1. */

	 // TODO: 1) Read an integer (let’s call it n) from the command line
	//  int n;
	//  std::cin >> n;
	//  cout << n;
	 // Apply the Game of Life rules n times to the hard-coded grid, and
	 // print the result (as . and O characters) to stdout (e.g. using cout).
	world = future;
	cout << world;
	return 0;
}

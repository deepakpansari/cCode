#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <string.h>

// I don't recommend using the std namespace in production code.
// For ease of reading here.
using namespace std;

// You could also take an existing vector as a parameter.
vector<string> split(string str, char delimiter) {
  vector<string> internal;
  stringstream ss(str); // Turn the string into a stream.
  string tok;
  
  while(getline(ss, tok, delimiter)) {
    internal.push_back(tok);
  }
  
  return internal;
}


int call_charge(int duration)
{
    int cost; 
    if(duration < 300)
    cost = duration*3;
    else if(duration>=300)
    {
        if(duration%60==0)
        cost = (duration/60)*150;
        else
        cost = (duration/60 + 1)*150;
    }
    return cost;
}


int main(int argc, char **argv) {
  string myCSV = "00:11:12,233-456-765"; //string of data
  
  vector<string> sep = split(myCSV, ',');//breaking into time and number
  vector<string> sep_time = split(sep[0], ':');
  int duration = atoi(sep_time[0].c_str())*3600 + atoi(sep_time[1].c_str())*60 +atoi(sep_time[2].c_str());
int charge = call_charge(duration);
  // If using C++11 (which I recommend)
  /* for(string t : sep)
   *  cout << t << endl;
   */
cout << charge <<endl;

}

#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;



/**
*  Load string into array for each line
* 
*/  
vector<string> splitStringNewline(string const &str)
{
    auto result = vector<string>{};
    auto ss = stringstream{str};
    
    for (string sLine; getline(ss, sLine, '\n');)
        result.push_back(sLine);
    
    return result;
}


int main()
{
    vector<int> targetCubeRgb{     12,      13,    14};
    vector<string> targetColours{"red", "green", "blue"};
    
    string sInput = "Game 1: 4 blue, 4 red, 16 green; 14 green, 5 red; 1 blue, 3 red, 5 green\nGame 2: 3 green, 8 red, 1 blue; 5 green, 6 blue; 4 green, 4 blue, 10 red; 2 green, 6 red, 4 blue; 8 red, 11 blue, 4 green; 10 red, 10 blue\nGame 3: 7 blue, 2 green; 9 blue, 2 green, 4 red; 5 blue, 2 red; 1 red, 1 green, 10 blue; 1 green, 5 blue, 1 red\nGame 4: 5 green, 4 blue, 15 red; 1 green, 5 blue, 2 red; 14 red, 3 blue, 2 green; 6 red, 12 green, 1 blue; 1 blue, 6 green, 16 red\nGame 5: 1 red, 1 blue, 4 green; 3 blue, 2 green, 4 red; 4 blue, 1 red, 2 green; 1 green, 3 red, 4 blue; 1 green, 2 blue\nGame 6: 17 red, 2 blue, 18 green; 4 green, 10 blue, 14 red; 10 blue, 15 green, 14 red; 6 blue, 9 red; 5 blue, 7 red, 10 green\nGame 7: 2 green, 3 red, 14 blue; 3 red, 2 green, 6 blue; 3 blue, 1 red; 10 blue, 1 green; 3 green, 17 blue\nGame 8: 9 blue, 13 green, 2 red; 3 red, 10 green, 18 blue; 8 blue, 8 green\nGame 9: 11 red, 2 blue; 1 blue, 9 green, 13 red; 2 blue, 17 red, 6 green\nGame 10: 13 green, 8 red, 8 blue; 10 red, 5 blue, 9 green; 3 blue, 2 green, 1 red; 5 blue, 1 red, 10 green; 10 red, 8 blue; 8 blue, 1 green\nGame 11: 14 red, 19 green; 2 blue, 6 red, 17 green; 12 green, 9 red, 6 blue\nGame 12: 19 green, 3 blue, 10 red; 8 red, 2 blue, 19 green; 3 blue, 6 red, 2 green; 8 red, 5 blue; 1 blue, 15 green; 8 green, 7 red\nGame 13: 2 red, 8 green, 1 blue; 4 green, 3 blue, 2 red; 4 red, 1 green; 1 red, 1 green; 2 green, 1 blue\nGame 14: 4 blue, 2 green; 2 blue, 6 red, 2 green; 6 red, 16 blue; 5 blue, 1 green, 5 red\nGame 15: 2 red, 4 green, 4 blue; 5 red; 5 green, 2 red, 2 blue; 5 green, 1 blue, 7 red\nGame 16: 4 blue, 7 red, 1 green; 8 red, 5 blue; 9 blue, 6 red, 3 green; 4 red, 3 green, 7 blue; 3 green, 1 blue\nGame 17: 1 green, 15 red; 8 red, 4 blue, 7 green; 8 green, 11 blue; 4 red, 1 green, 11 blue; 11 red; 1 green, 3 red\nGame 18: 2 blue, 8 green, 6 red; 6 green, 5 blue, 15 red; 13 red, 15 green, 5 blue\nGame 19: 8 blue, 8 red, 2 green; 10 red, 2 blue; 6 red, 4 blue, 3 green; 7 blue, 2 green, 6 red\nGame 20: 8 blue, 4 green, 13 red; 14 green, 2 blue, 4 red; 1 green, 11 red, 2 blue; 8 blue, 14 red, 1 green\nGame 21: 4 red, 14 green, 2 blue; 8 green, 2 blue, 1 red; 2 blue, 1 green, 1 red\nGame 22: 3 blue, 2 red, 5 green; 2 blue, 3 green, 1 red; 4 green, 4 blue, 7 red; 1 green, 1 red\nGame 23: 3 green, 9 red, 15 blue; 8 red, 4 green; 4 green, 13 blue, 6 red\nGame 24: 1 green, 2 blue, 1 red; 3 blue, 2 green; 2 blue, 4 red, 7 green; 2 red, 8 green, 2 blue\nGame 25: 4 blue, 3 green, 5 red; 4 red, 3 blue; 3 green, 7 red, 3 blue; 5 green, 12 red\nGame 26: 9 red, 1 green, 3 blue; 1 blue, 13 red; 3 blue, 5 red; 14 red, 1 green\nGame 27: 1 blue, 7 green, 3 red; 2 red; 1 green, 1 red\nGame 28: 13 red, 1 blue, 9 green; 4 red, 10 green; 1 blue, 12 red, 6 green; 6 green, 3 red, 1 blue; 2 green, 16 red, 1 blue; 12 green, 16 red\nGame 29: 1 red, 9 blue; 15 blue, 3 green; 2 green, 1 red, 9 blue\nGame 30: 6 blue; 1 green, 4 blue, 2 red; 2 blue, 2 red\nGame 31: 1 blue, 2 red, 3 green; 3 blue, 3 red, 2 green; 3 red, 2 green; 2 blue, 1 green, 4 red; 1 red, 1 green, 1 blue; 1 green, 3 red, 2 blue\nGame 32: 1 green, 6 blue; 1 blue, 2 red, 3 green; 9 blue; 2 green, 1 red, 6 blue; 6 blue\nGame 33: 3 blue, 3 green; 2 red, 4 blue, 5 green; 2 red, 4 blue, 3 green; 3 green, 5 red, 8 blue; 2 green, 2 blue, 3 red; 11 blue, 6 green, 4 red\nGame 34: 11 green, 14 red, 4 blue; 18 red, 10 green, 2 blue; 3 green, 11 blue, 3 red; 10 blue, 6 red, 10 green\nGame 35: 4 green, 2 red, 4 blue; 3 green, 2 blue; 4 green, 2 red; 1 red, 4 green, 6 blue; 6 green\nGame 36: 11 green, 15 red, 6 blue; 10 red, 7 blue, 2 green; 7 red, 7 green, 10 blue; 6 red, 14 green, 2 blue; 6 blue, 13 red, 12 green\nGame 37: 2 green, 9 red, 3 blue; 2 blue, 5 green, 4 red; 3 green, 3 red; 4 green, 2 blue, 12 red; 3 red, 6 green\nGame 38: 8 red, 4 green, 6 blue; 1 blue, 6 red, 6 green; 2 red, 5 blue, 6 green; 9 blue, 7 red, 7 green; 1 green, 9 red, 5 blue\nGame 39: 1 green, 9 blue, 8 red; 9 blue; 8 red, 9 blue, 1 green; 2 blue, 1 red, 1 green\nGame 40: 7 green, 13 blue; 11 green, 17 blue; 16 blue, 10 green; 7 green, 1 blue, 2 red; 5 blue\nGame 41: 6 red, 2 blue, 7 green; 6 green, 4 blue; 2 red, 1 green, 3 blue; 6 red, 2 blue, 5 green\nGame 42: 9 green, 3 blue; 1 red, 7 green, 6 blue; 3 red, 6 green, 10 blue; 1 blue, 8 green\nGame 43: 5 green, 1 blue, 2 red; 4 blue, 2 red, 8 green; 4 green, 1 red, 4 blue; 2 blue, 9 green\nGame 44: 9 red, 7 green; 7 blue, 9 green, 5 red; 4 green, 19 red, 16 blue; 5 green, 13 red, 6 blue; 3 green, 4 blue, 7 red\nGame 45: 17 blue, 2 red, 3 green; 17 green, 9 blue, 1 red; 12 blue, 12 green; 1 blue, 1 red, 16 green\nGame 46: 3 blue, 4 green, 1 red; 7 green, 1 red; 4 blue; 5 green, 1 red, 3 blue\nGame 47: 6 red, 3 blue, 5 green; 2 green, 12 red; 6 blue, 2 green, 14 red; 5 blue, 5 red, 6 green; 8 red, 9 blue, 4 green; 17 red, 7 blue, 7 green\nGame 48: 8 red, 18 blue, 6 green; 5 red, 2 blue, 1 green; 1 green, 12 red, 8 blue\nGame 49: 2 red, 4 blue, 11 green; 10 green, 7 blue, 11 red; 3 red, 6 blue, 12 green; 7 red, 5 green, 6 blue\nGame 50: 2 blue, 3 green, 3 red; 3 blue, 14 red; 3 red, 1 blue; 1 green; 11 red, 1 green, 2 blue\nGame 51: 9 green, 2 red, 7 blue; 13 green, 3 red, 4 blue; 4 red, 12 green, 8 blue; 1 blue, 9 green, 4 red; 1 red, 7 blue, 4 green; 12 green, 9 blue, 4 red\nGame 52: 10 red; 6 red, 3 blue, 3 green; 5 blue, 11 red; 3 green, 5 red\nGame 53: 11 blue, 3 green; 17 blue, 1 green, 8 red; 2 blue, 3 green, 2 red; 7 blue, 10 red, 3 green\nGame 54: 11 green, 5 red; 8 green, 10 blue, 2 red; 2 red, 8 green, 1 blue; 11 blue, 2 red, 17 green\nGame 55: 4 green, 7 blue, 12 red; 8 red, 5 blue, 1 green; 1 blue, 11 red, 8 green; 12 red, 2 blue, 3 green; 7 green, 7 red\nGame 56: 2 red, 6 blue, 6 green; 7 green, 1 red; 1 blue, 5 red, 5 green; 8 green, 8 red, 5 blue; 10 red, 1 blue, 5 green; 7 blue, 1 red, 8 green\nGame 57: 14 red, 6 green, 3 blue; 11 red, 1 blue, 7 green; 19 red, 4 blue, 6 green; 2 blue, 17 red, 5 green\nGame 58: 5 red, 11 blue; 13 green, 2 red, 2 blue; 6 green, 1 red, 1 blue\nGame 59: 7 red, 8 green, 7 blue; 6 green, 12 red, 20 blue; 1 red, 10 blue, 1 green; 11 red, 5 green, 18 blue; 3 green, 13 blue; 12 red, 4 green\nGame 60: 6 blue, 10 red; 1 blue, 9 red, 9 green; 5 red, 2 blue, 2 green; 4 blue, 8 green, 12 red\nGame 61: 12 red, 1 green, 7 blue; 19 red, 1 green, 12 blue; 9 blue, 17 red, 1 green; 3 blue, 1 green, 13 red; 8 blue, 1 green, 10 red\nGame 62: 3 red, 12 blue, 20 green; 4 green, 4 blue, 4 red; 6 green, 2 red, 4 blue; 10 green, 1 blue, 4 red\nGame 63: 3 blue, 7 green, 12 red; 13 red, 2 blue, 2 green; 7 green, 2 blue; 2 blue, 17 red, 15 green\nGame 64: 1 green, 10 red; 5 red, 17 green, 2 blue; 2 blue, 4 red, 1 green; 5 blue, 5 red, 3 green\nGame 65: 6 red, 2 green, 2 blue; 4 blue, 12 red; 18 red, 3 blue; 2 green, 17 red, 8 blue; 1 green, 8 blue, 9 red\nGame 66: 15 blue, 5 green; 4 red, 9 blue; 6 green, 15 blue, 1 red; 8 green, 8 red, 6 blue; 17 blue, 4 red, 6 green; 14 blue, 8 green, 7 red\nGame 67: 16 red, 8 green, 1 blue; 9 red, 8 green; 10 red, 2 green, 2 blue; 11 blue, 6 green, 15 red; 4 green, 3 blue, 10 red\nGame 68: 4 blue, 1 green, 10 red; 2 green, 2 red; 6 red; 2 blue, 1 green; 2 blue, 8 red; 4 red, 1 green\nGame 69: 4 red, 5 blue, 4 green; 4 red, 1 blue; 1 green, 2 red, 3 blue\nGame 70: 13 blue, 2 red, 10 green; 11 blue, 17 green; 6 red, 10 blue; 4 red, 13 green, 2 blue; 9 green, 13 blue, 3 red\nGame 71: 1 green, 8 red, 5 blue; 1 green, 5 red, 3 blue; 7 red, 2 green, 7 blue; 1 blue, 2 green, 17 red; 10 red, 1 green, 2 blue; 5 blue, 16 red, 1 green\nGame 72: 19 red, 2 green; 3 blue, 19 red, 7 green; 3 blue, 1 green, 15 red; 9 green, 2 blue, 16 red; 1 blue, 8 green, 1 red\nGame 73: 1 blue, 2 green; 8 blue, 1 red, 1 green; 5 blue, 6 green\nGame 74: 12 red; 5 green, 12 red; 4 red, 6 green; 8 red, 5 green; 1 blue, 10 red, 7 green\nGame 75: 3 green, 1 blue; 10 green, 8 red; 8 blue, 11 green; 6 blue, 2 red, 6 green\nGame 76: 9 green, 14 red; 2 red, 4 green, 18 blue; 7 blue, 6 green, 2 red; 6 red, 13 blue, 10 green; 4 red, 2 blue, 1 green; 16 blue, 12 green, 12 red\nGame 77: 4 red, 2 blue; 6 blue, 1 red, 4 green; 3 red, 3 green, 8 blue; 7 red, 2 blue, 4 green; 4 red, 6 blue\nGame 78: 5 green, 4 blue; 1 red, 4 green, 9 blue; 3 blue, 8 green\nGame 79: 12 green, 1 blue, 6 red; 10 green, 2 blue, 1 red; 3 blue, 2 red; 11 green, 5 red\nGame 80: 3 green, 3 red; 1 green, 3 blue, 2 red; 15 green, 2 red, 4 blue; 9 green, 3 blue, 8 red; 3 green, 2 red; 3 green, 5 red\nGame 81: 9 blue, 9 green; 2 red, 3 green, 16 blue; 12 green, 16 blue, 4 red; 1 blue, 2 red, 6 green; 10 green, 4 red, 17 blue; 13 blue, 6 green, 4 red\nGame 82: 1 blue, 16 green, 10 red; 15 green, 11 red, 1 blue; 1 blue, 8 red, 8 green\nGame 83: 6 blue, 5 green; 2 green, 12 blue; 1 red, 2 green, 6 blue\nGame 84: 3 red, 17 blue; 2 red, 10 green, 10 blue; 14 blue, 1 green, 9 red; 8 green, 11 blue\nGame 85: 3 blue, 5 green, 14 red; 2 blue, 3 red; 2 green, 9 red\nGame 86: 7 red, 1 green; 14 blue, 8 green; 3 blue, 10 red, 7 green; 3 red, 8 green\nGame 87: 9 blue, 1 green; 2 green, 8 blue, 18 red; 10 red, 3 blue, 2 green; 2 green, 4 red; 4 green, 9 red, 9 blue; 14 red, 5 blue, 2 green\nGame 88: 3 red, 16 blue, 1 green; 13 blue, 3 red, 4 green; 3 green, 1 blue, 2 red; 4 green, 1 blue, 3 red\nGame 89: 12 blue, 5 green, 14 red; 7 red, 4 green, 10 blue; 7 red, 11 blue, 3 green; 5 green, 7 blue, 4 red\nGame 90: 8 green, 3 blue, 1 red; 1 red, 2 blue, 13 green; 2 blue, 14 green, 3 red; 7 green, 2 red, 5 blue\nGame 91: 3 green, 3 red, 9 blue; 5 green, 1 red; 1 green, 1 red, 3 blue\nGame 92: 2 blue, 1 red, 4 green; 7 blue, 6 green; 7 red, 12 green, 3 blue; 7 red, 8 green, 4 blue; 14 green, 9 blue; 15 green, 3 red, 3 blue\nGame 93: 8 blue, 4 green, 1 red; 15 green; 9 blue, 3 green\nGame 94: 12 green, 17 blue, 11 red; 3 green, 1 red, 19 blue; 17 blue, 10 green, 11 red\nGame 95: 13 green, 1 red, 8 blue; 12 blue, 10 green, 4 red; 13 red, 5 green; 11 red, 12 blue, 6 green\nGame 96: 13 blue, 11 red, 13 green; 12 red, 3 blue, 4 green; 14 green, 9 red, 15 blue\nGame 97: 9 red, 9 green, 11 blue; 11 green, 8 red, 9 blue; 5 blue, 6 red, 9 green; 3 green, 8 red, 4 blue\nGame 98: 5 blue, 6 red; 8 red; 1 green, 9 blue, 5 red\nGame 99: 4 green, 3 red; 3 green; 1 red, 2 green; 2 red, 1 green, 2 blue; 2 red, 4 green; 1 green, 2 blue, 1 red\nGame 100: 3 blue, 3 red, 6 green; 7 red, 2 green, 16 blue; 14 green, 9 red, 9 blue; 8 red, 10 green, 9 blue; 6 blue, 11 red";
    vector<string> stringArray = splitStringNewline(sInput);
    
    long total = 0;
    
    //for every game
    for(const string &line :  stringArray)
    {   
         vector<int> currentRgb {0,0,0};
        
        //get input before ':' drop 'Game ' and get Id
        int colonPos = line.find(':');
        string gameStr = line.substr(0, colonPos);
        
        //loop through string and get array of strings between , ;
        string s = line.substr(colonPos + 1, line.length());
        while (true) 
        {
            int pos = s.find(';');
            string hand = s.substr(0, pos);
            while (true) 
            {
                int pos = hand.find(',');
                string play = hand.substr(0, pos);
                
                int numCubes = stoi(play.substr(0, play.find(' ') - 1));
                
                string colourStr = play.substr(play.find_last_of(' ')+1, play.length());
                
                int index = 0;
                for(const string &checkColour: targetColours)
                {
                    if(checkColour == colourStr)
                    {
                        if(currentRgb[index] < numCubes)
                            currentRgb[index] = numCubes;
                    }
                    index++;
                }
                if(pos == std::string::npos)
                    break;
                hand.erase(0, pos + 1);   
            }
                
            if(pos == std::string::npos )
                break;
            
            s.erase(0, pos + 1);
        }  
            
        long gameId = currentRgb[0];
        for(int i = 1; i < currentRgb.size(); i++)
            gameId = gameId * currentRgb[i];
            
        total += gameId;
    }
    
    cout << "Sum of IDs: " << total;
    return 0;
}

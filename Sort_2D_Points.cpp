/*
Sort 2d points 

Write a program which will sort the list of 2d points based on distance from the origin 

1.There should be a command-line interface which will accept file path as input 
2.There should be a command-line interface which will accept a path to write the output file 
3.You have to decide the schema of the text file in which 2d points are stored;; 
4.You have to write a list in a file and stored it at provided output path 
5.Output file should contain a list of point with distance form origin 
*/

#include<iostream>
#include<fstream>
#include<sstream>
#include<cmath>
#include<map>
using namespace std;

int main()
{
    string iFile;
    string oFile;
    fstream ifStream;
    fstream ofStream;
    double x1 = 0.0;
    double y1 = 0.0;
    double x2, y2;
    double distance;

    map<double, string> mp;

    cout << "Enter the file you want to read " << endl;
    cin >> iFile;
    cout << endl;

    cout << "Enter the file you want to write " << endl;
    cin >> oFile;

    //Read file 
     ifStream.open(iFile, ios::in);
         string line;
         string point;
         double dist = 0;
         double x;
         double y;

    if(ifStream.is_open())
    {
        while(getline(ifStream, line)){
            point.clear();
            for(int i=0;i<=line.length();i++){
                if(line[i]==' '){
                    x2 = stod(point);
                    point.clear();
                }else if(i==line.length()){
                    y2 = stod(point);
                    point.clear();
                }
                else{
                    point += line[i];
                }
            }
            x=x2-x1;
            y=y2-y1;
            distance = sqrt(pow(x,2) + pow(y,2));
            mp[distance] = line;
        } 
        
        ifStream.close();
     }

    //Write sorted data
    ofStream.open(oFile, ios::out);
    if(ofStream.is_open()){
        map<double, string>::iterator itr;
        ofStream << "2-D Point" <<"\t\t\t"<< "Distance" << endl<<endl;
        for(itr=mp.begin(); itr!=mp.end(); ++itr){
            ofStream << itr->second <<"\t\t\t"<<itr->first<<endl;
        }
        ofStream.close();
    } 
   return 0;
}

//
//  Helping.cpp
//  CPP132
//
//  Created by Lucas Dahl on 3/10/21.
//

//#include <iostream>
//#include <vector>
//#include <fstream>
//
//using namespace std;
//
//// Function Prototyping
//bool pointInside(int, int, int, int, int, int);
//
//int main()
//{
//    string dataFileName = "";
//    ifstream dataFile;
//    cout << "Please type in the name of the data file --> ";
//    cin >> dataFileName;
//
//    dataFile.open(dataFileName);
//    if (!(dataFile))
//    {
//        cout << "There was an error opening the file." << endl;
//        return -1;
//    }
//
//
//    int x1 = 0, x2 = 0, y1 = 0, y2 = 0;
//    string color = "";
//
//    vector<int> xvalues;
//    vector<int> yvalues;
//    vector<string> colors;
///*
//    while (dataFile >> x1 >> y1 >> x2 >> y2 >> color)
//    {
//        xvalues.push_back(x1);
//        yvalues.push_back(y1);
//        xvalues.push_back(x2);
//        yvalues.push_back(y2);
//        colors.push_back(color);
//    }
//    */
//    int pixelX = 0;
//    int pixelY = 0;
//
//    while (dataFile >> x1 >> y1 >> x2 >> y2 >> color)
//    {
//        while (pixelX >= 0 && pixelY >= 0)
//        {
//            cout << "What is the target x coordinate?" << endl;
//            cout << "-->";
//            cin >> pixelX;
//            if (pixelX < 0) { cout << "Program has been completed!" << endl; }
//            else
//            {
//                cout << "What is the target y coordinate?" << endl;
//                cout << "-->";
//                cin >> pixelY;
//            }
//            if (pixelY < 0) { cout << "Program has been completed!" << endl; }
//
//            if (pointInside(x1, y1, x2, y2, pixelX, pixelY) == true)
//            {
//                cout << "The color of that pixel will be " << color << endl;
//            }
//
//        }
//    }
//    dataFile.close();
//}
//
//// Function Definitions
//bool pointInside(int x1, int y1, int x2, int y2, int pixelX, int pixelY)
//{
//    if (pixelX >= x1 && pixelX <= x2 && pixelY >= y1 && pixelY <= y2)
//    {
//         return true;
//    }
//    return false;
//}

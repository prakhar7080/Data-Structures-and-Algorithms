#include<iostream>
#include<fstream>
#include<vector>
using namespace std;
int main(){

    ////First we have to open the file in reading mode or writing mode
    ////Then we can perform the operation (reading,writting)

    //Open in writing mode

    ofstream fout;
    fout.open("zoom.txt");

    // Now writing something

    fout<<"Hello India";
    fout.close(); //Release

    //Open in reading mode

    ifstream fin;
    fin.open("zoom.txt");

    //Defining a character to read all character one by one and print them

    char c;
    c = fin.get();
    
    //Printing

    while(!(fin.eof())){
        cout<<c;
        c = fin.get();
    }
    fin.close(); //Release

    //Take a array(Vector) input from user and write into file before and after sorting
    //Array input
    vector<int>arr(5);
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    //Opening in writing mode

    ofstream fout;
    fout.open("zero.txt");

    //Enter original array in file
    fout<<"Original data\n";
    for(int i=0;i<5;i++){
        fout<<arr[i]<<" ";
    }

    //Insertion Sort

    for(int i=1;i<5;i++){
        int num=arr[i];
        int j=i-1;
        while(j>=0&&arr[j]>num){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=num;
    }

    //Enter sorted array in file

    fout<<"\nSorted data\n";
    for(int i=0;i<5;i++){
        fout<<arr[i]<<" ";
    }
    fout.close(); //Release

    //Open a file write mode and write something then open file in reading mode and print data on console

    //Opening in writing mode
    ofstream fout;
    fout.open("z1.txt");
    fout<<"Hello India\n";
    fout<<"Hello Prakhar\n";
    fout<<"Hello Bhai\n";
    fout.close(); //Release

    //Opening in reading mode
    ifstream fin;
    fin.open("z1.txt");
    string line;  
    while(getline(fin,line)){
        cout<<line<<endl;
    }
    fin.close(); //Release
}

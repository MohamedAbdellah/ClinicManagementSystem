#include<iostream>
#include <stdio.h>
#include <fstream>
#include"patient.hpp"
#include"dataStr.hpp"
using namespace std;
 int turn;
 int id_no;
 int preestimated_time;
 int postestimated_time;
 int cunt;

 int main(){


		//std::ofstream fs(path);
string status;
preestimated_time=9;
postestimated_time=0;
turn=1;
id_no=1;
cunt=1;
List l1;

int flag;
CreateList(&l1);


//std::ofstream fs;
//fs.open (path, std::ofstream::out | std::ofstream::app);

while(1){
	cout<<"Press 1 to add patient or Press 0 to see all patient  or 2 to serve patient or 3 to save data \n";
    cin>>flag;

    if (flag==3){
    	storePat(&l1);
    }
    if(flag==1){
    	AddPatient (&l1);
    cout<<"List Size:"<<l1.size<<"\n";
    }

    else if(flag==0) {
    showList(&l1);
         }

    else if(flag==2) {

    	cout<<" Select Patient Done or Canceled  \n";
    	cin>>status;
    	if(status=="Done"){
    	nextPat(&l1,1);
    	showList(&l1);
    	}
    	if(status=="Canceled"){
    	    	nextPat(&l1,2);
    	    	showList(&l1);
    	}
    else{
        }
    }

 }

return 0;
}

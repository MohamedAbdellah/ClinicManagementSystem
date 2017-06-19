
#ifndef DATASTR_HPP_
#define DATASTR_HPP_
#include<iostream>
#include <fstream>
#include<string>
using namespace std;

extern int turn;
extern int preestimated_time;
extern int postestimated_time;
extern int id_no;
extern int cunt;


typedef enum returnvalue{
	PatientAdded=0,
	PatientRem,
	SUCC,
	FAIL,
	PatientServed
}ReturnValue;

typedef enum Pat{
	Cancel=0,
	Done
}PatientStatus;


typedef struct listnode{

	struct listnode * next;

	string name;
	int age;
	string gender;
	int ID_NO;
	int Turn_NO;
	int PreEst_Time;
	int cunt;
	int PostEst_Time;
	string patS;

}ListNode;

typedef struct list{

		ListNode * top;
		int size;
}List;


ReturnValue CreateList (List * l);
ReturnValue AddPatient (List *l);
ReturnValue showList(List *l);
ReturnValue nextPat(List *l,int ps);
ReturnValue storePat(List *l);
#endif /* DATASTR_HPP_ */

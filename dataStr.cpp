
#include"patient.hpp"
#include"dataStr.hpp"
#include<iostream>

const char *path="/home/chrollo/data.txt";
	 		std::ofstream fs(path);

ReturnValue CreateList (List * l){
	l->size=0;
	l->top=NULL;

	return SUCC;
}

ReturnValue AddPatient 	(List *l){

	//////
	    	  std::string file;
	    			    std::cout << "enter the file name ";
	    			   cin>>file;
	    		ofstream fout(file.c_str(), std::ios::out | std::ios::app);
	    	//////

	 ListNode *ln=(ListNode *)new(ListNode);
	    ln->next=l->top;
	    l->top=ln;
///////////////////////////////

	    l->size++;
	    ln->ID_NO=id_no;
        ln->Turn_NO=turn;
        ln->PreEst_Time=preestimated_time;
        ln->PostEst_Time=postestimated_time;
	    cout<<"Enter the patiant name \n";
	    cin>>ln->name;
	    cout<<"Enter the patient age \n";
	    cin>>ln->age;
	    cout<<"Enter the patient Gender \n";
	    cin>>ln->gender;
	    ln->cunt=cunt;
	    fout<<"Patient name : "<<ln->name<<"\n";
	    fout<<"Patient age : "<<ln->age<<"\n";
	    fout<<"Patient ID_NO : "<<ln->ID_NO<<"\n";
	    fout<<"Gender : "<<ln->gender<<"\n";
	    	fout.close();
	    cunt++;
	    id_no++;
	    turn++;
	    postestimated_time=postestimated_time+5;
	    if(postestimated_time==60){
	    	postestimated_time=0;
	    	 preestimated_time=0;
	    }


	     cout<<"Patient name : "<<ln->name<<"\n";
	     cout<<"Patient ID_NO : "<<ln->ID_NO<<"\n";
	     cout<<"Patient Turn_NO : "<<ln->Turn_NO<<"\n";
	     cout<<"Patient Estimated_Time  "<<ln->PreEst_Time<<":"<<ln->PostEst_Time<<"-";
	     cout<<ln->PreEst_Time<<":"<<(ln->PostEst_Time)+5<<"\n";
	     cout<<"   ========================================  "<<"\n";


	    return SUCC;
}


ReturnValue showList(List *l){
ListNode *temp;
temp=l->top;
//int cunt=l->size;
while(temp){

 cout<<"Patient name : "<<temp->name<<"\n";
 cout<<"Patient ID_NO : "<<temp->ID_NO<<"\n";
 cout<<"Patient Turn_NO : "<<temp->Turn_NO<<"\n";
 cout<<"Patient Status : "<<temp->patS<<"\n";
 cout<<"Patient Estimated_Time  "<<temp->PreEst_Time<<":"<<temp->PostEst_Time<<"-";
 cout<<temp->PreEst_Time<<":"<<(temp->PostEst_Time)+5<<"\n";
 cout<<"   ========================================  "<<"\n";
 temp=temp->next;

}
 return SUCC;
}

ReturnValue nextPat(List *l,int ps){
static int p=1;
ListNode *temp;
temp=l->top;
while(temp){
while(p==(temp->Turn_NO)){
	if(ps==1)
	temp->patS="Done";
	else
		temp->patS="Canceled";
p++;
}
temp=temp->next;
}
return SUCC;
}
ReturnValue storePat(List *l){

	ListNode *temp1;
	temp1=l->top;
//	while(temp1){
	do{
fs.open (path, std::ofstream::out | std::ofstream::app);

	    	    fs<<"Patient name : "<<temp1->name<<"\n";
	    	    fs<<"Patient age : "<<temp1->age<<"\n";
	    	    fs<<"Patient gender : "<<temp1->gender<<"\n";
	    	    fs<<"Patient ID_NO : "<<temp1->ID_NO<<"\n";
	    	    fs<<"   ========================================  "<<"\n";

	            cout<<temp1<<"\n";
fs.close();

temp1=temp1->next;
	    	}while(temp1);

return SUCC;
}

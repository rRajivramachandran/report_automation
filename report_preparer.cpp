/*data.csv is the excel file with the details under the respective headings: S.no, name of event,
  club conducting event, day number, time of event, number of participants,media sponsors and winners*/
#include <bits/stdc++.h>
#include <stdlib.h>

using namespace std;
int main()
{
    string report_name,club_conduct,day_no,time,no_participate,med_spon,win_count,entire_report;
	ofstream f1;
	ifstream f2("data.csv");
	for(int i=1;i<=6;i++)
		getline(f2,report_name,',');
	getline(f2,report_name,'\n'); 
	while(f2.eof()!=1)
	{   
		getline(f2,report_name,',');
		if(f2.eof()!=1)
		{
    		entire_report="";
	    	getline(f2,report_name,',');
		    f1.open(report_name+".txt");
	    	getline(f2,club_conduct,',');
	        getline(f2,day_no,',');
	        getline(f2,time,',');
	        getline(f2,no_participate,',');
	        getline(f2,med_spon,',');
	        getline(f2,win_count,'\n');
	        entire_report="The "+report_name+" was conducted by the "+club_conduct+" club of NIT Trichy"+" on day "+day_no+" of festember at "+time+". The event had got "+no_participate+" entries. The media sponsor/sponsors for this event was/were "+med_spon+".";
	        if(win_count[0]=='1'||win_count[0]=='2'||win_count[0]=='3'||win_count[0]=='4'||win_count[0]=='5'||win_count[0]=='6'||win_count[0]=='7'||win_count[0]=='8'||win_count[0]=='9')
	        	entire_report=entire_report+" "+win_count+" participants had been selected to the next round.";
	        else
	        	entire_report=entire_report+" "+win_count+" was declared as the winner of the event. ";
	        entire_report=entire_report+"The event had garnered widespread participation from South Indian colleges.";
	        f1.write(entire_report.c_str(),sizeof(char)*entire_report.size());
	        f1.close();
	    }
	}
	f2.close();
	return 1;
}

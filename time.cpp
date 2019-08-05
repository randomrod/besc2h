#include<iostream>

using namespace std;

class time{
	int hh;
	int mm;
	int ss;
	
	public:
		void getdata();
		time();
		time(int ss);
		time(int hh, int mm, int ss);
		time add(time t1, time t2);
		bool isvalid();
		
};

void time::getdata(){
	cout<<"time:"<<hh<<":"<<mm<<":"<<ss<<endl;
	
}

time::time(){
	hh=0;
	mm=0;
	ss=0;
}

time::time(int h, int m, int s){
	hh=h;
	mm=m;
	ss=s;
	
}


time::time(int s){
	hh=s/3600;
	mm=s/60;
	ss=s;
}

time time::add(time t1, time t2){
	time t;
	t.ss=t1.ss+t2.ss;
	t.mm=t1.mm+t2.mm;
	t.hh=t1.hh+t2.hh;
	if(t.ss>=60){
		t.ss=t.ss%60;
		t.mm++;
	}
	if(t.mm>=60){
		t.mm=t.mm%60;
		t.hh++;
	}
	if (t.hh>12){
		t.hh=t.hh%12;
	}
	return 1;
	
}

bool time::isvalid(){
	if (hh>12)
		return false;
	if (mm>=60)
		return false;
	if (ss>=60)
		return false;
}

int main(){
	time t1,t2,t3;
	int h,m,s;
	cout<<"t1:";
	cin>>h>>m>>s;
	t1=time(h,m,s);
	cout<<"t2:";
	cin>>s;
	t1=time(s);
	t1.getdata();
	t2.getdata();
	t3=t3.add(t1,t2);
	t3.getdata();
	
}

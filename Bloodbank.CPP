#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <fstream>
#include <string.h>
#include <stdlib.h>

/*     Name  : Rishabh Ghosh 3rd SEM C.E       */
/*     No	 : IU1541050012                    */

/*     Made in Dev C++ 5.11                    */  

using namespace std;
class donor
{
public:

void getdoner()
{
	system("cls");
ofstream od;
int age,weight,quan;
char name[30],ill[3],blood[3];

cout<<"*******REGISTRATION FORM*******"<<endl<<endl<<endl;
cout<<"enter name :";
cin>>name;
cout<<endl<<"enter age :";
cin>>age;
cout<<endl<<"enter weight :";
cin>>weight;
cout<<endl<<"do you have illness from past life :";
cin>>ill;
cout<<endl<<"enter blood group :";
cin>>blood;
cout<<endl<<"quantity of blood you want to donate :";
cin>>quan;
cout<<endl<<endl<<endl<<"thanks for the details, please wait for your form to be aproved by our admins.";
getch();
od.open("donor.txt",ios::app);
od<<name<<endl<<age<<endl<<weight<<endl<<ill<<endl<<blood<<endl<<quan<<endl;
od.close();

}
};



class hospital
{
public:

void gethospital()
{
system("cls");
ofstream oh,hh;
char group[3],name1[30];
int quan1,m;
char hack[4];
cout<<"*******HOSPITAL ADMIN******"<<endl<<endl<<endl;
cout<<"hack me:";
cin>>hack;
if(!strcmp(hack,"hack"))
{
system("cls");
cout<<"*******HOSPITAL ADMIN******"<<endl<<endl<<endl;
cout<<"enter hospital name :";
cin>>name1;
cout<<endl<<"enter hospital id:";
cin>>m;
cout<<endl<<"requested blood group :";
cin>>group;
cout<<endl<<"requested quantity :";
cin>>quan1;
cout<<endl<<endl<<endl<<"thanks for the details, wait for the request to be aproved by our admins.";

oh.open("request.txt",ios::app);
hh.open("list.txt",ios::app);
oh<<name1<<endl<<m<<endl<<group<<endl<<quan1;
hh<<name1<<endl<<m<<endl<<group<<endl<<quan1;
oh.close();
hh.close();
getch();


}
else
{
	cout<<"hint:hack";
	getch();
}
}
};





class admin
{
public:

void getadmin()
{
system("cls");
cout<<"*******BLOOD BANK ADMIN*******"<<endl<<endl<<endl;
char hacked[6];
cout<<"hack me:";
cin>>hacked;
if(!strcmp(hacked,"hacked"))
{

while(1)
{
system("cls");
char name[30],ill[3],blood[3],name1[30],group[3];
int s=0,flag=0,d=0,dd=0,mm=0,yy=0,age=0,weight=0,quan=0,quan1=0,m=0,k=0;
int ddd=0,mmm=0,yyy=0,dd1=0,dd2=0,mm1=0,mm2=0,yy1=0,yy2=0;
cout<<"*******BLOOD BANK ADMIN*******"<<endl<<endl<<endl;
cout<<"1.donors applications."<<endl<<"2.database of blood sample."<<endl<<"3.history."<<endl<<"4.list of hospitals."<<endl<<"5.hospital requests."<<endl<<"6.exit."<<endl<<endl;
cout<<"press the assigned number in which want to enter :";
cin>>s;


if(s==1)
{

	ifstream od;
	od.open("donor.txt");
	cout<<"******DONORS APPS********"<<endl<<endl<<endl;
	while(1)
	{
	system("cls");
	cout<<"******DONORS APPS********"<<endl<<endl<<endl;
     name[0]='\0';
	od>>name;
	if(name[0]=='\0')
	{ cout<<endl<<"----------------------";
	  getch();
	  break;
	  }

	 od>>age>>weight>>ill>>blood>>quan;
	 cout<<"name :"<<name;
	 cout<<endl<<"age :"<<age;
	 cout<<endl<<"any illness:"<<ill;
	 cout<<endl<<"blood group:"<<blood;
	 cout<<endl<<"quantity:"<<quan;
	 cout<<endl;
	cout<<"1.accept"<<endl<<"2.reject"<<endl<<endl<<"press the asigned number :";
	cin>>d;
	if(d==1)
	{

    ofstream oa;
	cout<<"accepted"<<endl;
	cout<<"enter todays date as"<<endl<<"dd:";
	cin>>dd;
	cout<<"mm:";
	cin>>mm;
	cout<<"yyyy:";
	cin>>yy;
	oa.open("accept.txt",ios::app);
	 oa<<name<<endl<<age<<endl<<weight<<endl<<ill<<endl<<blood<<endl<<quan<<endl<<dd<<endl<<mm<<endl<<yy<<endl;
     oa.close();
     getch();


	  }
	else if(d==2)
	{ cout<<"rejected"<<endl;
	getch();
	}
	else
	{ cout<<"bad input"<<endl;
	getch();
	}
	}
	od.close();
	remove("donor.txt");
}

else if(s==2)
{
	system("cls");
	ifstream oa;
	oa.open("accept.txt");
	cout<<"******DATABASE*********"<<endl;
	while(1)
	{
     name[0]='\0';
	oa>>name;
	if(name[0]=='\0')
	{ cout<<endl<<"--------------------------";
	  getch();
	  break;
	}
	oa>>age>>weight>>ill>>blood>>quan>>dd>>mm>>yy;
	cout<<"blood group:"<<blood<<endl<<"donors name:"<<name<<endl<<"quantity in ml:"<<quan<<endl<<"date when blood is received:"<<dd<<"/"<<mm<<"/"<<yy<<endl<<endl;

	}
	oa.close();
}

else if(s==3)
{   system("cls");
	cout<<"********HISTORY*********"<<endl<<endl;

	
	ifstream hr;
	hr.open("acceptr.txt");

	cout<<"enter the dates within which range you want to search"<<endl;
	cout<<"1st date:"<<endl<<"dd:";
	cin>>dd1;
	cout<<"mm:";
	cin>>mm1;
	cout<<"yyyy:";
	cin>>yy1;
	cout<<"2nd date:"<<endl<<"dd:";
	cin>>dd2;
	cout<<"mm:";
	cin>>mm2;
	cout<<"yyyy:";
	cin>>yy2;
	cout<<endl;
	
	int a,b,c;	
	
	while(1)
	{
		 name1[0]='\0';
	hr>>name1;
	if(name1[0]=='\0')
	{

	  getch();
	  break;
	}
	hr>>m>>group>>quan1>>ddd>>mmm>>yyy;

	a=10000*yy1+100*mm1+dd1;
	b=10000*yyy+100*mmm+ddd;
	c=10000*yy2+100*mm2+dd2;

    //cout<<"a"<<a<<"b"<<b<<"c"<<c;
	if(a<=b && c>=b)
	{
		cout<<"blood group:"<<group<<endl<<"quantity in ml:"<<quan1<<endl<<"date when blood is given:"<<ddd<<"/"<<mmm<<"/"<<yyy<<endl<<"--------------------------------------------"<<endl;
	}





}
hr.close();
}

else if(s==4)
{
	system("cls");
	cout<<"**********HOSPITAL LIST***********"<<endl<<endl;
	cout<<"1.view list"<<endl<<"2.update"<<endl<<"3.delete"<<endl;
	cout<<"press the asigned number :";
	cin>>d;
	if(d==1)
	{
		system("cls");
		cout<<"**********HOSPITAL LIST***********"<<endl<<endl;
		ifstream hh;
		hh.open("list.txt");
	while(1)
	{
	name1[0]='\0';
	hh>>name1;
	if(name1[0]=='\0')
	{ cout<<endl<<"----------------------";
	getch();
	break;
	}
	hh>>m>>group>>quan1;
	cout<<"name of hospital :"<<name1;
	cout<<endl<<"hospital id :"<<m;
	cout<<endl<<endl;

	}
	hh.close();
}
	else if(d==2)
	{
		system("cls");
		cout<<"**********HOSPITAL LIST***********"<<endl<<endl;
	k=0;
	cout<<endl<<"give the hospital id you want to update :";
	cin>>k;

	ifstream hh;
	hh.open("list.txt");
	ofstream ht;
	ht.open("t.txt");
	while(1)
	{
		m=0;
		name1[0]='\0';
		hh>>name1;
		if(name1[0]=='\0')
		{
			cout<<endl<<"--------------------------";
			getch();
			break;
		}
		hh>>m>>group>>quan1;
		if(k!=m)
		{
			ht<<name1<<endl<<m<<endl<<group<<endl<<quan1;


		}
		else
		{
			cout<<"enter the new name:";
			cin>>name1;
			ht<<name1<<endl<<m<<endl<<group<<endl<<quan1;
			cout<<"updated";
			getch();
		}

	}
	hh.close();
	ht.close();
	remove("list.txt");
	rename("t.txt","list.txt");
	}

	else if(d==3)
	{
		
		cout<<"**********HOSPITAL LIST***********"<<endl<<endl;
	k=0;
	cout<<endl<<"give the hospital id you want to delete :";
	cin>>k;

	ifstream hh;
	hh.open("list.txt");
	ofstream htt;
	htt.open("tt.txt");

	while(1)
	{
		m=0;
		name1[0]='\0';
		hh>>name1;
		if(name1[0]=='\0')
		{
			cout<<endl<<"-------------------";
			getch();
			break;
		}
		hh>>m>>group>>quan1;
		if(k!=m)
		{

			htt<<name1<<endl<<m<<endl<<group<<endl<<quan1;

		}
		else
		{
			cout<<endl<<"deleted";
		}


	}
	hh.close();
	htt.close();
	remove("list.txt");
	rename("tt.txt","list.txt");
	}
	else
	{
		cout<<"bad input";
		getch();
	}
}


else if(s==5)
{
	system("cls");
	cout<<"********HOSPITAL REQUESTS*********"<<endl<<endl<<endl;
	ifstream oh;
	oh.open("request.txt");
	while(1)
	{
	system("cls");
	cout<<"*********HOSPITAL REQUESTS********"<<endl<<endl<<endl;
	name1[0]='\0';
	oh>>name1;
	if(name1[0]=='\0')
	{ cout<<endl<<"--------------------";
	getch();
	break;
	}
	oh>>m>>group>>quan1;
	cout<<"name of hospital :"<<name1;
	cout<<endl<<"hospitalk id :"<<m;

	cout<<endl<<"blood group needed:"<<group;
	cout<<endl<<"quantity needed:"<<quan1;
	cout<<endl;
	cout<<"1.accept"<<endl<<"2.reject"<<endl<<endl<<"press the asigned number :";
	cin>>d;
	if(d==1)
	{ ofstream hr;

	cout<<"accepted"<<endl;
	cout<<"enters todays date as"<<endl<<"dd:";
	cin>>ddd;
	cout<<"mm:";
	cin>>mmm;
	cout<<"yyyy:";
	cin>>yyy;
	 hr.open("acceptr.txt",ios::app);
	 hr<<name1<<endl<<m<<endl<<group<<endl<<quan1<<endl<<ddd<<endl<<mmm<<endl<<yyy<<endl;
     hr.close();
	 getch();

	  }
	else if(d==2)
	{ cout<<"rejected";
	getch();
	 }
	else
	{ cout<<"bad input"; getch(); }
	}
	oh.close();
	remove("request.txt");
}

else if(s==6) {flag=1;

}
else{cout<<"bad input";
	getch();
}

if(flag==1)
{ break;}

}
}
else
{
	cout<<"hint:hacked";
	getch();
}
}
};

int main()
{
int a,f=0;

while(1)
{
system("cls");
cout<<"*********BLOOD BANK***********"<<endl<<endl<<endl;

cout<<"1.blood donor form"<<endl<<"2.blood bank admin"<<endl<<"3.hospital admin"<<endl<<"4.exit"<<endl;

cout<<"press assigned number to perform the tasks or press 4 to exit :";
cin>>a;
if(a==1)
{ donor d;
  d.getdoner();
   }

else if(a==2)
{ admin a;
a.getadmin();
 }

else if(a==3)
{ hospital h;
h.gethospital();
 }
else if(a==4)
{f=1;}
else
{ cout<<"bad input";
getch();
}

if(f==1)
{ break; }



}
return 0;
}




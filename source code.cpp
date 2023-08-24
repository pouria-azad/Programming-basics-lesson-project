
#include <iostream>
#include <string>
using namespace std;

class ajnas
{
public:

	string namejens;
	string karkhane;
	int gheymat;
} ;


void estekhdam(string &a,string &b,int &c){

cout<<"be bakhsh estekhdam khosh amadid lotfan ettelaat khod ra vared konid"<<endl<<endl;
cout<<"name:"<<endl;
cin>>a;
cout<<endl<<"lastname:"<<endl;
cin>>b;
cout<<endl<<"sabeghe forushandegi ra be sal vared konid: (0 ya 1 ya 2 ya ...)"<<endl;
cin>>c;
 char nm;
switch(c){

case 0:
cout<<endl<<"shoma bedarde forooshandegi nemikhorid bye";
break;

case 1:

cout<<"hadaghale hoghooghe shoma 100t va hadaksar 400t ast\n aya marahel ra edame midahid\?(y|n)"<<endl;
      cin>>nm;
      if((nm=='y')||(nm=='Y'))
cout<<endl<<"etelaate shoma sabt shod\t baraye takmile marahel be site www.estekhdam.ir/293kdf; morajeh konid ba tashakor";
	break;
	
case 2:

cout<<"hadaghale hoghooghe shoma 400t va hadaksar 900t ast\n aya marahel ra edame midahid\?(y|n)"<<endl;
      cin>>nm;
      if((nm='y')||(nm='Y'))
cout<<endl<<"etelaate shoma sabt shod\t baraye takmile marahel be site www.estekhdam.ir/293kdf; morajeh konid ba tashakor"<<endl;
	break;
	
	case 3:
char nm;
cout<<"hadaghale hoghooghe shoma 900t va hadaksar 1,500t ast\n aya marahel ra edame midahid\?(y|n)"<<endl;
      cin>>nm;
      if(nm=='y'||nm=='Y')
cout<<endl<<"etelaate shoma sabt shod\t baraye takmile marahel be site www.estekhdam.ir/293kdf; morajeh konid ba tashakor"<<endl;
	break;
	
	case 4:
	case 5:
	case 6:
char N;
cout<<endl<<"lotfan be forooshgahe dovome ma morajeeh konid"<<endl;
break;

default:
cout<<endl<<"motasefim sharayete estekhdame  shoma ra nadarim"<<endl;
break;
}
char S='y';
 }


void function(int V, int a,long &keyk_hybye,long &pofak_yek,long &pofak_do,long &chipse,long &bastani11,long &bastani22){

ajnas keyk;
keyk.namejens="hibye";
keyk.karkhane="shirinasal";
keyk.gheymat=1500;

ajnas pofak1;
pofak1.namejens="chitoz";
pofak1.karkhane="dina";
pofak1.gheymat=6000;

ajnas pofak2;
pofak2.namejens="pofak_namaki";
pofak2.karkhane="fooda";
pofak2.gheymat=4200;

ajnas chips;
chips.namejens="chuchles";
chips.karkhane="be_hara";
chips.gheymat=6500;

ajnas bastani1;
bastani1.namejens="kim_salar";
bastani1.karkhane="mihan";
bastani1.gheymat=1000;

ajnas bastani2;
bastani2.namejens="kim_zaferani";
bastani2.karkhane="mihan";
bastani2.gheymat=2000;
	

esc:	cout<<"\nche jensi ra mikhahid bekharid\?\n(baraye entekhab shomare jense morede nazar ya esm an ra vared namaeid)"<<endl;
	
	float adad[4]={1,2,3,4};
	cout<<"\nkeyk ="<<"("<<adad[0]<<")"<<endl;
	cout<<"\npofak ="<<"("<<adad[1]<<")"<<endl;
	cout<<"\nchips ="<<"("<<adad[2]<<")"<<endl;
	cout<<"\nbastani ="<<"("<<adad[3]<<")"<<endl;
	int b;
	cin>>b;
	cout<<"\n\nentekhab konid"<<endl;
//___________________________
	if( b==1)
{
		cout<<adad[0]<<")"<<keyk.namejens<<"\t"<<keyk.karkhane<<"="<<keyk.gheymat<<endl;
	cout<<"chand ta keyk mihkhahid?"<<endl;
	int hibye;
	cin>>hibye;
	
	keyk_hybye +=hibye*keyk.gheymat;
	cout<<"sefaresh sabt shod. gheymat="<<keyk_hybye<<endl;
		cout<<"aya kharid ra edame midahid\?(y|n)\n";
	char F;
	cin>>F;
	if(F=='y')
	goto esc;}
	
//___________________________
	else	if(b== 2)
	{cout<<adad[0]<<")"<<pofak1.namejens<<"\t"<<pofak1.karkhane<<"="<<pofak1.gheymat<<endl;
	cout<<adad[1]<<")"<<pofak2.namejens<<"\t"<<pofak2.karkhane<<"="<<pofak2.gheymat<<endl;

	cout<<"che model pofak mikhahid\?(1|2)\n";
	int model;
	cin>>model;
if(model==1){

	cout<<"chand ta pofak mihkhahid?"<<endl;
	int pof;
	cin>>pof;
	pofak_yek +=pof*pofak1.gheymat;
	cout<<"sefaresh sabt shod. gheymat="<<pofak_yek<<endl;
		cout<<"aya kharid ra edame midahid\?(y|n)\n";
	char F;
	cin>>F;
	if(F=='y')
	goto esc;
}
	if(model==2){
	
	cout<<"chand ta pofak mihkhahid?"<<endl;
	int pofa;
	cin>>pofa;
	pofak_do +=pofa*pofak2.gheymat;
	cout<<"sefaresh sabt shod. gheymat="<<pofak_do<<endl;
		cout<<"aya kharid ra edame midahid\?(y|n)\n";
	char F;
	cin>>F;
	if(F=='y')
	goto esc;
}
	}
//___________________________


	else	if(b== 3){
	
	cout<<adad[0]<<")"<<chips.namejens<<"\t"<<chips.karkhane<<"="<<chips.gheymat<<endl;

	int chp;
	cin>>chp;
	
	chipse +=chp*chips.gheymat;
	cout<<"sefaresh sabt shod. gheymat="<<chipse<<endl;
	cout<<"aya kharid ra edame midahid\?(y|n)\n";
	char F;
	cin>>F;
	if(F=='y')
	goto esc;}
//___________________________



	else	if(b==4)
	
	{cout<<adad[0]<<")"<<bastani1.namejens<<"\t"<<bastani1.karkhane<<"="<<bastani1.gheymat<<endl;
	cout<<adad[1]<<")"<<bastani2.namejens<<"\t"<<bastani2.karkhane<<"="<<bastani2.gheymat<<endl; 

	cout<<"che model bastani mikhahid\?(1|2)\n";
	int model;
	cin>>model;
if(model==1){

	cout<<"chand ta bastani mihkhahid?"<<endl;
	int bst;
	cin>>bst;
	bastani11 +=bst*bastani1.gheymat;
	cout<<"sefaresh sabt shod. gheymat="<<bastani11<<endl;
		cout<<"aya kharid ra edame midahid\?(y|n)\n";
	char F;
	cin>>F;
	if(F=='y')
	goto esc;
}
	if(model==2){
	
	cout<<"chand ta bastani mihkhahid?"<<endl;
	int bst2;
	cin>>bst2;
	bastani22 +=bst2*bastani2.gheymat;
	cout<<"sefaresh sabt shod. gheymat="<<bastani22<<endl;
		cout<<"aya kharid ra edame midahid\?(y|n)\n";
	char F;
	cin>>F;
	if(F=='y')
	goto esc;
}

}	else;
		
}


void fun2(int es,long A,long  B1,long B2,long C,long D1,long D2){


{
cout<<"_______________"<<endl;
cout<<"be bakhshe sefareshat khosh amadid\n\n";
cout<<"sefareshate keyk:"<<endl;
cout<<A/1500<<" ta keyke hibye be mablaghe= "<<A<<endl;
cout<<"_______________"<<endl;
cout<<"sefareshate pofake chitoz:"<<endl;
cout<<B1/6000<<" ta pofake chitoz be mablaghe= "<<B1<<endl;
cout<<"sefareshate pofake namaki:"<<endl;
cout<<B2/4200<<" ta pofake namaki be mablaghe= "<<B2<<endl;
cout<<"_______________"<<endl;
cout<<"sefareshate chips:"<<endl;
cout<<C/6500<<" ta chips chakels be mablaghe= "<<C<<endl;
cout<<"_______________"<<endl;
cout<<"sefareshate bastani kim_salar:"<<endl;
cout<<D1/1000<<" ta bastani salar be mablaghe= "<<D1<<endl;
cout<<"sefareshate bastani kim_zaferani:"<<endl;
cout<<D2/2000<<" ta bastani zaferani be mablaghe= "<<D2<<endl;
}
}


int main(){

	
	string Q,Q2;
	int Q3;
	int j;
	long A=0,B1=0,B2=0,C=0,D1=0,D2=0,a,es;
	char b='y';
	while(b=='y'||b=='Y'){
	

cout<<"shomare eshterak ra vared konid= \n";
cin>>es;


string Z[2]={"Ali","Zahra"};
switch(es)
{
case 254:
	cout<<"ba salam va khoshamdgooyi khdmat agha/khanoom "<<Z[0]<<" lotfan adade morde nazar ra baraye khadamat vared konid\n\n";
	break;
case 255:
	cout<<"ba salam va khoshamdgooyi khdmat agha/khanoom "<<Z[1]<<" lotfan adade morde nazar ra baraye khadamat vared konid\n\n";
	break;
	default:
		cout<<"ba salam va khoshamdgooyi khdmat aziz va tashakor baraye avvalin kharid shoma "<<endl<<" lotfan adade morde nazar ra baraye khadamat vared konid\n\n";
}
	

cout<<"baraye kharid add (1) ra vared konid\n";
cout<<"baraye estekhdam dar forooshgah add (2) ra vared konid\n";
cout<<"baraye vorud be ghesmate forooshande ramz ra vared konid\n";
cin>>a;
if(a==1)
function(es ,a,A, B1,B2,C,D1,D2);

if(a==2)
estekhdam(Q,Q2,Q3);


if(a==2503){

cout<<"ch mikhahid/?estekhdami ha(1))//sefaresh ha(2)"<<endl;
cin>>j;
if(j==2){
fun2(es,A, B1,B2,C,D1,D2); }
if(j==1){
cout<<"name moshtari= "<<Q<<endl;
cout<<"lastname moshtari= "<<Q2<<endl;
cout<<"sabeghe kar moshtari= "<<Q3<<" sal"<<endl;
}}

cout<<"aya mikhahid be menu beravid\?(y|n))"<<endl;
cin>>b;


}

return 0;}


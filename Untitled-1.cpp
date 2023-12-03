#include<iostream>
using namespace std;


int ** matrice()
{
	int a,b;
	int ** tab;
	
	cout << " Donnez nbr de lignes : " ;
	cin >> a ;
	cout << " Donnez nbr de colonnes : " ;
	cin >> b ;
	 
	 tab=new int*[a];
	 for(int i=0; i<a;i++)
	 	tab[i]=new int[b];
	for(int i=0; i<a;i++){
		for(int j=0;j<b;j++){
			cout << " entrer la valeur tab[ "<<i<<"]["<<j<<"]=";
			cin >> tab[i][j];
			cout<<"\n";
			}
		}
	for(int i=0; i<a;i++){
		for(int j=0;j<b;j++){
			cout<< tab[i][j]; 
			cout<<"\t";
			}
			cout<<"\n";
		}
	return tab;
}

int * mot()
{ 	int taille;
	cout<< "entrer la taille";
	cin>>taille;
	int *t= new int[taille+1];//taille +1 pour stocker la taille du mot dans la 1ere case
	t[0]=taille+1;
	for(int i=1;i<t[0];i++)
	{	char ch; 
       	//LE CODE JDID kibda HNA==================================== 

		while(ch!='+' && ch!='-' && ch!='0' && ch!='1' && ch!='2' && ch!='3' && ch!='i')
		{	cout<<"entez un caractere valide +,-,0,1,2,3 ou i \n";
			cin>>ch;//2
		}
		if(ch=='+')
			t[i]=0;
		else if(ch=='-')
			t[i]=1;
		else if(ch=='0')
			t[i]=2;
		else if(ch=='1')
			t[i]=3;
		else if(ch=='2')
			t[i]=4;
		else if(ch=='3')
			t[i]=5;
		else 
			t[i]=6;
		     //KISALI HNA ++++++++++++++++++++++++++++++++++++++++++++
        }
	return t;
}

int trace(int **m,int *T)
{
	int trace=m[0][T[1]];
	int cnt=2;
	while(cnt<T[0] && trace!=-1){
		trace=m[trace][T[cnt]];
        cnt++;
	}
	cout<<"\n trace: "<< trace ;
	return trace;
}

void reconnaissance(int trace)
{	if(trace==5)
		cout<<"le mot appartient au langage \n";
	else 
		cout<<"le mot n'appartient pas au langage \n";
	cout<<"\n trace: "<< trace ;
}
	



int main()
{
cout<<"*Analyseeur lexical*\n";
int ** M =matrice();
string test="oui";
while(test=="oui"){
	cout<<"*Analyseeur lexical*\n";
	int *T=mot();
	int t = trace(M,T);
	reconnaissance(t);
	cout<<"pour continuer tapez oui: \n";
	cin>>test;
}
return 0;
}
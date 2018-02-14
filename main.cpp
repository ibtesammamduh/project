#include <iostream>
using namespace std;

char matrix[3][3]={'1','2','3','4','5','6','7','8','9'};
char player='x';



void print(){
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<< matrix[i][j]<<"  ";
		}
		cout<<endl;
	}	
}





void play(){
	char cell;
	cout<<"choose your cell"<<player<<endl;
	cin>>cell;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
		if (matrix[i][j]=cell){
		 matrix[i][j]=player;
  	}
		}
	
	
if(player=='x')	
player='o';
else
player='x';
	
}

}





char win(){
	int x_count,o_count;
	int counter=0;
	for(int i=0;i<3;i++)
{
		for(int j=0;j<3;j++)
{
			if(matrix[i][j]!='x'&&matrix[i][j]!='o')
           counter++;
		if (matrix[i][j]=='x')
		x_count++;
		else if(matrix[i][j]=='o')
		o_count++;
		if(x_count==3||o_count==3){
			return x_count>o_count?'x':'o';
		}
		
	}
	 x_count=0;
	 o_count=0;
}
for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
		if (matrix[j][i]=='x')
		x_count++;
		else if(matrix[j][i]=='o')
		o_count++;
		if(x_count>o_count){
		return 'x';
	}
		else
		return 'o';

}
      x_count=0;
	  o_count=0;
}
if(matrix[0][0]=='x'&&matrix[1][1]=='x'&&matrix[2][2]=='x')
return 'x';
else if(matrix[0][0]=='o'&&matrix[1][1]=='o'&&matrix[2][2]=='o')
return 'o';
else if(matrix[0][2]=='x'&&matrix[1][1]=='x'&&matrix[2][0]=='x')
return 'x';
else if(matrix[0][2]=='o'&&matrix[1][1]=='o'&&matrix[2][0]=='o')
return 'o';

if(counter==0)
return 'z';
return'.';
}
	




int main() {
	while(win()=='.'){
		print();
		play();
	}
	print();
	if(win()=='z')
	cout<<"no win"<<endl;
	else
	cout<<win()<<endl;
	
	system("pause");
	return 0;
}

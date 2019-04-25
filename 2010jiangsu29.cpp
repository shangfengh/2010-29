#include<cstdio>
long long i,j,k,n,m;
struct ng{
	int l,r;
}il[5][5];
//1=A 0=a
void pr(){
	++m;
	if(il[4][2].l==il[4][1].l&&il[4][2].r==il[4][1].r&&!il[4][2].l&&!il[4][1].r)++k;
    printf("ii3 %c%c  ii5 %c%c iii1 %c%c  iii2 %c%c  iiii1 %c%c  iiii2 %c%c\n",
	        (il[2][3].l)?'A':'a',(il[2][3].r)?'A':'a',(il[2][5].l)?'A':'a',(il[2][5].r)?'A':'a',
			(il[3][1].l)?'A':'a',(il[3][1].r)?'A':'a',(il[3][2].l)?'A':'a',(il[3][2].r)?'A':'a',
			(il[4][1].l)?'A':'a',(il[4][1].r)?'A':'a',(il[4][2].l)?'A':'a',(il[4][2].r)?'A':'a'
			);
}
void iiii2(){
	il[4][2].l=il[3][1].l;il[4][2].r=il[3][2].l;
    pr();

	il[4][2].l=il[3][1].r;il[4][2].r=il[3][2].l;
	pr();
	
	il[4][2].l=il[3][1].l;il[4][2].r=il[3][2].r;
    pr();
	
	il[4][2].l=il[3][1].r;il[4][2].r=il[3][2].r;
    pr();

}
void iiii1(){
	il[4][1].l=il[3][1].l;il[4][1].r=il[3][2].l;
	iiii2();
	
	il[4][1].l=il[3][1].r;il[4][1].r=il[3][2].l;
	iiii2();
	
	il[4][1].l=il[3][1].l;il[4][1].r=il[3][2].r;
	iiii2();
	
	il[4][1].l=il[3][1].r;il[4][1].r=il[3][2].r;
	iiii2();
}
void iii2(){
    il[3][2].r=1;
	il[3][2].l=il[2][5].l;
	iiii1();
	il[3][2].l=il[2][5].r;
	iiii1();
}
void ii5(){
	il[2][5].l=1;il[2][5].r=1;
	iii2();
	il[2][5].l=1;il[2][5].r=0;
	iii2();
	il[2][5].l=0;il[2][5].r=1;
	iii2();
}
void iii1(){
    il[3][1].r=1;
	il[3][1].l=il[2][3].l;
	ii5();
	il[3][1].l=il[2][3].r;
	ii5();	
}
void ii3(){
	il[2][3].l=1;il[2][3].r=1;
	iii1();
	il[2][3].l=1;il[2][3].r=0;
	iii1();
	il[2][3].l=0;il[2][3].r=1;
	iii1();
}
int main(){
//	il[1][1].l=il[1][2].l=il[1][3].l=il[1][4].l=1;
	ii3();
	printf("%d/%d",k,m);
}

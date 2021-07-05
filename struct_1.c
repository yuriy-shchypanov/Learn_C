#include <stdio.h>

struct point
{
	int x;
	int y;
};

typedef struct
{
   char *isubacc;
   char *subacc_name;

} subacc;

struct point MakePoint(int x, int y)
{
	struct point ret_val;
	ret_val.x = x;
	ret_val.y = y;
	return ret_val;
}

struct point AddPoint (struct point p1, struct point p2)
{
	p1.x += p2.x;
	p1.y += p2.y;
	return p1;
}

int main(void)
{
	struct point pnt = {1,12};
	printf("%d\n",pnt.y);
	subacc s1;
	
	s1.isubacc = "26005183545";
	s1.subacc_name = "R:BASE";
	subacc *s2 = &s1;
	//printf("%s\n", (*s2).subacc_name);

	pnt = MakePoint(12,73);
	
	struct point p1 = {5,12};
	struct point p2 = {7,8};
	p2 = AddPoint(p1,p2);

	//printf("%d %d\n",p2.x,p2.y);
	//printf("%d %d\n",p1.x,p1.y);

	struct point *ponter_point = &p1;
	printf("%d %d \n",(*ponter_point).x, (*ponter_point).y);
	printf("%d %d \n",ponter_point->x, ponter_point->y);


	return 0;
}
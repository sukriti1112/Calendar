void main()
{ int date,month,year,i,j,odd=0,lp=0,ody=0,oddt=0;
 clrscr();
  scanf("%d",&date);
  scanf("%d",&month);
  scanf("%d",&year);
  for (i=1;i<=year-1;i++)
  { if (i%100==0)
    {   if (i%400==0)
       ody+=2;
       else
       ody++;
    }
    else if (i%4==0)
    { ody+=2;
    }
    else
    { ody++;
    }
  }
  if (year%100==0)
    {   if (year%400==0)
       lp++;
       }
  else if (i%4==0)
    { lp++;
    }
  ody=ody%7;
  for (j=1;j<month;j++)
  {  switch (j)
    {
     case 1:odd+=3;
	   break;
    case 2:if (lp==1)
	    odd+=1;
	   break;
    case 3:odd+=3;
	   break;
    case 4:odd+=2;
	   break;
    case 5:odd+=3;
	   break;
    case 6:odd+=2;
	   break;
    case 7:odd+=3;
	   break;
    case 8: odd+=3;
	    break;
    case 9: odd+=2;
	    break;
    case 10: odd+=3;
	     break;
    case 11: odd+=2;
	     break;
    case 12: odd+=3;
  }    }
  odd=odd%7;
  oddt=odd+ody+(date%7);
  oddt=oddt%7;
  switch(oddt)
  { case 0:printf("Sunday");
	   break;
    case 1:printf("Monday");
	   break;
    case 2:printf("Tuesday");
	   break;
    case 3:printf("Wednesday");
	   break;
    case 4:printf("Thursday");
	   break;
    case 5:printf("Friday");
	   break;
    case 6:printf("Saturday");

    }
 getch();
}

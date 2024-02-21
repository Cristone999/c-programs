#include<stdio.h>
#include<conio.h>
int main()
{
	int z;


	printf("1=To find the sum of two digits\n2= Calculation the simple interst\n3= Check the number is positive or negative\n4= Check the number is odd or even\n5= Check the largest among three numbers\n6= Print the sum of the series\n7= To read n number display the sum\n8= Calculate the factorial of number\n9= Calculate the electricity bill\n10= Find the lcm and hcf of two number\n11= Print the fibonacci series up to n number\n12= To count the number of digits in a number\n13= To get the reverse of the a munber\n14= To find the prime factors\n15= Check a number is grater than N1,less than N2 and divisible by 7\n");

    	scanf("%d",&z);
	switch(z)
	{
		case 1:
    {

	int a,b,s;
    printf("Enter two numbers: ");
    scanf("%d%d", &a,&b);
    s = a+b;
    printf("%d + %d = %d\n\n",a,b,s);
    break;
   }
        case 2:
    {
    float p,t,r,i;
    printf("Enter the principal: ");
    scanf("%f",&p);
    printf("Enter the rate: ");
    scanf("%f",&r);
    printf("Enter the time: ");
    scanf("%f",&t);
    i=(p*r*t)/100;
    printf("The Simple interest is %.1f\n",i);

	break;
	}
	    case 3:
	{
		int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    if (n<0)
        {
		printf("%d is a negative number \n", n);
    }
	else if(n>0){

        printf("%d is a positive number \n", n);
    }
    else
    {
    	printf("%d is a neither positive nor negative number\n ",n);
	}
	}
	break;
	 case 4:
	{
	int a;
    printf("Enter an number: ");
    scanf("%d", &a);
    if(a%2 == 0)
        printf("%d is even.\n",a);
    else
        printf("%d is odd.\n",a);
    break ;
	 }
	  case 5:
	{
	int a,b,c;
    printf("Enter any three different numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b && a>c)
	{
	printf("%d is the largest number.\n",a);
    }
    else if (b>a && b>c)
	{
	 printf("%d is the largest number.\n",b);
    }
    else{

    printf("%d is the largest number.\n",c);
     }
	  break;
	}
	  case 6:
	{  int n, i, sum = 0;
    printf(" Enter a number: \n");
    scanf("%d", &n);
    for (i=0; i<=n; i++)
    {
        sum =sum+i;
    }
    printf("Sum of the first %d number is: %d\n",n,sum);
	break;
    }
	 case 7:
	{
        int n, i, num, sum = 0;

        // Read the number of elements from the user
        printf("Enter the number n: ");
        scanf("%d", &n);

        // Read 'n' numbers and calculate the sum
        printf("Enter %d numbers:\n", n);
        for (i = 0; i < n; i++) {
            scanf("%d", &num);
            sum =sum + num;
    }

    // Display the sum
    printf("Sum of the n numbers is: %d\n\n", sum);
break;

	 case 8:
	{
		int i,f=1,n;
		printf("enter the no upto which you want the factorial for");
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			f=f*i;
		}
	printf("the factorial of %d is %d \n",n,f);
	 break;
	}
	case 9:
	{
		//  Given that rs  80 for first  20 units then
	// rs 8 for next 100 units and after
	// rs 10 per unit for any more units left
	float unit,rs;
	printf("enter the  no. of units consumed");
	scanf("%f",&unit);
	if(unit<=20)
	{
		rs=4*unit;
	}
	else if(unit>20 && unit<=120)
	{
		rs=80+(unit-20)*0.08;
	}
	else if(unit>120)
	{
		rs=80+100*0.08+(unit-120)*10;
	}
	printf("the electricity bill of %f unit is %f\n\n  ",unit,rs);
}
	 break;

	case 10:
	    // hcf and lcm
	{
	int a,b,x,y,l;
	printf("enter the two number");
	scanf("%d%d",&a,&b);
	x=a;
	y=b;
	while(x!=y)
	{
		if(x>y)
		{
			x=x-y;
		}
		else
		{
			y=y-x;
		}
	l=(a*b)/x;
}
	printf("the hcf is %d\n",x);
	printf("the lcm is %d\n",l);
	break;
	}
	case 11:
	{
		// Fibonacci series
	int a=0,b=1,i,c,n;

	printf("enter the number upto which you want to display the Fibonacci series");
	scanf("%d",&n);
	printf("%d\t",a);
	printf("%d\t",b);
	for(i=1;i<=n-2;i++)
	{
		c=a+b;
		printf("%d\t",c);
		a=b;
		b=c;
	}

	 break;
	}
	case 12:
	{
	// count the number of digits int the given number
   int num, count = 0;

    // Input from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Count the number of digits
    while (num != 0) {
        num = num/10;  // Move to the next digit
        count++;
    }

    // Display the result
    printf("Number of digits: %d\n", count);

	 break;
	}
	case 13:
	{
	int n,rev=0,rem;
    printf("Enter a number: ");
    scanf("%d", &n);
   while(n!=0) {
        rem=n%10;
        rev =rev*10+rem;
        n=n/10;
    }
    printf("Reverse of the digit=%d\n",rev);

	 break;
	}
	case 14:
	{
	int n,i;
	printf("enter the number ");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		while(n%i==0)
		{
			printf("%d is prime factor\n",i);
			n=n/i;
		}

	}
	break;
}
	case 15:
	{
	// if n is greater than n1, less than n2 divisible by 7
	int n1,n2,n;
	printf("enter the value of n");
	scanf("%d",&n);
	printf("enter value of n1 and n2");
	scanf("%d%d",&n1,&n2);
        if (n > n1 && n < n2 && n % 7 == 0) {
        printf("%d is greater than %d, less than %d, and divisible by 7.\n", n, n1, n2);
        } else {
            printf("%d does not meet the specified conditions.\n", n);
        }
	 break;
	}
	default:
   {
		printf("enter the number again\n");
		break;
	}
	}
	}
}










# include < stdio.h >
int  main( )
{
int  a[20], n, i, lar=0 ;
printf(" Enter the Numbers of terms in Array: ") ;
scanf("%d ",& n) ;
printf("\n Enter the Numbrs in Array: \n") ;
for (  i = 1 ; i < = n ; i++)
{
scanf("%d ",& a[i]) ;
}
for (  i = 1 ; i < = n ; i++)
{
if ( a[i] > lar )
{
lar = a[i] ;
}}
printf("\n The Larger Number is : %d",lar) ;
return ( 0 ) ;
}

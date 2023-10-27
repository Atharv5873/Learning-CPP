# Problem 5
Create a class Area to find the area of the triangle with proper exception handling. area=s1+s2+s3/(s1-s2)*(s2*s3) (All size must be less than 100 and positive) 
Sample testcase:
int main(){
Shape s1(30,20,10);
Shape s2(40,-20,30);
Shape s3(50,20,300);
Area a1(s1);
Area a2(s2);
Area a3(s3);
a1.findArea();
a2.findArea();
a3.findArea();
}
Sample output:
0.6
Negative s2 
Larger s3.

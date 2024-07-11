/* 
- Static keyword can use via two ways
    - Static variables : initialised once for lifetime of the program
    - Static objects
*/
// Static var example : 
void fun()
{
  static int a = 0 ; // initialization
  cout << a << endl;
  a++;
}

fun(); // 0
fun(); // 1
fun(); // 2

// Static variables in class are created & initialised once , they are shared by all the objects of the class

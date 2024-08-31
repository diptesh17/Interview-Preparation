// Working of Java Program 

/* 
                      compiler       Bytecode         JVM
      Hello.java       ----->        Hello.class      ----->   Machine code ( can run on w / mac )
*/

/* 
      JVM : Its an abstract machine that enables your computer to run a java program 
          : JVM translates bytecode into native machine code
*/

/* 
      JRE : Java runtime environment , it is software package that provides java class libraries , JVM 
            and other components that are required to run java application
*/

/* 
      JDK : Java development kit , it is software development kit required to develop applications in java
            Addition to JRE , JDK also contains no of development tools ( compilers , JavaDoc Java Debugger )  
*/

// Only run program : JRE enough 
// Want multiple things : JDK
// JDK : Has all of the above things 

// File name : Hello.java

public class Main {
    public static void main(String[] args)
    {
        System.out.print("Hello");
    }
}

 

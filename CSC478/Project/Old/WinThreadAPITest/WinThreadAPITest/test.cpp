//#include <windows.h>
//
//using namespace std;


#include <iostream>
#include <windows.h>
#include <time.h>

#using <mscorlib.dll>

using namespace std;
using namespace System;
using namespace System::Threading;

int threadno = 0;

ref class Example
{
public:

   // This thread procedure performs the task.
   static void ThreadProc( Object^ stateInfo )
   {

      // No state object was passed to QueueUserWorkItem, so 
      // stateInfo is 0.
      threadno++;
	  Console::WriteLine( threadno );
	  Console::WriteLine( "TIME TO PAY THE RENT BIATCH!!!! xD" );
	  float stuffs;
	  stuffs = ((rand()*.125)/(rand()*154.236))/(rand()*53.412);
	  stuffs = ((rand()*.125)/(rand()*154.236))/(rand()*53.412);
	  stuffs = ((rand()*.125)/(rand()*154.236))/(rand()*53.412);
	  stuffs = ((rand()*.125)/(rand()*154.236))/(rand()*53.412);
	  stuffs = ((rand()*.125)/(rand()*154.236))/(rand()*53.412);
	  Console::WriteLine( stuffs );
   }

   static void ThreadProcMaster( Object^ stateInfo )
   {
		  for (int x = 0; x<10000;x++)
		  ThreadPool::QueueUserWorkItem( gcnew WaitCallback( Example::ThreadProc ) );
	}
};



int main()
{

   // Queue LOTSA taskSKS!!!!
   for (int x = 0; x<4000;x++)
	   ThreadPool::QueueUserWorkItem( gcnew WaitCallback( Example::ThreadProcMaster) );

   Console::WriteLine( "Main thread does some work, then sleeps." );

   // If you comment out the Sleep, the main thread exits before
   // the thread pool task runs.  The thread pool uses background
   // threads, which do not keep the application running.  (This
   // is a simple example of a race condition.)
   Thread::Sleep( 1000 );
   Console::WriteLine( "Main thread exits." );
   Console::WriteLine( "All done" );
   system("PAUSE");
   return 0;
}

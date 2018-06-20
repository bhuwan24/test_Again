/*You are in slaveile*/

#include<iostream>
#include<mutex>
#include<thread>
#include<string>

using namespace std;

void print_shared(string s,int i)
{
 mutex mu;
 mu.lock();
 cout<<" String is:"<<s << i<<endl;
 mu.unlock();

}

void thread_func()
{
  for(int i=0;i<10;i++)
  print_shared("Manish in  Thread_func with id",i);
}



main()
{

thread th(thread_func);
 for(int i=0;i<10;i++)
 print_shared("Manish in  main with id",i);
 th.join();

}

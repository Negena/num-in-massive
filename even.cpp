#include <iostream>
  #include <algorithm>

  using namespace std;
  void maxmin (int M){
  int min,max;
  int N;
  cout<<"введите число"<<endl;
  cin>>N;
  min=max=N;
  for (int i=2;i<=M;i++)
  cout<<"введите число"<<endl;
  cin>>N;
  if(N<min){
  min=N;
 }
 if (N>max) {
 max=N;
}
}

  int main()
  {
  int mas[10];
  int N=10;
  cout<<"введите количество элеметов массива:\n";
  for (int i=0; i<10;i++) {
  cout<<"["<<i+1<<"]"<<":";
  cin>>mas[i];

}
   cout << "полученный ряд :\n";
   int p=sizeof(mas)/sizeof(mas[10]);
   for (int j=0;j<10;j++)
   cout<<mas[j]<<""<<endl;
   cout<<endl;

   sort(mas,mas+10);
   cout<<"четные числа массива:\n";
   for (int j=0;j<10; j++)
   if (mas[j]%2==0)
   cout<<mas[j]<<""<<endl;
   cout<<endl;

   sort(mas,mas+10);
   cout<<"нечетные числа массива :\n";
   for(int j=N-1;j>=0;j--)
   if (mas[j]%2!=0)
   cout<<mas[j]<<""<<endl;
   cout<<endl;

system("pause");
   return 0;
}

// PP_10_6.cpp 

#include <iostream>
#include "DynamicStringArray.h"

using namespace std;

int main()
{
   DynamicStringArray testStringArray;

   cout << "The size of the dynamic array is: " << testStringArray.getSize() << endl;
   cout << "Adding 5 entries\n";
   testStringArray.addEntry("the");
   testStringArray.addEntry("quick");
   testStringArray.addEntry("brown");
   testStringArray.addEntry("fox");
   testStringArray.addEntry("jumps");
   cout << "The size of the dynamic array is: " << testStringArray.getSize() << endl;
   cout << "Displaying the dynamic string array contents and out of bounds message: \n";

   for (int i = -10; i < testStringArray.getSize() + 10; i++)
   {
      if (testStringArray.getEntry(i) == nullptr)
         cout << "index: " << i << " This index location is out-of-bounds!\n";
      else
         cout << "index: " << i << " " << *testStringArray.getEntry(i) << "\n";
   }

   cout << "Creating a copy of the dynamic string array...\n";
   DynamicStringArray testStringArray2 = testStringArray;
   cout << "Displaying the copied string array contents and out of bounds message: \n";
   
   for (int i = -10; i < testStringArray2.getSize() + 10; i++)
   {
      if (testStringArray2.getEntry(i) == nullptr)
         cout << "index: " << i << " This index location is out-of-bounds!\n";
      else
         cout << "index: " << i << " " << *testStringArray2.getEntry(i) << "\n";
   }

   cout << "Creating a copy of the dynamic string array using the copy constuctor...\n";
   DynamicStringArray testStringArray3 (testStringArray);
   cout << "Displaying the copied string array contents and out of bounds message: \n";

   for (int i = -10; i < testStringArray3.getSize() + 10; i++)
   {
      if (testStringArray3.getEntry(i) == nullptr)
         cout << "index: " << i << " This index location is out-of-bounds!\n";
      else
         cout << "index: " << i << " " << *testStringArray3.getEntry(i) << "\n";
   }

   cout << "Using the last dynamic array, going to delete a few words...\n";

   cout << (testStringArray3.deleteEntry("fox") ? "Found word! Deleted.\n" :
   "Did not find word. Nothing deleted\n");
   cout << "The size of the dynamic array is: " << testStringArray3.getSize() << endl;
   cout << (testStringArray3.deleteEntry("jumps") ? "Found word! Deleted.\n" :
      "Did not find word. Nothing deleted\n");
   cout << "The size of the dynamic array is: " << testStringArray3.getSize() << endl;
   cout << (testStringArray3.deleteEntry("Thw") ? "Found word! Deleted.\n" :
      "Did not find word. Nothing deleted\n");

   cout << "Displaying the new array with deleted elements: \n";

   for (int i = -10; i < testStringArray3.getSize() + 10; i++)
   {
      if (testStringArray3.getEntry(i) == nullptr)
         cout << "index: " << i << " This index location is out-of-bounds!\n";
      else
         cout << "index: " << i << " " << *testStringArray3.getEntry(i) << "\n";
   }

   cout << (testStringArray3.deleteEntry("the") ? "Found word! Deleted.\n" :
      "Did not find word. Nothing deleted\n");

   for (int i = -10; i < testStringArray3.getSize() + 10; i++)
   {
      if (testStringArray3.getEntry(i) == nullptr)
         cout << "index: " << i << " This index location is out-of-bounds!\n";
      else
         cout << "index: " << i << " " << *testStringArray3.getEntry(i) << "\n";
   }

   cout << (testStringArray3.deleteEntry("quick") ? "Found word! Deleted.\n" :
      "Did not find word. Nothing deleted\n");

   cout << (testStringArray3.deleteEntry("brown") ? "Found word! Deleted.\n" :
      "Did not find word. Nothing deleted\n");

   cout << "The size of the dynamic array is: " << testStringArray3.getSize() << endl;


   cout << (testStringArray3.deleteEntry("brown") ? "Found word! Deleted.\n" :
      "Did not find word. Nothing deleted\n");

   cout << "The size of the dynamic array is: " << testStringArray3.getSize() << endl;
   return 0;
}


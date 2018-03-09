#include<iostream>
#include<string>
using namespace std;
void main()
{
	string msg,encryp;
	int key,temp;
	cout << "Enter a message: ";
	getline(cin, msg);
	cout << "Enter key: ";
	cin >> key;
	for (int i = 0; i < msg.length(); i++)
	{
		/*
		 The ASCII value of small 'a' is 97 so this condition is for checking  that is the ASCII value of a
		 character is less than 97, this means that entered message is a capital word
		*/
		if ((int)msg[i] < 97)
		{
			temp = (int)msg[i] + key;
			temp %= 90;              //last element of aplhabets i-e capital 'Z' has ASCII value 90
			if (temp < (int)'A')
				temp += 64;          //after modulo operator, if the value of temp is less than 65 then we will add this value to it because small alphabets starts from ASCII value 65
			encryp.push_back((char)temp);
		}
		else
		{
			temp = (int)msg[i] + key;
			temp %= 122;            //last element of aplhabets i-e small 'z' has ASCII value 90
			if (temp < (int)'a')
				temp += 96;         //after modulo operator, if the value of temp is less than 97 then we will add this value to it because small alphabets starts from ASCII value 97
			encryp.push_back((char)temp);
		}
	}
	cout << "Encrypted message: "<<encryp;
	system("pause>null");
	
}
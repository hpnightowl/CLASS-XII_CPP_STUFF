
#include"iostream"
void subseq(string str,str osf)
		{
			if (str.size()==0)
						{
							 std::cout<<osf<<endl;
							 return;
						}
				char ch =str[0];
				string ros =str.substr(1);
				subseq(ros,osf+ch);
				subseq(ros,osf);
		}
int main()
		{
			string str="abc";
			subseq(str," ");
			return 0;
		}

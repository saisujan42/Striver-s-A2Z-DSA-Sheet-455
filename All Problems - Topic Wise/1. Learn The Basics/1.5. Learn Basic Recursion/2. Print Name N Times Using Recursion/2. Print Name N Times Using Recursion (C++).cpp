void Recursion(int n, vector<string> &Answer)
{
	if(n == 0)
		return;
	Answer.push_back("Coding Ninjas");
	Recursion(n- 1, Answer);
}
vector<string> printNTimes(int n) 
{
	vector<string> Answer;
	Recursion(n, Answer);
	return Answer;
}
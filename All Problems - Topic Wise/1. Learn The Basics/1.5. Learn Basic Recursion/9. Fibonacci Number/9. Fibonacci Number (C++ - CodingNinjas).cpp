vector<int> generateFibonacciNumbers(int n) 
{
    vector<int> Answer;
    Answer.push_back(0);
    if(n == 1)
        return Answer;
    Answer.push_back(1);
    for(int i = 2; i < n; i++)
        Answer.push_back(Answer[i - 1] + Answer[i - 2]);
    return Answer;
}
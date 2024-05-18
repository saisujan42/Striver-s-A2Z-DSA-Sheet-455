void Sequence(int x, vector<int> &Answer)
{
    if(x == 0)
        return;
    Answer.push_back(x);
    Sequence(x - 1, Answer);
}
vector<int> printNos(int x) 
{
    vector<int> Answer;
    Sequence(x, Answer);
    return Answer;
}